#!/usr/bin/env python3
"""Behaviour check: does a draft's compiled C do what the original does?

    equiv.py ADDR SRC [ADDR SRC ...]              one or more functions of the image PES6_TARGET selects
    equiv.py --batch LIST [--jobs N] [--limit N]  every row "image,address" of LIST (a CSV with those
                                                  columns, e.g. native_port/docs/exhibition_functions.csv)
                                                  that has a non-matching draft in config/nonmatching.json
    equiv.py --report                             write docs/equivalent.md from the stored results

How a function is judged (the Power Stone decomp's method, on tools/r5900sim.py):

  * The draft is compiled with the compiler its first line names and linked at a scratch address; the
    original runs at its own address. Both run in the game's memory image (the resident executable,
    plus the overlay for an overlay function), so globals start at their real initial values.
  * Candidate cases: argument registers from pools (pointers into a filled buffer, small integers, the
    constants the function compares against, float values for f12-f19), the globals the original
    reads set to pool values, and every call out answered with a pool value (v0 and f0).
  * The original runs every candidate; cases where it faults or does not return are dropped. Cases are
    chosen greedily by the original instructions they reach that the chosen ones did not (up to
    DEV_CASES), and HOLDOUT more are kept apart.
  * The compiled C runs every chosen and holdout case. They must agree on: the calls out, in order
    (target, and the arguments: those the draft's prototype declares plus every argument register the
    original callee reads before writing it, found from the callee's own code, so a missing or
    weakened prototype hides nothing; int arguments a0-a3/t0-t3, float arguments f12-f19; an argument
    pointing into the function's own stack frame counts as "the stack", since where a local lives
    is the compiler's choice, and what it points at is not compared); the final value
    of every byte written outside the function's own stack frame; the return value as the draft's
    definition types it (none for void, f0 for float, 64 bits for 64-bit types, else the low 32 bits);
    and s0-s7, fp, sp and gp restored.
  * EQUIVALENT: every case agrees. The evidence is the number of cases and the share of the original's
    instructions they ran (coverage); a branch no case reaches is not proven. DIFFERS: a case
    disagrees (the first difference is reported). UNTESTABLE: no case could run (the original faults
    or loops on every candidate), or an instruction the simulator does not model (VU0 micro programs).

This is behavioural evidence on generated cases, not a proof; byte equality remains the stronger
result. Results are cached in build/equiv/ under a key of everything the verdict depends on.
"""
import hashlib
import json
import os
import random
import re
import struct
import sys
import threading
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
os.chdir(ROOT)
import r5900sim as S  # noqa: E402

M32, M64 = 0xFFFFFFFF, (1 << 64) - 1
SCRATCH_CODE = 0x01D00000       # where the compiled C is linked
BUF = 0x01C00000                # the buffer pointer arguments aim at
BUFSZ = 0x40000
STACK_TOP = 0x01E00000
FRAME = 0x8000                  # bytes below the entry sp that count as the function's own frame
CANDIDATES = 64
DEV_CASES = 24
HOLDOUT = 8
MAX_STEPS = 200_000
TIME_BUDGET = 90.0              # seconds of simulation per function for drawing cases
FUNCTION_TIMEOUT = 300          # hard wall-clock limit per function in a batch
GP = 0x003EF370
RESULTS = os.path.join(ROOT, "build", "equiv")
TOOL_FILES = ("tools/equiv.py", "tools/r5900sim.py", "tools/ee_float.py")


class StepLimit(Exception):
    pass


_RUNTIME = None


def runtime_starts():
    """Start addresses of the C runtime and libgcc functions (src/runtime/* per tools/layout.py). Calls to
    them run in the simulator instead of being answered, like the Power Stone checker runs compiler
    helpers: a draft may inline a memset or a division the original calls, and the result is what counts."""
    global _RUNTIME
    if _RUNTIME is None:
        path = os.path.join(RESULTS, "runtime_functions.json")
        if not os.path.exists(path):
            import subprocess
            code = ("import sys,csv,json; sys.path.insert(0,'tools'); import layout\n"
                    "s=sorted(int(r['address'],16) for r in csv.DictReader(open('build/functions.csv')))\n"
                    "print(json.dumps([a for a in s if 0x100000<=a<0x372AE0 and layout.path_for(a).startswith('src/runtime/')]))")
            env = {k: v for k, v in os.environ.items() if k != "PES6_TARGET"}
            out = subprocess.run([sys.executable, "-c", code], capture_output=True, text=True, env=env, check=True).stdout
            os.makedirs(RESULTS, exist_ok=True)
            tmp = f"{path}.{os.getpid()}"           # parallel workers: write whole, then rename
            open(tmp, "w").write(out.strip().splitlines()[-1])
            os.replace(tmp, path)
        data = json.load(open(path))
        _RUNTIME = {x[0] if isinstance(x, list) else x for x in data}
    return _RUNTIME


# ---- images -------------------------------------------------------------------------------------

def elf_segments(path):
    d = open(path, "rb").read()
    phoff, = struct.unpack_from("<I", d, 28)
    phentsize, phnum = struct.unpack_from("<HH", d, 42)
    out = []
    for i in range(phnum):
        p_type, off, vaddr, _, filesz, memsz = struct.unpack_from("<6I", d, phoff + i * phentsize)
        if p_type == 1 and filesz:
            out.append((vaddr, d[off:off + filesz]))
    return out


def memory_image(image):
    """[(address, bytes)] to load: the resident executable, plus the overlay for an overlay function."""
    segs = elf_segments(os.path.join(ROOT, "orig", "SLES_542.03"))
    if image != "main":
        segs += elf_segments(os.path.join(ROOT, "build", "targets", image, "image.elf"))
    return segs


# ---- the draft: prototypes and return type --------------------------------------------------------

TYPE_INT64 = re.compile(r"\b(s64|u64|long long|M2C_UNK64)\b")


def parse_prototypes(text, symbol):
    """({callee name: (int args, float args)}, return kind of `symbol`): kinds none/int/int64/float."""
    protos = {}
    ret = "int"
    for m in re.finditer(r"^\s*(?:extern\s+|static\s+)?([\w\s\*]+?)\s*\b(\w+)\s*\(([^;{)]*)\)\s*([;{])", text, re.M):
        rtype, name, args, end = m.group(1).strip(), m.group(2), m.group(3).strip(), m.group(4)
        if name in ("if", "while", "for", "switch", "return", "sizeof"):
            continue
        if name == symbol and end == "{":
            ret = ("none" if rtype.split()[-1] == "void" and "*" not in rtype else
                   "float" if re.search(r"\b(f32|float)\b", rtype) and "*" not in rtype else
                   "int64" if TYPE_INT64.search(rtype) else "int")
            continue
        if end != ";":
            continue
        if args in ("",):
            protos[name] = None                      # unknown arguments
            continue
        if args == "void":
            protos[name] = (0, 0)
            continue
        ni = nf = 0
        for a in args.split(","):
            a = a.strip()
            if a == "...":
                continue
            if re.search(r"\b(f32|float)\b", a) and "*" not in a:
                nf += 1
            else:
                ni += 1
        protos[name] = (ni, nf)
    return protos, ret


# ---- cases ---------------------------------------------------------------------------------------

def constants_in(words):
    """Integer and float constants the code compares against or builds (for the value pools)."""
    ints, floats = set(), set()
    for i, x in enumerate(words):
        op = x >> 26
        imm = x & 0xFFFF
        simm = imm - 0x10000 if imm & 0x8000 else imm
        if op in (8, 9, 10, 11, 12, 13, 14, 24, 25):
            ints.update((simm & M32, (simm + 1) & M32, (simm - 1) & M32, imm))
        elif op == 15:
            ints.add((imm << 16) & M32)
            floats.add((imm << 16) & M32)
            if i + 1 < len(words) and (words[i + 1] >> 26) in (9, 13):
                lo = words[i + 1] & 0xFFFF
                v = ((imm << 16) + (lo - 0x10000 if lo & 0x8000 and words[i + 1] >> 26 == 9 else lo)) & M32
                ints.add(v)
                floats.add(v)
    return sorted(ints)[:64], sorted(floats)[:32]


FLOATS = [0x00000000, 0x3F800000, 0xBF800000, 0x3F000000, 0x40000000, 0x42C80000, 0xC2C80000,
          0x3DCCCCCD, 0x447A0000, 0x80000000, 0x41200000, 0xC1200000]
INTS = [0, 1, 2, 3, 4, 5, 7, 8, 15, 16, 31, 32, 0x7F, 0x80, 0xFF, 0x100, 0x7FFF, 0x8000, 0xFFFF,
        0x10000, M32, M32 - 1, 0x7FFFFFFF, 0x80000000]


class Pools:
    def __init__(self, rng, words):
        ci, cf = constants_in(words)
        self.rng = rng
        self.ints = INTS + ci
        self.floats = FLOATS + cf

    def pointer(self):
        return BUF + 0x8000 + (self.rng.randrange(0, BUFSZ - 0x10000) & ~15)

    def int_value(self):
        r = self.rng.random()
        if r < 0.35:
            return self.pointer()
        if r < 0.85:
            return self.rng.choice(self.ints)
        return self.rng.getrandbits(16)

    def float_value(self):
        if self.rng.random() < 0.8:
            return self.rng.choice(self.floats)
        f = self.rng.uniform(-1000, 1000)
        return struct.unpack("<I", struct.pack("<f", f))[0]

    def word(self):
        r = self.rng.random()
        return self.int_value() if r < 0.75 else self.float_value()


def make_case(rng, pools, read_set):
    """A case: argument registers, buffer contents seed, globals to set, call responses."""
    case = {
        "gpr": {r: S.sx64(pools.int_value()) for r in (4, 5, 6, 7, 8, 9, 10, 11)},
        "fpr": {r: pools.float_value() for r in range(12, 20)},
        "buf_seed": rng.randrange(8),
        "globals": {},
        "responses": [(pools.int_value(), pools.float_value()) for _ in range(64)],
    }
    for a in sorted(read_set):
        if rng.random() < 0.5:
            case["globals"][a] = pools.word()
    return case


def fill_buffer(seed):
    rng = random.Random(seed)
    pools = Pools(rng, [])
    return b"".join(struct.pack("<I", pools.word() & M32) for _ in range(BUFSZ // 4))


# ---- what a callee really takes -------------------------------------------------------------------

_STARTS = {}
_INPUTS = {}
_INPUTS_LOCK = threading.RLock()
INT_ARGS = (4, 5, 6, 7, 8, 9, 10, 11)
FLOAT_ARGS = tuple(range(12, 20))


def function_starts(image):
    if image not in _STARTS:
        import csv
        s = {int(r["address"], 16) for r in csv.DictReader(open(os.path.join(ROOT, "build", "functions.csv")))}
        if image != "main":
            for _, _, files in os.walk(os.path.join(ROOT, "build", "targets", image, "splat", "asm")):
                for f in files:
                    m = re.match(r"func_([0-9A-F]{8})\.s$", f)
                    if m:
                        s.add(int(m.group(1), 16))
        _STARTS[image] = sorted(s)
    return _STARTS[image]


def callee_inputs(target, mem, image, depth=0):
    """(int argument registers, float argument registers) the original callee reads before writing them:
    the arguments it really takes, whatever a draft's prototype says. Linear scan of its code; a call it
    makes passes on what that callee takes (a few levels deep); an indirect jump assumes a0-a3."""
    import bisect
    import rabbitizer as R
    key = (image, target)
    if depth == 0:
        with _INPUTS_LOCK:                          # one computation at a time: the guard below is shared
            return callee_inputs(target, mem, image, depth=1) if key not in _INPUTS else _INPUTS[key]
    if key in _INPUTS:
        return _INPUTS[key]
    starts = function_starts(image)
    i = bisect.bisect_left(starts, target)
    if i >= len(starts) or starts[i] != target or depth > 4:
        return (set(INT_ARGS[:4]), set())          # unknown code: a0-a3, as for any call
    end = starts[i + 1] if i + 1 < len(starts) else target + 0x4000
    end = min(end, target + 0x8000)
    written, ints, flts = set(), set(), set()
    _INPUTS[key] = (set(INT_ARGS[:4]), set())       # recursion guard
    for a in range(target, end, 4):
        if a + 4 > len(mem):
            break
        w = struct.unpack_from("<I", mem, a)[0]
        ins = R.Instruction(w, a, R.InstrCategory.R5900)
        op = w >> 26
        if op in (2, 3):
            t = ((a + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
            si, sf = callee_inputs(t, mem, image, depth + 1)
            ints |= si - written
            flts |= sf - written
        elif op == 0 and (w & 0x3F) in (8, 9) and ((w >> 21) & 31) != 31:
            ints |= set(INT_ARGS[:4]) - written
        for reads, field in ((ins.readsRs, "rs"), (ins.readsRt, "rt"), (ins.readsRd, "rd")):
            try:
                if reads():
                    r = getattr(ins, field).value
                    if r in INT_ARGS and r not in written:
                        ints.add(r)
            except (AttributeError, ValueError):
                pass
        if op == 17:
            for reads, field in ((ins.readsFs, "fs"), (ins.readsFt, "ft"), (ins.readsFd, "fd")):
                try:
                    if reads():
                        r = getattr(ins, field).value
                        if r in FLOAT_ARGS and r not in written:
                            flts.add(r)
                except (AttributeError, ValueError):
                    pass
        for mods, field in ((ins.modifiesRs, "rs"), (ins.modifiesRt, "rt"), (ins.modifiesRd, "rd")):
            try:
                if mods():
                    written.add(getattr(ins, field).value)
            except (AttributeError, ValueError):
                pass
        if op == 17:
            for mods, field in ((ins.modifiesFs, "fs"), (ins.modifiesFt, "ft"), (ins.modifiesFd, "fd")):
                try:
                    if mods():
                        written.add(getattr(ins, field).value)
                except (AttributeError, ValueError):
                    pass
    _INPUTS[key] = (ints, flts)
    return _INPUTS[key]


# ---- running -------------------------------------------------------------------------------------

_BUFFERS = {}


def buffer_for(seed):
    if seed not in _BUFFERS:
        _BUFFERS[seed] = fill_buffer(seed)
    return _BUFFERS[seed]


class Run:
    def __init__(self, base_mem, image="main"):
        self.m = S.Machine()
        self.base = base_mem
        self.image = image
        self.dirty = None              # (address, size) touched by the last case, restored before the next

    def prepare(self, case):
        m = self.m
        if self.dirty is None:
            m.mem[:] = self.base
        else:
            for a, size in self.dirty:
                buf, o = m._where(a, size)
                if buf is m.mem:
                    m.mem[o:o + size] = self.base[o:o + size]
            m.scratch[:] = bytes(len(m.scratch))
        self.dirty = [(BUF, BUFSZ)]
        m.mem[BUF:BUF + BUFSZ] = buffer_for(case["buf_seed"])
        for a, v in case["globals"].items():
            buf, o = m._where(a, 4)
            if buf is not None:
                buf[o:o + 4] = struct.pack("<I", v & M32)
                self.dirty.append((a, 4))
        m._dec.clear()
        m.reset_regs()
        m.writes.clear()
        m.covered.clear()
        for r in range(32):
            m.gpr[r] = 0
        for r, v in case["gpr"].items():
            m.gpr[r] = v
        for r, v in case["fpr"].items():
            m.fpr[r] = v
        for r in range(16, 24):
            m.gpr[r] = 0x5A5A0000 + r
        m.gpr[30] = 0x5A5A001E
        m.gpr[28] = GP
        m.gpr[29] = STACK_TOP

    def run(self, entry, lo, hi, case, protos_by_addr, collect_reads=False):
        """Run one function from the prepared state; returns its observable behaviour."""
        m = self.m
        self.prepare(case)
        m.reads = set() if collect_reads else None
        calls = []
        responses = case["responses"]
        idx = [0]

        def answer(target):
            # compared arguments: those the draft's prototype declares, plus every register the original
            # callee really reads (callee_inputs), so a missing or weakened prototype hides nothing
            proto = protos_by_addr.get(target, "?")
            ni, nf = (0, 0) if proto is None or proto == "?" else proto
            ri, rf = callee_inputs(target, self.base, self.image)
            iregs = sorted(set(INT_ARGS[:ni]) | ri)
            fregs = sorted(set(FLOAT_ARGS[:nf]) | rf)
            # a pointer into the function's own stack frame is compared as "the stack": where a
            # local lives is the compiler's choice, so its address may differ between original and C
            ints = tuple("stack" if STACK_TOP - FRAME <= m.g32(r) < STACK_TOP else m.g32(r) for r in iregs)
            flts = tuple(m.fpr[r] for r in fregs)
            calls.append((target, ints + flts))
            v, f = responses[idx[0] % len(responses)]
            idx[0] += 1
            m.gpr[2] = S.sx64(v)
            m.gpr[3] = 0
            m.fpr[0] = f

        runtime = runtime_starts()
        inside = []            # return addresses of runtime calls that are running in the simulator

        def on_call(mm, target):
            if target & M32 in runtime:
                inside.append(mm.pc)            # the delay slot ran: mm.pc is the return address
                return False
            answer(target & M32)
            return True

        def on_syscall(mm, code):
            answer(0xFFFF0000 | (mm.g32(3) & 0xFFFF))

        m.call_hook = on_call
        m.syscall_hook = on_syscall
        m.io_read = lambda a, s: 0
        m.io_write = lambda a, s, v: None
        m.gpr[31] = S.SENTINEL
        m.pc, m.npc = entry, entry + 4
        steps = 0
        try:
            while m.pc != S.SENTINEL:
                if inside and m.pc == inside[-1]:
                    inside.pop()
                if not inside and not lo <= m.pc < hi and m.npc == m.pc + 4:
                    if m.pc in runtime:                     # a tail call into the runtime: run it, return to ra
                        inside.append(m.g32(31))
                        m.step()
                        steps += 1
                        continue
                    # left the function by a plain jump: a tail call
                    answer(m.pc)
                    ra = m.g32(31)
                    m.pc, m.npc = ra, ra + 4
                    steps += 1                              # a bad ra could bounce here forever
                    if steps > MAX_STEPS:
                        raise StepLimit()
                    continue
                m.step()
                steps += 1
                if steps > MAX_STEPS:
                    raise StepLimit()
        finally:
            self.dirty.extend((a, s) for a, s, _ in m.writes)   # restored before the next case, even after a fault
        sp0 = STACK_TOP
        mem = {}
        for a, size, v in m.writes:
            for k in range(size):
                ad = (a + k) & M32
                if sp0 - FRAME <= ad < sp0:
                    continue
                mem[ad] = (v >> (8 * k)) & 0xFF
        saved = tuple(m.gpr[r] & M64 for r in (16, 17, 18, 19, 20, 21, 22, 23, 28, 29, 30))
        return {"calls": calls, "mem": mem, "v0": m.gpr[2] & M64, "f0": m.fpr[0], "saved": saved,
                "covered": {a for a in m.covered if lo <= a < hi}, "reads": m.reads or set()}


def compare(o, c, ret):
    if o["calls"] != c["calls"]:
        n = next((i for i, (x, y) in enumerate(zip(o["calls"], c["calls"])) if x != y), min(len(o["calls"]), len(c["calls"])))
        a = o["calls"][n] if n < len(o["calls"]) else None
        b = c["calls"][n] if n < len(c["calls"]) else None
        fmt = lambda x: "none" if x is None else f"{x[0]:08X}({', '.join(v if isinstance(v, str) else f'{v:x}' for v in x[1])})"
        return f"call #{n}: original {fmt(a)}, C {fmt(b)}"
    if o["mem"] != c["mem"]:
        diff = sorted(a for a in set(o["mem"]) | set(c["mem"]) if o["mem"].get(a) != c["mem"].get(a))
        return f"memory differs at {len(diff)} bytes from {diff[0]:08X}"
    if ret == "int" and (o["v0"] & M32) != (c["v0"] & M32):
        return f"return {o['v0'] & M32:#x} vs {c['v0'] & M32:#x}"
    if ret == "int64" and o["v0"] != c["v0"]:
        return f"return {o['v0']:#x} vs {c['v0']:#x}"
    if ret == "float" and o["f0"] != c["f0"]:
        return f"float return {o['f0']:08x} vs {c['f0']:08x}"
    if o["saved"] != c["saved"]:
        return "callee-saved registers differ"
    return None


# ---- one function --------------------------------------------------------------------------------

_LOCAL = threading.local()
_RESOLVER_LOCK = threading.Lock()


def _install_resolver(symbols):
    """Once per process: symbols.address_of also finds the compiled object's own read-only sections,
    placed per thread (link_words resolves through symbols.address_of)."""
    with _RESOLVER_LOCK:
        if getattr(symbols.address_of, "_equiv", False):
            return
        orig = symbols.address_of

        def address_of(s):
            placed = getattr(_LOCAL, "placed", None) or {}
            return placed[s] if s in placed else orig(s)
        address_of._equiv = True
        symbols.address_of = address_of


SCRATCH_DATA = 0x01D80000       # where the compiled object's read-only data (.rodata, literal pools) goes
READONLY_SECTIONS = (".rodata", ".rodata.str1.4", ".rodata.cst4", ".rodata.cst8", ".lit4", ".lit8")


def object_rodata(path):
    """{section name: (bytes, [(offset, reloc type, symbol name, symbol value, in .text)])} of the
    object's read-only data sections, with the relocations inside them (jump tables)."""
    d = open(path, "rb").read()
    shoff, = struct.unpack_from("<I", d, 32)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", d, 46)
    secs = [struct.unpack_from("<10I", d, shoff + i * shentsize) for i in range(shnum)]
    strtab = secs[shstrndx][4]
    name = lambda off, base: d[base + off:d.index(b"\0", base + off)].decode()
    names = [name(s[0], strtab) for s in secs]
    symtab = next(s for s in secs if s[1] == 2)
    strs = secs[symtab[6]][4]
    syms = []
    for i in range(symtab[5] // 16):
        st_name, value, size, info, other, shndx = struct.unpack_from("<IIIBBH", d, symtab[4] + i * 16)
        syms.append((name(st_name, strs) or (names[shndx] if shndx < len(names) else ""), value,
                     shndx < len(names) and names[shndx] == ".text"))
    out = {}
    for i, n in enumerate(names):
        if n in READONLY_SECTIONS or n.startswith(".rodata"):
            s = secs[i]
            relocs = []
            for j, r in enumerate(secs):
                if r[1] == 9 and r[7] == i:
                    for k in range(r[5] // 8):
                        off, info = struct.unpack_from("<II", d, r[4] + k * 8)
                        relocs.append((off, info & 0xFF) + syms[info >> 8])
            out[n] = (d[s[4]:s[4] + s[5]], relocs)
    return out


def compile_draft(src, address, symbol, obj=None):
    """(linked code words at SCRATCH_CODE, [(address, bytes)] of the object's read-only data)."""
    import match
    import symbols
    own = obj is None
    if own:
        obj = match.compile_c(src)
    try:
        blob, relocs, funcs = match.read_object(obj, want_symbols=True)
        rodata = object_rodata(obj)
    finally:
        if own:
            os.remove(obj)
    f = [x for x in funcs if x[0] == symbol] or funcs[:1]
    if not f:
        raise ValueError("no function in the compiled object")
    _, off, size = f[0]
    words = list(struct.unpack_from(f"<{size // 4}I", blob, off))
    # place the read-only sections and let the code's relocations find them
    placed, blobs, at = {}, [], SCRATCH_DATA
    for n, (data, _) in rodata.items():
        placed[n] = at
        at += (len(data) + 15) & ~15
    text_base = SCRATCH_CODE - off
    for n, (data, inner) in rodata.items():
        buf = bytearray(data)
        for roff, rtype, sname, svalue, in_text in inner:
            if rtype != 2:                                  # R_MIPS_32
                raise ValueError(f"unsupported relocation {rtype} in {n}")
            base = text_base + svalue if in_text else placed.get(sname, symbols.address_of(sname))
            if base is None:
                raise ValueError(f"unresolved symbol {sname} in {n}")
            v = (struct.unpack_from("<I", buf, roff)[0] + base) & M32
            struct.pack_into("<I", buf, roff, v)
        blobs.append((placed[n], bytes(buf)))
    _install_resolver(symbols)
    _LOCAL.placed = placed                          # per thread: callers may judge in several threads
    try:
        linked, unresolved = match.link_words(words, relocs, off, SCRATCH_CODE)
    finally:
        _LOCAL.placed = {}
    if unresolved:
        raise ValueError(f"{len(unresolved)} unresolved relocations")
    return match.trim_padding(linked), blobs


def cache_key(original, compiled, protos, ret):
    h = hashlib.sha256()
    h.update(struct.pack(f"<{len(original)}I", *original))
    h.update(struct.pack(f"<{len(compiled)}I", *compiled))
    h.update(json.dumps([sorted((k, v) for k, v in protos.items() if v is not None), ret]).encode())
    for p in TOOL_FILES:
        h.update(open(os.path.join(ROOT, p), "rb").read())
    return h.hexdigest()


def judge(image, address, src, symbol=None, base_mem=None, obj=None, cache=None):
    import match
    import symbols
    t0 = time.time()
    symbol = symbol or symbols.symbol(address)
    text_addr, text = match.load_text()
    original = match.trim_padding(match.words_at(text_addr, text, address, match.function_span(address)))
    source = open(src).read()
    protos, ret = parse_prototypes(source, symbol)
    try:
        compiled, rodata = compile_draft(src, address, symbol, obj)
    except (ValueError, SystemExit) as e:
        return {"verdict": "ERROR", "detail": f"compile: {e}"}
    protos_by_addr = {}
    for name, p in protos.items():
        a = symbols.address_of(name)
        if a is not None:
            protos_by_addr[a] = p
    key = cache_key(original, compiled + [b for _, d in rodata for b in d], protos, ret)
    if cache is not None and key in cache:
        return dict(cache[key], cached=True)

    if base_mem is None:
        base_mem = build_memory(image)
    o_run, c_run = Run(base_mem, image), Run(base_mem, image)
    code = [(0x00100000, 0x00372AE0)]
    if image != "main":
        tl, tt = match.load_text()
        code.append((tl, tl + len(tt)))
    o_run.m.readonly = list(code)                       # game code never writes its own text
    c_run.m.readonly = code + [(SCRATCH_CODE, SCRATCH_CODE + 4 * len(compiled))] + [(a, a + len(d)) for a, d in rodata]
    c_mem = bytearray(base_mem)
    blob = struct.pack(f"<{len(compiled)}I", *compiled)
    c_mem[SCRATCH_CODE:SCRATCH_CODE + len(blob)] = blob
    for a, data in rodata:
        c_mem[a:a + len(data)] = data
    c_run.base = bytes(c_mem)

    lo, hi = address, address + 4 * len(original)
    clo, chi = SCRATCH_CODE, SCRATCH_CODE + 4 * len(compiled)
    rng = random.Random(address)
    pools = Pools(rng, original)
    read_set = set()

    def globals_of(reads):
        return {a for a in reads if not (STACK_TOP - FRAME <= a < STACK_TOP) and not (BUF <= a < BUF + BUFSZ)
                and not any(c0 <= a < c1 for c0, c1 in code) and a < 0x02000000}

    candidates = []
    try:
        for n in range(CANDIDATES):
            if time.time() - t0 > TIME_BUDGET / 2:
                break
            case = make_case(rng, pools, read_set)
            try:
                r = o_run.run(address, lo, hi, case, protos_by_addr, collect_reads=True)
            except (S.Fault, StepLimit):
                continue
            read_set |= globals_of(r["reads"])
            candidates.append((case, r))
    except S.Unimplemented as e:
        return {"verdict": "UNTESTABLE", "detail": str(e)}
    if not candidates:
        return {"verdict": "UNTESTABLE", "detail": "the original faults or loops on every candidate case"}

    chosen, covered = [], set()
    pool = list(candidates)
    while pool and len(chosen) < DEV_CASES:
        best = max(pool, key=lambda cr: len(cr[1]["covered"] - covered))
        if not best[1]["covered"] - covered and len(chosen) >= 4:
            break
        chosen.append(best)
        covered |= best[1]["covered"]
        pool.remove(best)
    holdout = pool[:HOLDOUT]
    reached = covered.union(*(r["covered"] for _, r in holdout))
    coverage = round(100.0 * len(reached) / len(original), 1) if original else 0.0

    for kind, group in (("dev", chosen), ("holdout", holdout)):
        for case, o in group:
            try:
                c = c_run.run(SCRATCH_CODE, clo, chi, case, protos_by_addr)
            except S.Fault as e:
                return {"verdict": "DIFFERS", "detail": f"C faults ({kind} case): {e}", "cases": len(chosen) + len(holdout),
                        "coverage": coverage, "key": key}
            except StepLimit:
                return {"verdict": "DIFFERS", "detail": f"C does not return ({kind} case)", "cases": len(chosen) + len(holdout),
                        "coverage": coverage, "key": key}
            except S.Unimplemented as e:
                return {"verdict": "UNTESTABLE", "detail": f"C: {e}"}
            why = compare(o, c, ret)
            if why:
                return {"verdict": "DIFFERS", "detail": f"{kind} case: {why}", "cases": len(chosen) + len(holdout),
                        "coverage": coverage, "key": key}
    res = {"verdict": "EQUIVALENT", "memory": memory_label(), "cases": len(chosen), "holdout": len(holdout), "coverage": coverage,
           "returns": ret, "key": key, "seconds": round(time.time() - t0, 1)}
    if cache is not None:
        cache[key] = res
    return res


DEFAULT_RAM = os.path.join(ROOT, "build", "equiv", "ram-match.bin")


def memory_source():
    """What cases start from: PES6_EQUIV_RAM if set ("image" forces the executable's initial memory),
    else build/equiv/ram-match.bin when it exists, else the executable's initial memory. Every result
    records it, so a verdict judged without a snapshot is visible."""
    p = os.environ.get("PES6_EQUIV_RAM")
    if p == "image":
        return None
    if p:
        return p
    return DEFAULT_RAM if os.path.exists(DEFAULT_RAM) else None


def memory_label():
    p = memory_source()
    return f"ram:{os.path.basename(p)}" if p else "image"


def ram_dump():
    """A RAM snapshot of the running game to start every case from (memory_source): a raw 32 MB EE
    memory dump or a PCSX2 savestate (.p2s). Local only, never committed."""
    p = memory_source()
    if not p:
        return None
    if p.endswith(".p2s"):
        import zipfile
        return zipfile.ZipFile(p).read("eeMemory.bin")
    return open(p, "rb").read()


def build_memory(image):
    """The memory every case starts from: a RAM dump of the running game when PES6_EQUIV_RAM names one
    (globals, heap and lists as the game left them; the overlay of the dump's moment is resident),
    else the executable's (and overlay's) initial image."""
    dump = ram_dump()
    if dump is not None:
        m = S.Machine()
        m.mem[:len(dump)] = dump[:len(m.mem)]
        # only code goes over the dump: its data is the live state we want to keep
        m.load(0x00100000, elf_segments(os.path.join(ROOT, "orig", "SLES_542.03"))[0][1][:0x00372AE0 - 0x00100000])
        if image != "main":
            for addr, data in elf_segments(os.path.join(ROOT, "build", "targets", image, "image.elf")):
                text_len = os.path.getsize(os.path.join(ROOT, "build", "targets", image, "full", "text.bin"))
                m.load(addr, data[:text_len])
        return bytes(m.mem)
    m = S.Machine()
    for addr, data in memory_image(image):
        m.load(addr, data)
    return bytes(m.mem)


# ---- batches -------------------------------------------------------------------------------------

def load_cache(image):
    p = os.path.join(RESULTS, f"cache-{image}.json")
    return json.load(open(p)) if os.path.exists(p) else {}


def save(image, cache, results):
    os.makedirs(RESULTS, exist_ok=True)
    json.dump(cache, open(os.path.join(RESULTS, f"cache-{image}.json"), "w"))
    p = os.path.join(RESULTS, f"results-{image}.json")
    old = json.load(open(p)) if os.path.exists(p) else {}
    old.update(results)
    json.dump(old, open(p, "w"), indent=1, sort_keys=True)


def _worker(args):
    image, rows, jobs_seed = args
    import match
    base = build_memory(image)
    cache = {}
    objs = match.compile_many([r["source"] for r in rows], jobs=1)
    out = {}
    for r in rows:
        a = int(r["address"], 16)
        import signal

        def _timeout(sig, frm):
            raise TimeoutError()
        signal.signal(signal.SIGALRM, _timeout)
        signal.alarm(FUNCTION_TIMEOUT)
        try:
            if objs.get(r["source"]) is None:
                res = {"verdict": "ERROR", "detail": "does not compile"}
            else:
                res = judge(image, a, r["source"], r["symbol"], base, objs[r["source"]], cache)
        except TimeoutError:
            res = {"verdict": "UNTESTABLE", "detail": f"timeout ({FUNCTION_TIMEOUT} s)"}
        except Exception as e:                      # one bad draft must not stop the batch
            res = {"verdict": "ERROR", "detail": f"{type(e).__name__}: {e}"}
        finally:
            signal.alarm(0)
            if objs.get(r["source"]):
                try:
                    os.remove(objs[r["source"]])
                except OSError:
                    pass
        res.update({"symbol": r["symbol"], "source": r["source"]})
        out[r["address"]] = res
        with open(os.path.join(RESULTS, f"partial-{image}.jsonl"), "a") as fh:     # kept even if the batch stops
            fh.write(json.dumps({"address": r["address"], **res}) + "\n")
        print(f"{image} {r['address']} {res['verdict']} {res.get('detail', '')}"
              f"{' cases=%s+%s coverage=%s%%' % (res.get('cases'), res.get('holdout'), res.get('coverage')) if res['verdict'] == 'EQUIVALENT' else ''}",
              flush=True)
    return out, cache


def batch(list_path, jobs, limit):
    import csv
    import multiprocessing
    # fork, not the forkserver default of recent Pythons: workers must inherit this image's PES6_TARGET,
    # and a fork server started for an earlier image would hand them the wrong one
    Pool = multiprocessing.get_context("fork").Pool
    man = json.load(open(os.path.join(ROOT, "config", "nonmatching.json")))
    drafts = {(r["image"], r["address"]): r for r in man["functions"]}
    want = []
    for row in csv.DictReader(open(list_path)):
        key = (row["image"], row["address"].upper().replace("0X", "").zfill(8))
        if key in drafts:
            want.append(drafts[key])
    os.makedirs(RESULTS, exist_ok=True)
    done = {}
    for fn in os.listdir(RESULTS):
        m = re.match(r"partial-(\w+)\.jsonl$", fn)
        if m:
            for line in open(os.path.join(RESULTS, fn)):
                try:
                    r = json.loads(line)
                except ValueError:
                    continue
                done[(m.group(1), r["address"])] = r
    for fn in os.listdir(RESULTS):
        m = re.match(r"results-(\w+)\.json$", fn)
        if m:
            for a, r in json.load(open(os.path.join(RESULTS, fn))).items():
                done[(m.group(1), a)] = r
    skipped = sum(1 for r in want if (r["image"], r["address"]) in done)
    want = [r for r in want if (r["image"], r["address"]) not in done]
    print(f"{skipped} already judged, {len(want)} to go", flush=True)
    if limit:
        want = want[:limit]
    by_image = {}
    for r in want:
        by_image.setdefault(r["image"], []).append(r)
    for image, rows in by_image.items():
        print(f"{image}: {len(rows)} drafts", flush=True)
        env_target = None if image == "main" else image
        # the tools read the target image from PES6_TARGET when they are imported: one process per image
        if env_target:
            os.environ["PES6_TARGET"] = env_target
        else:
            os.environ.pop("PES6_TARGET", None)
        chunks = [rows[i:i + 10] for i in range(0, len(rows), 10)]     # small chunks: a slow function holds back little
        cache = load_cache(image)
        results = {}
        with Pool(jobs) as pool:
            for out, c in pool.imap_unordered(_worker, [(image, ch, i) for i, ch in enumerate(chunks) if ch]):
                results.update(out)
                cache.update(c)
                save(image, cache, out)
        counts = {}
        for r in results.values():
            counts[r["verdict"]] = counts.get(r["verdict"], 0) + 1
        print(f"{image}: {counts}", flush=True)


def report():
    found = {}
    # results-*.json (whole batches) first, then partial-*.jsonl (one line per function, newest last): later wins
    names = sorted(os.listdir(RESULTS)) if os.path.isdir(RESULTS) else []
    for fn in sorted(names, key=lambda n: (not n.startswith("results-"), n)):
        m = re.match(r"partial-(\w+)\.jsonl$", fn)
        if m:
            for line in open(os.path.join(RESULTS, fn)):
                try:
                    r = json.loads(line)
                except ValueError:
                    continue
                found[(m.group(1), r["address"])] = r
        m = re.match(r"results-(\w+)\.json$", fn)
        if m:
            for a, r in json.load(open(os.path.join(RESULTS, fn))).items():
                found[(m.group(1), a)] = r
    rows = [(img, a, r) for (img, a), r in found.items()]
    eq = [x for x in rows if x[2]["verdict"] == "EQUIVALENT"]
    counts = {}
    for _, _, r in rows:
        counts[r["verdict"]] = counts.get(r["verdict"], 0) + 1
    lines = ["# C-equivalent functions", "",
             "Non-matching drafts whose compiled C behaves like the original on generated test cases",
             "(`tools/equiv.py`, run on `tools/r5900sim.py`, which matches real PS2 results in",
             "`tools/ee_float_check.py` and `tools/r5900_check.py`). They stay in `nonmatching/`: this is",
             "behavioural evidence, not byte identity, and not a proof. `tools/equiv.py` explains the cases",
             "and what is compared. Coverage is the share of the original function's instructions the cases",
             "ran; a branch no case reached is not checked.", "",
             "Checked: " + ", ".join(f"{k.lower()} {v}" for k, v in sorted(counts.items())) + ".", "",
             "Cases start from the memory each row names: `ram:...` is a RAM snapshot of the running game",
             "(PES6_EQUIV_RAM, or build/equiv/ram-match.bin), `image` the executable's initial memory.", "",
             "| image | address | symbol | cases | holdout | coverage | memory |", "|---|---|---|---:|---:|---:|---|"]
    for image, a, r in sorted(eq):
        # results recorded before the memory field existed were all judged from the in-match snapshot
        mem = r.get("memory", "ram:ram-match.bin")
        lines.append(f"| {image} | `{a}` | `{r.get('symbol', '')}` | {r.get('cases')} | {r.get('holdout')} | {r.get('coverage')}% | {mem} |")
    open(os.path.join(ROOT, "docs", "equivalent.md"), "w").write("\n".join(lines) + "\n")
    print(f"docs/equivalent.md: {len(eq)} equivalent of {len(rows)} checked")


def main():
    args = sys.argv[1:]
    if not args:
        sys.exit(__doc__)
    if args[0] == "--report":
        return report()
    if args[0] == "--batch":
        jobs = int(args[args.index("--jobs") + 1]) if "--jobs" in args else 2
        limit = int(args[args.index("--limit") + 1]) if "--limit" in args else 0
        return batch(args[1], jobs, limit)
    image = os.environ.get("PES6_TARGET") or "main"
    base = build_memory(image)
    for a, src in zip(args[0::2], args[1::2]):
        addr = int(a, 16)
        try:
            r = judge(image, addr, src, None, base)
        except Exception as e:
            r = {"verdict": "ERROR", "detail": f"{type(e).__name__}: {e}"}
        print(f"{addr:08X} {r['verdict']} " + " ".join(f"{k}={v}" for k, v in r.items() if k not in ("verdict", "key")), flush=True)


if __name__ == "__main__":
    main()
