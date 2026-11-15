"""PS2 Emotion Engine single-precision float arithmetic (COP1, and VU0 macro mode), bit-exact.

The EE FPU is not IEEE 754: exponent 255 is an ordinary exponent (no Inf, no NaN), exponent 0 means
zero (denormals count as zero), overflow saturates to +-0x7FFFFFFF ("max"), additions truncate after
dropping the smaller operand's low bits, multiplications come from a Booth multiplier that discards
part of its partial products, and division and square root come from an SRT radix-2 divider.

Values are 32-bit patterns (ints). Every operation here is checked against the results a real PS2
printed in ps2autotests (tools/ee_float_check.py).

Provenance: add/sub/mul/madd/msub/div/sqrt/rsqrt are a Python port of pcsx2/PS2Float.cpp from PCSX2
pull request #12001 ("Core/EE: Implements Soft-Floats for the interpreters", GPL-3.0+), whose divider
follows DOI 10.1109/ARITH.1995.465363.
"""

SIGN = 0x80000000
MAX = 0x7FFFFFFF            # +max; -max is 0xFFFFFFFF
M32 = 0xFFFFFFFF
M64 = 0xFFFFFFFFFFFFFFFF


def _exp(x):
    return (x >> 23) & 0xFF


def _man(x):
    return x & 0x7FFFFF


def _s32(x):
    x &= M32
    return x - (1 << 32) if x & SIGN else x


# ---- Booth multiplier ----------------------------------------------------------------------------

def _booth(a, b, bit):
    test = ((b >> (bit * 2 - 1)) if bit else (b << 1)) & 7
    a = (a << (bit * 2)) & M32
    if test in (3, 4):
        a = (a + a) & M32
    neg = M32 if 4 <= test <= 6 else 0
    pos = (1 << (bit * 2)) & M32
    a ^= neg & ((-pos) & M32)
    a &= M32 if 1 <= test <= 6 else 0
    return a, neg & pos


def _add3(a, b, c):
    u = a ^ b
    return (u ^ c) & M32, (((u & c) | (a & b)) << 1) & M32


def _mul_mantissa(a, b):
    full = (a * b) & M64
    bs = [_booth(a, b, i) for i in range(8)]
    (b0, n0), (b1, n1), (b2, n2), (b3, n3), (b4, n4), (b5, n5), (b6, n6), (b7, n7) = bs
    t0 = _add3(b1, b2, b3)
    t1lo, t1hi = _add3(b4 & ~0x7FF & M32, b5 & ~0xFFF & M32, b6)
    t1hi |= n6 | (b5 & 0x800)
    b7 = (b7 | ((b5 & 0x400) + n5)) & M32
    t2 = _add3(b0, t0[0], t0[1])
    t3 = _add3(b7, t1lo, t1hi)
    t4 = _add3(t2[1], t3[0], t3[1])
    t5lo, t5hi = _add3(t2[0], t4[0], t4[1])
    t5hi = (t5hi + n7) & M32
    t5lo &= ~0x7FFF & M32
    t5hi &= ~0x7FFF & M32
    ps2lo = (t5lo + t5hi) & M32
    return (full - ((ps2lo ^ full) & 0x8000)) & M64


# ---- results carry an overflow flag (needed by the multiply-add rules) ---------------------------

class R(int):
    """An EE float pattern with its overflow flag (int subclass: compares and packs as the pattern)."""
    of = False

    def __new__(cls, v, of=False):
        o = int.__new__(cls, v & M32)
        o.of = of
        return o


def _is_denorm(x):
    return _exp(x) == 0


def _cmp_operands(a, b):
    a, b = a & MAX, b & MAX
    return -1 if a < b else (0 if a == b else 1)


def _do_add(a, b):
    ea, eb = _exp(a), _exp(b)
    d = ea - eb
    if d < 0:
        return _do_add(b, a)
    if d >= 25:
        return R(a)
    rm = 6
    sa = M32 if a & SIGN else 0
    ma = _s32((((_man(a) | 0x800000) ^ sa) - sa))
    sb = M32 if b & SIGN else 0
    mb = _s32((((_man(b) | 0x800000) ^ sb) - sb))
    man = _s32((ma << rm) + ((mb << rm) >> d))           # >> on a negative int floors, as in C on these targets
    absman = abs(man)
    if absman == 0:
        return R(0)
    raw_exp = ea - rm + (absman.bit_length() - 1 - 23)
    n = absman.bit_length()
    absman = absman >> (n - 24) if n > 24 else absman << (24 - n)
    if raw_exp > 255:
        return R(0xFFFFFFFF if man < 0 else MAX, of=True)
    if raw_exp < 1:
        return R(SIGN if man < 0 else 0)
    return R((SIGN if man < 0 else 0) | (raw_exp << 23) | (absman & 0x7FFFFF))


def _mask_smaller(a, b):
    d = _exp(a) - _exp(b)
    if 0 < d < 25:
        b &= (0xFFFFFFFF << (d - 1)) & M32
    elif -25 < d < 0:
        a &= (0xFFFFFFFF << (-d - 1)) & M32
    return a, b


def add(a, b):
    if _is_denorm(a) or _is_denorm(b):
        if _is_denorm(a) and _is_denorm(b):
            return R(0 if (not a & SIGN or not b & SIGN) else SIGN)
        sign = (a if _cmp_operands(a, b) >= 0 else b) & SIGN
        o = b if _is_denorm(a) else a
        return R(sign | (o & MAX))
    a, b = _mask_smaller(a, b)
    return _do_add(a, b)


def sub(a, b):
    if _is_denorm(a) or _is_denorm(b):
        if _is_denorm(a) and _is_denorm(b):
            return R(0 if (not a & SIGN or b & SIGN) else SIGN)
        sign = (a & SIGN) if _cmp_operands(a, b) >= 0 else ((b ^ SIGN) & SIGN)
        o = b if _is_denorm(a) else a
        return R(sign | (o & MAX))
    a, b = _mask_smaller(a, b)
    return _do_add(a, b ^ SIGN)


def mul(a, b):
    sign = (a ^ b) & SIGN
    if _is_denorm(a) or _is_denorm(b) or not (a & MAX) or not (b & MAX):
        return R(sign)
    e = _exp(a) + _exp(b) - 127
    m = _mul_mantissa(_man(a) | 0x800000, _man(b) | 0x800000) >> 23
    if m > 0xFFFFFF:
        m >>= 1
        e += 1
    if e > 255:
        return R(sign | MAX, of=True)
    if e < 1:
        return R(sign)
    return R(sign | (e << 23) | (m & 0x7FFFFF))


def _mac(mode_add, acc, acc_of, fs, ft):
    """ACC +- fs*ft with the EE's overflow rules; returns R (new value, with overflow flag)."""
    p = mul(fs, ft)
    r = add(acc, p) if mode_add else sub(acc, p)
    of = r.of
    msign = 1 if p & SIGN else 0
    to_max = (msign == 0) if mode_add else (msign != 0)
    if not acc_of:
        if p.of:
            r, of = (MAX if to_max else 0xFFFFFFFF), True
    elif not p.of:
        r, of = acc, True
    else:
        r, of = (MAX if to_max else 0xFFFFFFFF), True
    return R(r, of=of)


def madd(acc, fs, ft, acc_of=False):
    return _mac(True, acc, acc_of, fs, ft)


def msub(acc, fs, ft, acc_of=False):
    return _mac(False, acc, acc_of, fs, ft)


# ---- SRT divider and square root ------------------------------------------------------------------

def _csa(a, b, c):
    u = a ^ b
    h = (a & b) | (u & c)
    return (u ^ c) & M32, (h << 1) & M32


def _qsel(s, c):
    mask = (1 << 24) - 1
    test = _s32((((s & ~mask) + c) & M32) | (s & mask))
    if test >= 1 << 23:
        return 1
    if test < _s32(M32 << 24):
        return -1
    return 0


def div(a, b):
    sgn = SIGN if ((b >> 31) != (a >> 31)) else 0
    if _exp(a) == 0 and _exp(b) != 0:
        return R(sgn)
    if _exp(a) != 0 and _exp(b) == 0:
        return R(sgn | MAX)
    if _exp(a) == 0 and _exp(b) == 0:
        return R(sgn | MAX)
    am = ((_man(a) | 0x800000) << 2) & M32
    bm = ((_man(b) | 0x800000) << 2) & M32
    s, c = am, 0
    q, qb = 0, 1
    for _ in range(25):
        q = ((q << 1) + qb) & M32
        add_ = (~bm & M32) if qb > 0 else (bm if qb < 0 else 0)
        c = (c + (1 if qb > 0 else 0)) & M32
        cs, cc = _csa(s, c, add_)
        qb = _qsel(cs, cc) if qb else _qsel(s, c)
        s, c = (cs << 1) & M32, (cc << 1) & M32
    sign = (a ^ b) & SIGN
    cexp = _exp(a) - _exp(b) + 126
    if q >= 1 << 24:
        cexp += 1
        q >>= 1
    if cexp > 255:
        return R(sign | MAX, of=True)
    if cexp < 1:
        return R(sign)
    return R((q & 0x7FFFFF) | (cexp << 23) | sign)


def sqrt(a):
    if _exp(a) == 0:
        return R(0)
    m = ((_man(a) | 0x800000) << 1) & M32
    if not a & 0x800000:
        m = (m << 1) & M32
    s, c = m, 0
    q, qb = 0, 1
    for i in range(25):
        adjust = (q + (qb << (24 - i))) & M32
        q = (q + (qb << (25 - i))) & M32
        add_ = (~adjust & M32) if qb > 0 else (adjust if qb < 0 else 0)
        c = (c + (1 if qb > 0 else 0)) & M32
        cs, cc = _csa(s, c, add_)
        qb = _qsel(cs, cc) if qb else _qsel(s, c)
        s, c = (cs << 1) & M32, (cc << 1) & M32
    e = (_exp(a) + 127) >> 1
    return R(((q >> 2) & 0x7FFFFF) | (e << 23))


def rsqrt(a, b):
    """fs / sqrt(|ft|)."""
    return div(a, sqrt(b & MAX))


# ---- simple operations ----------------------------------------------------------------------------

def neg(a):
    return a ^ SIGN


def abs_(a):
    return a & MAX


def _order(a):
    """Total order used by max/min: sign-magnitude with -0 below +0."""
    m = a & MAX
    return -m - 1 if a & SIGN else m


def max_(a, b):
    return a if _order(a) >= _order(b) else b


def min_(a, b):
    return a if _order(a) <= _order(b) else b


def cmp_value(a):
    """Key for c.eq/c.lt/c.le: exponent-0 patterns compare as zero, sign ignored for zero."""
    if _exp(a) == 0:
        return 0
    m = a & MAX
    return -m if a & SIGN else m


def cvt_w_s(a):
    """float -> int32, truncating toward zero; out of range saturates."""
    e = _exp(a)
    if e == 0:
        return 0
    m = _man(a) | 0x800000
    sh = e - 150
    v = m << sh if sh >= 0 else m >> -sh
    if a & SIGN:
        return 0x80000000 if v >= 0x80000000 else (-v) & M32
    return 0x7FFFFFFF if v >= 0x80000000 else v


def cvt_s_w(w):
    """int32 -> float, truncating toward zero."""
    w &= M32
    if w == 0:
        return 0
    s = w >> 31
    v = (1 << 32) - w if s else w
    n = v.bit_length()
    m = v >> (n - 24) if n > 24 else v << (24 - n)
    return (s << 31) | ((n - 1 + 127) << 23) | (m & 0x7FFFFF)


def to_float(b):
    """Host value of an EE float pattern (exponent 255 read as a normal number), for printing."""
    e = _exp(b)
    if e == 0:
        return -0.0 if b & SIGN else 0.0
    v = (_man(b) | 0x800000) * 2.0 ** (e - 150)
    return -v if b & SIGN else v
