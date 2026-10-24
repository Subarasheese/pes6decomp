"""Overlay-aware progress. A proof is identified by both image name and original hashes."""
import csv
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def valid_proof(target, proof, whole_image=True):
    return ((not whole_image or proof.get('original_image_sha1') == target['sha1'])
            and proof.get('target') == target['name'] and proof.get('text_matches') is True
            and proof.get('data_matches') is True and not proof.get('partial')
            and proof.get('text_sha1') == target['text_sha1']
            and proof.get('data_sha1') == target['data_sha1']
            and not proof.get('orphan_sources') and not proof.get('duplicate_sources'))


def publication_errors(head):
    path = ROOT/'config/overlays.json'
    if not path.exists():
        return []
    errors = []
    known = {t['name'] for t in json.loads(path.read_text())['images']}
    root = ROOT/'src/overlays'
    if root.exists():
        for child in root.iterdir():
            if child.is_dir() and child.name not in known and any(p.suffix in ('.c','.cpp') for p in child.rglob('*')):
                errors.append(f'{child.name}: unregistered overlay source target')
    for target in json.loads(path.read_text())['images']:
        name = target['name']
        sources = list((ROOT/'src/overlays'/name).rglob('*.c')) + list((ROOT/'src/overlays'/name).rglob('*.cpp'))
        if not sources:
            continue
        path = ROOT/'build/targets'/name/'full/report.json'
        proof = json.loads(path.read_text()) if path.exists() else {}
        if not valid_proof(target, proof) or proof.get('commit') != head or proof.get('dirty'):
            errors.append(f'{name}: requires a clean, current, matching overlay build')
        elif any(proof.get('functions', {}).get(s.stem[-8:].lower()) != 'linked' for s in sources):
            errors.append(f'{name}: a recovered source did not link')
    return errors


def add_images(report, meta, measure):
    catalog = ROOT/'config/overlays.json'
    if not catalog.exists():
        return
    categories = {'overlays': [], 'auxiliary': []}
    all_functions = []
    extra_data = extra_matched_data = 0
    proofs = {}
    for target in json.loads(catalog.read_text())['images']:
        name = target['name']
        category = 'auxiliary' if target['kind'] == 'ee_elf' else 'overlays'
        inv = ROOT/'config/overlays'/name/'functions.csv'
        if target['executable'] and not inv.exists():
            raise SystemExit(f'Missing target inventory: {inv.relative_to(ROOT)}')
        rows = list(csv.DictReader(inv.read_text().splitlines())) if inv.exists() else []
        p = ROOT/'build/targets'/name/'full/report.json'
        proof = json.loads(p.read_text()) if p.exists() else {}
        verified = valid_proof(target, proof)
        status = proof.get('functions', {}) if verified else {}
        sizes = proof.get('sizes', {}) if verified else {}
        data_sizes = proof.get('data_sizes', {}) if verified else {}
        fs = []
        for row in rows:
            address = int(row['address'],16)
            key = f'{address:08x}'
            done = status.get(key) == 'linked'
            fs.append(dict(addr=address,size=int(sizes.get(key,row['size'])),matched=done,complete=done,
                           fuzzy=100.0 if done else 0.0,data=int(data_sizes.get(key,0)) if done else 0))
        data_total = target['data_bytes'] + target['bss_bytes']
        data_done = sum(f['data'] for f in fs)
        m = measure(fs,data_total,data_done)
        m['complete_units'] = int(bool(fs) and all(f['complete'] for f in fs))
        unit = dict(name=f'{category}/{name}',measures=m,
                    sections=[dict(name='.text',size=m['total_code'],fuzzy_match_percent=m['fuzzy_match_percent']),
                              dict(name='.data',size=str(data_total),fuzzy_match_percent=m['matched_data_percent'])],
                    functions=[dict(name=f"func_{f['addr']:08X}",size=str(f['size']),fuzzy_match_percent=f['fuzzy'],
                                    metadata=dict(virtual_address=str(f['addr']),image=name)) for f in fs],
                    metadata=dict(complete=bool(m['complete_units']),progress_categories=[category],
                                  auto_generated=True,image=name,kind=target['kind']))
        report['units'].append(unit)
        categories[category].extend(fs)
        all_functions.extend(fs)
        extra_data += data_total
        extra_matched_data += data_done
        if verified and fs and any(f['complete'] for f in fs):
            proofs[name] = {k:proof.get(k) for k in ['target','commit','dirty','text_sha1','data_sha1','text_matches','data_matches','original_image_sha1']}
    # Add logical images, never physical address ranges: overlays may overlap one another.
    old = report['measures']
    fuzzy_weight = old['fuzzy_match_percent'] * int(old['total_code'])
    added = measure(all_functions,extra_data,extra_matched_data)
    for key in ['total_code','matched_code','complete_code','total_data','matched_data','complete_data']:
        old[key] = str(int(old[key])+int(added[key]))
    for key in ['total_functions','matched_functions']:
        old[key] += added[key]
    for prefix in ['matched_code','complete_code','matched_data','complete_data','matched_functions']:
        total = 'total_functions' if prefix.endswith('functions') else 'total_'+prefix.split('_')[1]
        old[prefix+'_percent'] = round(100*int(old[prefix])/int(old[total]),4) if int(old[total]) else 0.0
    old['fuzzy_match_percent'] = round((fuzzy_weight + added['fuzzy_match_percent'] * int(added['total_code'])) / int(old['total_code']),4) if int(old['total_code']) else 0.0
    old['total_units'] = len(report['units'])
    old['complete_units'] = sum(u['measures']['complete_units'] for u in report['units'])
    for category,fs in categories.items():
        units = [u for u in report['units'] if u['metadata']['progress_categories']==[category]]
        m = measure(fs,sum(int(u['measures']['total_data']) for u in units),sum(int(u['measures']['matched_data']) for u in units))
        m['total_units']=len(units)
        m['complete_units']=sum(u['measures']['complete_units'] for u in units)
        report['categories'].append(dict(id=category,name='EE overlays' if category=='overlays' else 'Auxiliary EE program',measures=m))
    meta['linked_functions'] += sum(f['complete'] for f in all_functions)
    meta['images'] = proofs
    meta['scope'] = 'resident + 37 MWo3 members + NTGUI2EU'
