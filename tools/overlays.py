#!/usr/bin/env python3
"""Map and prepare independent PES6 EE images; all game bytes stay under orig/ and build/."""
import argparse
import csv
import hashlib
import json
import os
from pathlib import Path
import re
import struct
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
CATALOG = ROOT / 'config/overlays.json'
HEADER = 0x80
MAIN_SHA1 = 'ea3bad52bcc53acc5f007d0d286644245946260c'


def sha(data):
    return hashlib.sha1(data).hexdigest()


def elf_segments(data):
    if data[:6] != b'\x7fELF\x01\x01' or struct.unpack_from('<HH', data, 16) != (2, 8):
        raise ValueError('Expected a little-endian MIPS executable')
    off = struct.unpack_from('<I', data, 28)[0]
    size, count = struct.unpack_from('<HH', data, 42)
    if size < 32 or off + size * count > len(data):
        raise ValueError('Truncated ELF program headers')
    return [struct.unpack_from('<8I', data, off + i * size) for i in range(count)]


def afs_members(data):
    if data[:4] != b'AFS\0' or len(data) < 8:
        raise ValueError('Not an AFS archive')
    count = struct.unpack_from('<I', data, 4)[0]
    if 8 + count * 8 > len(data):
        raise ValueError('Truncated AFS table')
    seen = []
    for i in range(count):
        off, size = struct.unpack_from('<II', data, 8 + i * 8)
        if off < 8 + count * 8 or size < HEADER or off + size > len(data):
            raise ValueError(f'Invalid AFS member {i}')
        if any(off < end and start < off + size for start, end in seen):
            raise ValueError('Overlapping AFS members')
        seen.append((off, off + size))
        yield i, off, data[off:off + size]


def parse_mwo3(data, index, offset, segments):
    if len(data) < HEADER or data[:4] != b'MWo3':
        raise ValueError('Expected MWo3 overlay header')
    _, ident, base, text_end, data_size, bss_size, bss, bss_alias = struct.unpack_from('<8I', data)
    name = data[32:HEADER].split(b'\0', 1)[0].decode('ascii')
    if not re.fullmatch(r'[A-Za-z0-9_]+\.ovl', name):
        raise ValueError('Invalid overlay name')
    if not HEADER <= text_end <= len(data) or text_end % 4 or data_size > len(data) - text_end:
        raise ValueError('Invalid overlay sections')
    loaded = (text_end + data_size + 0x7f) & ~0x7f
    if loaded > len(data) or any(data[loaded:]):
        raise ValueError('Invalid overlay archive padding')
    if bss != base + loaded or bss_alias != bss:
        raise ValueError('Overlay BSS does not follow loaded bytes')
    if ident >= len(segments):
        raise ValueError('Overlay ID absent from resident ELF')
    ph = segments[ident]
    if ph[0] != 1 or ph[2] != base or ph[4] != 0 or ph[5] < loaded + bss_size:
        raise ValueError('Overlay disagrees with its resident PT_LOAD reservation')
    executable = any(data[HEADER:text_end])
    return dict(name=Path(name).stem.lower(), disc_name=name, kind='mwo3', afs_index=index,
                afs_offset=offset, overlay_id=ident, load_address=base, code_start=base + HEADER,
                code_end=base + text_end, code_offset=HEADER, text_bytes=text_end - HEADER if executable else 0,
                data_bytes=data_size, file_bytes=len(data), load_bytes=loaded, bss_address=bss, bss_bytes=bss_size,
                reservation_bytes=ph[5], executable=executable, sha1=sha(data),
                text_sha1=sha(data[HEADER:text_end]), data_sha1=sha(data[text_end:loaded]), gp=0x3ef370)


def ntgui_info(data):
    segs = [s for s in elf_segments(data) if s[0] == 1 and s[4]]
    base = min(s[2] for s in segs)
    end = max(s[2] + s[4] for s in segs)
    code_end = min(s[2] for s in segs if not s[6] & 1)
    # GP is in the ELF's MIPS register-info section, not inherited from SLES.
    shoff = struct.unpack_from('<I', data, 32)[0]
    shsize, count = struct.unpack_from('<HH', data, 46)
    gp = None
    shstr = struct.unpack_from('<H', data, 50)[0]
    string_header = struct.unpack_from('<10I', data, shoff + shsize * shstr)
    string_base = string_header[4]
    for i in range(count):
        s = struct.unpack_from('<10I', data, shoff + shsize * i)
        name = data[string_base+s[0]:data.index(0,string_base+s[0])].decode()
        if name == '.text':
            code_end = s[3] + s[5]
        if s[1] == 0x70000006:
            gp = struct.unpack_from('<I', data, s[4] + 20)[0]
    if gp is None:
        raise ValueError('Missing NTGUI GP')
    payload = bytearray(end-base)
    for seg in segs:
        payload[seg[2]-base:seg[2]-base+seg[4]] = data[seg[1]:seg[1]+seg[4]]
    return dict(text_sha1=sha(payload[:code_end-base]), data_sha1=sha(payload[code_end-base:]), name='ntgui2eu', disc_name='NTGUI2EU.ELF', kind='ee_elf', load_address=base,
                code_start=base, code_end=code_end, code_offset=0, text_bytes=code_end - base,
                data_bytes=end - code_end, file_bytes=len(data), bss_bytes=max(s[2]+s[5] for s in segs)-end,
                executable=True, sha1=sha(data), gp=gp, entry=struct.unpack_from('<I', data, 24)[0])


def catalog():
    return json.loads(CATALOG.read_text())


def target(name):
    return next((t for t in catalog()['images'] if t['name'] == name), None)


def synthetic_elf(payload, base, entry, bss):
    """One file-backed PT_LOAD for the existing linker; original bytes remain untouched."""
    hdr = bytearray(0x1000)
    struct.pack_into('<16sHHIIIIIHHHHHH', hdr, 0, b'\x7fELF\x01\x01\x01'+bytes(9), 2, 8, 1,
                     entry, 52, 0, 0x20924001, 52, 32, 1, 40, 0, 0)
    struct.pack_into('<8I', hdr, 52, 1, 0x1000, base, base, len(payload), len(payload)+bss, 7, 16)
    return bytes(hdr)+payload


def prepare(iso):
    from iso_extract import root_entries, SECTOR
    inputs = {}
    with open(iso, 'rb') as f:
        entries = {e['name']: e for e in root_entries(f)}
        for name in ['SLES_542.03', 'OVER.AFS', 'NTGUI2EU.ELF']:
            e = entries[name]
            f.seek(e['lba'] * SECTOR)
            data = f.read(e['size'])
            if len(data) != e['size']:
                raise ValueError(f'Truncated disc file: {name}')
            inputs[name] = data
    if sha(inputs['SLES_542.03']) != MAIN_SHA1:
        raise ValueError('Not the supported PAL SLES-542.03 disc')
    ph = elf_segments(inputs['SLES_542.03'])
    images = [parse_mwo3(blob, i, off, ph) for i, off, blob in afs_members(inputs['OVER.AFS'])]
    if len({t['name'] for t in images}) != len(images) or len({t['overlay_id'] for t in images}) != len(images):
        raise ValueError('Duplicate overlay identity')
    images.append(ntgui_info(inputs['NTGUI2EU.ELF']))
    manifest = dict(version=1, resident_sha1=MAIN_SHA1, archive_sha1=sha(inputs['OVER.AFS']), images=images)
    if CATALOG.exists() and catalog() != manifest:
        raise ValueError('Disc mapping differs from checked-in catalog')
    if not CATALOG.exists():
        CATALOG.write_text(json.dumps(manifest, indent=2)+'\n')
    raw = ROOT/'orig/overlays'
    raw.mkdir(parents=True, exist_ok=True)
    for i, off, blob in afs_members(inputs['OVER.AFS']):
        t = images[i]
        (raw/(t['name']+'.ovl')).write_bytes(blob)
    (ROOT/'orig/NTGUI2EU.ELF').write_bytes(inputs['NTGUI2EU.ELF'])
    for t in images:
        if not t['executable']:
            continue
        d = ROOT/'build/targets'/t['name']
        d.mkdir(parents=True, exist_ok=True)
        if t['kind'] == 'mwo3':
            original = (raw/(t['name']+'.ovl')).read_bytes()
            payload = original[HEADER:t['load_bytes']]
            entry = t['code_start']
        else:
            original = inputs['NTGUI2EU.ELF']
            segs = [s for s in elf_segments(original) if s[0] == 1 and s[4]]
            payload = bytearray(max(s[2]+s[4] for s in segs)-t['load_address'])
            for s in segs:
                payload[s[2]-t['load_address']:s[2]-t['load_address']+s[4]] = original[s[1]:s[1]+s[4]]
            payload = bytes(payload)
            entry = t['entry']
        (d/'image.rom').write_bytes(payload)
        (d/'image.elf').write_bytes(synthetic_elf(payload, t['code_start'], entry, t['bss_bytes']))
        import yaml
        rel = str(d.relative_to(ROOT))
        cfg = dict(name=t['disc_name'], sha1=sha(payload), options=dict(basename='pes6_'+t['name'],
            base_path='../../..', target_path=rel+'/image.rom', elf_path=rel+'/image.elf',
            platform='ps2', compiler='EEGCC', gp_value=t['gp'], asm_path=rel+'/splat/asm',
            src_path=rel+'/splat/src', build_path=rel+'/splat/obj', ld_script_path=rel+'/splat/image.ld',
            cache_path=rel+'/splat/.splat_cache', symbol_addrs_path=[],
            undefined_funcs_auto_path=rel+'/splat/undefined_funcs_auto.txt',
            undefined_syms_auto_path=rel+'/splat/undefined_syms_auto.txt', ld_dependencies=False,
            create_c_files=False, generate_asm_macros_files=False, named_regs_for_c_funcs=False),
            segments=[dict(name='core',type='code',start=0,vram=t['code_start'],bss_size=0,
                subsegments=[[0,'c','core/text'],[t['code_end']-t['code_start'],'data','core/data']]), [len(payload)]])
        (d/'splat.yaml').write_text(yaml.safe_dump(cfg,sort_keys=False))
        c = ROOT/'config/overlays'/t['name'];c.mkdir(parents=True,exist_ok=True)
        if not (c/'units.txt').exists(): (c/'units.txt').write_text(f"0x{t['code_start']:08X} overlays/{t['name']}\n")
    print(f'Mapped {len(images)-1} MWo3 members and one auxiliary EE executable; prepared {sum(t["executable"] for t in images)} code targets')


def env_for(name):
    t = target(name)
    if not t or not t['executable']:
        raise ValueError(f'{name}: not a code target')
    return dict(os.environ, PES6_TARGET=name)


def inventory(name):
    t = target(name)
    d = ROOT/'build/targets'/name
    with (d/'splat.log').open('w') as log:
        subprocess.run([sys.executable,'-m','splat','split','--disassemble-all',str(d/'splat.yaml')],cwd=ROOT,check=True,stdout=log,stderr=subprocess.STDOUT)
    starts = []
    for path in (d/'splat/asm/matchings/core/text').glob('func_*.s'):
        a = int(path.stem[5:],16)
        if t['code_start'] <= a < t['code_end']:
            starts.append(a)
    starts = sorted(set(starts))
    if not starts:
        raise ValueError(f'{name}: no functions found')
    data = (d/'image.rom').read_bytes()[:t['code_end']-t['code_start']]
    calls = {}
    for (w,) in struct.iter_unpack('<I',data):
        if w>>26 == 3:
            a = (w&0x3ffffff)<<2
            calls[a] = calls.get(a,0)+1
    with (ROOT/'config/overlays'/name/'functions.csv').open('w') as f:
        out=csv.writer(f,lineterminator="\n");out.writerow(['address','max_size','calls','size'])
        for i,a in enumerate(starts):
            end=starts[i+1] if i+1<len(starts) else t['code_end']
            words=list(struct.unpack('<'+'I'*((end-a)//4),data[a-t['code_start']:end-t['code_start']]))
            while len(words)>1 and words[-1]==0 and words[-2]==0: words.pop()
            out.writerow([f'0x{a:08x}',end-a,calls.get(a,0),len(words)*4])
    print(name, len(starts),'functions',flush=True)


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('command',choices=['prepare','list','inventory','asm','check','build','report'])
    ap.add_argument('target',nargs='?')
    ap.add_argument('args',nargs=argparse.REMAINDER)
    a=ap.parse_args()
    if a.command=='prepare':
        prepare(a.target);return
    if a.command=='list':
        for t in catalog()['images']:
            print(f"{t['name']:<24} {t['load_address']:08X} text={t['text_bytes']:7} data={t['data_bytes']:7} {'code' if t['executable'] else 'data/reservation'}")
        return
    if a.command=='inventory':
        for t in catalog()['images']:
            if t['executable'] and (a.target in (None,'all',t['name'])): inventory(t['name'])
        return
    env=env_for(a.target)
    if a.command == 'build':
        (ROOT/'src/overlays'/a.target).mkdir(parents=True,exist_ok=True)
    commands={'asm':['tools/match.py','asm'], 'check':['tools/match.py','check'],
              'build':['tools/build.py'], 'report':['tools/report.py']}
    subprocess.run([sys.executable,*commands[a.command],*a.args],env=env,cwd=ROOT,check=True)
    if a.command == 'build':
        from overlay_report import valid_proof
        t = target(a.target)
        d = ROOT/'build/targets'/a.target/'full'
        proof = json.loads((d/'report.json').read_text())
        if not valid_proof(t, proof, whole_image=False):
            raise ValueError('Build does not reproduce cataloged image bytes')
        payload = (d/'built_text.bin').read_bytes() + (d/'built_data.bin').read_bytes()
        if t['kind'] == 'mwo3':
            original = (ROOT/'orig/overlays'/(a.target+'.ovl')).read_bytes()
            rebuilt = original[:HEADER] + payload + original[t['load_bytes']:]
        else:
            original = (ROOT/'orig/NTGUI2EU.ELF').read_bytes()
            rebuilt = bytearray(original)
            for seg in elf_segments(original):
                if seg[0] == 1 and seg[4]:
                    rebuilt[seg[1]:seg[1]+seg[4]] = payload[seg[2]-t['code_start']:seg[2]-t['code_start']+seg[4]]
        if sha(original) != t['sha1'] or sha(rebuilt) != t['sha1']:
            raise ValueError('Reconstructed original image hash differs')
        proof['original_image_sha1'] = t['sha1']
        (d/'report.json').write_text(json.dumps(proof,indent=2)+'\n')
        print('Complete image SHA-1 verified:', t['name'], t['sha1'])



if __name__=='__main__':
    main()
