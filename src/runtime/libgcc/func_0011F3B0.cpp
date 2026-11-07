/* compiler: ee-gcc-2.96-nsa-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* GCC runtime (gcc 2000-10-03 snapshot, libgcc.a): a function of fp-bit.c, in libgcc.a's code at 0x5ba060-0x5c1ce0.
 * licence: gcc-runtime (GPL with the GCC runtime exception, see THIRD_PARTY.md) */
struct FP { unsigned int cls; unsigned int sign; int exp; unsigned int frac; };
union Result { float value; struct { unsigned int fraction:23; unsigned int exponent:8; unsigned int sign:1; } bits; };
static inline int iszero(FP *p) { return p->cls == 2; }
extern "C" float func_0011F3B0(FP *p, int unused0, int unused1, int unused2) {
    Result r;
    unsigned int fraction = p->frac;
    int exp = 0;
    int sign = p->sign;
    if (iszero(p)) { fraction = 0; }
    else if (fraction != 0) {
        if (p->exp < -126) fraction = 0;
        else if (p->exp > 128) { exp = 255; fraction = 0; }
        else {
            if (p->exp == 128 && fraction >= 0x80000000U) {
                exp = 255;
                fraction = 0;
            } else {
                exp = p->exp + 127;
                fraction >>= 7;
            }
        }
    }
    r.bits.fraction = fraction;
    r.bits.exponent = exp;
    r.bits.sign = sign;
    return r.value;
}
