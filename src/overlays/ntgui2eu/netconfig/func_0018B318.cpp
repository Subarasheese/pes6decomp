/* compiler: ee-gcc-2.9-G0 */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_0023dab0.cpp. See THIRD_PARTY.md. */
// SPDX-License-Identifier: GPL-3.0-or-later
extern "C" {
typedef unsigned long long UDI;
typedef unsigned int USI;
typedef struct { USI cls; USI sign; int exp; union { UDI ll; USI l[2]; } fraction; } fpd;
extern void func_0018ACD0(double *, fpd *);
extern double func_0018ABA0(fpd *);
extern fpd D_011F6C50;
static inline int iszero(fpd *p) { return p->cls == 2; }
static inline int isnan(fpd *p) { return p->cls < 2; }
static inline int isinf(fpd *p) { return p->cls == 4; }
static inline fpd *fpdivParts(fpd *a, fpd *b) {
    UDI numerator, denominator, quotient, bit;
    if (isnan(a))
        return a;
    if (isnan(b))
        return b;
    a->sign = a->sign ^ b->sign;
    if (isinf(a) || iszero(a)) {
        if (a->cls == b->cls)
            return &D_011F6C50;
        return a;
    }
    if (isinf(b)) {
        a->fraction.ll = 0;
        a->exp = 0;
        return a;
    }
    if (iszero(b)) {
        a->cls = 4;
        return a;
    }
    a->exp = a->exp - b->exp;
    numerator = a->fraction.ll;
    denominator = b->fraction.ll;
    if (numerator < denominator) {
        numerator *= 2;
        a->exp--;
    }
    bit = (UDI)1 << 60;
    quotient = 0;
    while (bit) {
        if (numerator >= denominator) {
            quotient |= bit;
            numerator -= denominator;
        }
        bit >>= 1;
        numerator *= 2;
    }
    if ((quotient & 0xFF) == 0x80) {
        if (quotient & 0x100)
            quotient += 0x80;
        else if (numerator)
            quotient += 0x80;
    }
    a->fraction.ll = quotient;
    return a;
}
double func_0018B318(double a, double b) {
    fpd x, y;
    func_0018ACD0(&a, &x);
    func_0018ACD0(&b, &y);
    return func_0018ABA0(fpdivParts(&x, &y));
}
}
