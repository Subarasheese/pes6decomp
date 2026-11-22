/* compiler: ee-gcc-2.96-G0-g */
/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/
/* newlib 1.9.0 libc/stdlib/strtod.c, built for round-toward-zero. */
#include "types.h"
typedef unsigned int size_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef __uint32_t __ULong;
struct _reent {
    int _errno;
};
struct _Bigint {
    struct _Bigint *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};
extern void *func_001AE624(void *, const void *, size_t);
union __dmath {
    __uint32_t i[2];
    double d;
};
extern const union __dmath D_00601F10[];
union double_union {
    double d;
    __uint32_t i[2];
};
typedef struct _Bigint _Bigint;
extern double func_001B8EE8(double x);
extern _Bigint *_Balloc(struct _reent *p, int k);
extern void _Bfree(struct _reent *p, _Bigint *v);
extern _Bigint *func_001B85E0(struct _reent *, const char *, int, int, __ULong);
extern _Bigint *_i2b(struct _reent *, int);
extern _Bigint *_multiply(struct _reent *, _Bigint *, _Bigint *);
extern _Bigint *_pow5mult(struct _reent *, _Bigint *, int k);
extern _Bigint *_d2b(struct _reent *p, double d, int *e, int *bits);
extern _Bigint *_lshift(struct _reent *p, _Bigint *b, int k);
extern _Bigint *__mdiff(struct _reent *p, _Bigint *a, _Bigint *b);
extern int __mcmp(_Bigint *a, _Bigint *b);
extern double func_001B92D8(_Bigint *a, _Bigint *b);
extern const double D_00601EE8[];
extern const double __mprec_bigtens[];
extern const double __mprec_tens[];

double func_001B3F30(struct _reent *ptr, const char *s00, char **se) {
    int bb2;
    int bb5;
    int bbe;
    int bd2;
    int bd5;
    int bbbits;
    int bs2;
    int c;
    int dsign;
    int e1;
    int esign;
    int i;
    int j;
    int k;
    int nd;
    int nd0;
    int nf;
    int nz;
    int nz0;
    int sign;
    long e;
    const char *s;
    const char *s0;
    const char *s1;
    double aadj;
    double aadj1;
    double adj;
    long L;
    unsigned long z;
    __ULong y;
    union double_union rv;
    union double_union rv0;
    _Bigint *bb;
    _Bigint *bb1;
    _Bigint *bd;
    _Bigint *bd0;
    _Bigint *bs;
    _Bigint *delta;
    sign = (nz0 = (nz = 0));
    rv.d = 0.;
    for (s = s00;; s++)
        switch (*s) {
        case '-':
            sign = 1;

        case '+':
            if (*(++s))
                goto break2;

        case 0:
            s = s00;
            goto ret;

        case '\t':

        case '\n':

        case '\v':

        case '\f':

        case '\r':

        case ' ':
            continue;

        default:
            goto break2;
        }

break2:
    if ((*s) == '0') {
        nz0 = 1;
        while ((*(++s)) == '0')
            ;

        if (!(*s))
            goto ret;
    }

    s0 = s;
    y = (z = 0);
    for (nd = (nf = 0); ((c = *s) >= '0') && (c <= '9'); nd++, s++)
        if (nd < 9)
            y = ((10 * y) + c) - '0';
        else if (nd < 16)
            z = ((10 * z) + c) - '0';

    nd0 = nd;
    if (c == '.') {
        c = *(++s);
        if (!nd) {
            for (; c == '0'; c = *(++s))
                nz++;

            if ((c > '0') && (c <= '9')) {
                s0 = s;
                nf += nz;
                nz = 0;
                goto have_dig;
            }
            goto dig_done;
        }
        for (; (c >= '0') && (c <= '9'); c = *(++s)) {
        have_dig:
            nz++;

            if (c -= '0') {
                nf += nz;
                for (i = 1; i < nz; i++)
                    if ((nd++) < 9)
                        y *= 10;
                    else if (nd <= (15 + 1))
                        z *= 10;

                if ((nd++) < 9)
                    y = (10 * y) + c;
                else if (nd <= (15 + 1))
                    z = (10 * z) + c;
                nz = 0;
            }
        }
    }
dig_done:
    e = 0;

    if ((c == 'e') || (c == 'E')) {
        if (((!nd) && (!nz)) && (!nz0)) {
            s = s00;
            goto ret;
        }
        s00 = s;
        esign = 0;
        switch (c = *(++s)) {
        case '-':
            esign = 1;

        case '+':
            c = *(++s);
        }

        if ((c >= '0') && (c <= '9')) {
            while (c == '0')
                c = *(++s);

            if ((c > '0') && (c <= '9')) {
                e = c - '0';
                s1 = s;
                while (((c = *(++s)) >= '0') && (c <= '9'))
                    e = ((10 * e) + c) - '0';

                if ((s - s1) > 8)
                    e = 9999999L;
                if (esign)
                    e = -e;
            } else
                e = 0;
        } else
            s = s00;
    }
    if (!nd) {
        if ((!nz) && (!nz0))
            s = s00;
        goto ret;
    }
    e1 = (e -= nf);
    if (!nd0)
        nd0 = nd;
    k = (nd < (15 + 1)) ? (nd) : (15 + 1);
    rv.d = y;
    if (k > 9)
        rv.d = (__mprec_tens[k - 9] * rv.d) + z;
    bd0 = 0;
    if ((nd <= 15) && (0 == 1)) {
        if (!e)
            goto ret;
        if (e > 0) {
            if (e <= 22) {
                rv.d *= __mprec_tens[e];
                goto ret;
            }
            i = 15 - nd;
            if (e <= (22 + i)) {
                e -= i;
                rv.d *= __mprec_tens[i];
                rv.d *= __mprec_tens[e];
                goto ret;
            }
        } else if (e >= (-22)) {
            rv.d /= __mprec_tens[-e];
            goto ret;
        }
    }
    e1 += nd - k;
    if (e1 > 0) {
        if ((i = e1 & 15) != 0)
            rv.d *= __mprec_tens[i];
        if (e1 &= ~15) {
            if (e1 > 308) {
            ovfl:
                ptr->_errno = 34;

                rv.d = D_00601F10[0].d;
                if (bd0)
                    goto retfree;
                goto ret;
            }
            if (e1 >>= 4) {
                for (j = 0; e1 > 1; j++, e1 >>= 1)
                    if (e1 & 1)
                        rv.d *= __mprec_bigtens[j];

                rv.i[1] -= 53 * ((__uint32_t)0x100000L);
                rv.d *= __mprec_bigtens[j];
                if ((z = rv.i[1] & ((__uint32_t)0x7ff00000L)) >
                    (((__uint32_t)0x100000L) * ((1024 + 1023) - 53)))
                    goto ovfl;
                if (z > (((__uint32_t)0x100000L) * (((1024 + 1023) - 1) - 53))) {
                    rv.i[1] =
                        ((__uint32_t)0xfffffL) | (((__uint32_t)0x100000L) * ((1024 + 1023) - 1));
                    rv.i[0] = (__uint32_t)0xffffffffL;
                } else
                    rv.i[1] += 53 * ((__uint32_t)0x100000L);
            }
        }
    } else if (e1 < 0) {
        e1 = -e1;
        if ((i = e1 & 15) != 0)
            rv.d /= __mprec_tens[i];
        if (e1 &= ~15) {
            e1 >>= 4;
            if (e1 >= (1 << 5))
                goto undfl;
            for (j = 0; e1 > 1; j++, e1 >>= 1)
                if (e1 & 1)
                    rv.d *= D_00601EE8[j];

            rv0.d = rv.d;
            rv.d *= D_00601EE8[j];
            if (!rv.d) {
                rv.d = 2. * rv0.d;
                rv.d *= D_00601EE8[j];
                if (!rv.d) {
                undfl:
                    rv.d = 0.;

                    ptr->_errno = 34;
                    if (bd0)
                        goto retfree;
                    goto ret;
                }
                rv.i[1] = 0;
                rv.i[0] = 1;
            }
        }
    }
    bd0 = func_001B85E0(ptr, s0, nd0, nd, y);
    for (;;) {
        bd = _Balloc(ptr, bd0->_k);
        func_001AE624((char *)(&bd->_sign), (char *)(&bd0->_sign),
                      (bd0->_wds * (sizeof(__int32_t))) + (2 * (sizeof(int))));
        bb = _d2b(ptr, rv.d, &bbe, &bbbits);
        bs = _i2b(ptr, 1);
        if (e >= 0) {
            bb2 = (bb5 = 0);
            bd2 = (bd5 = e);
        } else {
            bb2 = (bb5 = -e);
            bd2 = (bd5 = 0);
        }
        if (bbe >= 0)
            bb2 += bbe;
        else
            bd2 -= bbe;
        bs2 = bb2;
        i = (bbe + bbbits) - 1;
        if (i < (-1022))
            j = bbe + (53 - (-1022));
        else
            j = (53 + 1) - bbbits;
        bb2 += j;
        bd2 += j;
        i = (bb2 < bd2) ? (bb2) : (bd2);
        if (i > bs2)
            i = bs2;
        if (i > 0) {
            bb2 -= i;
            bd2 -= i;
            bs2 -= i;
        }
        if (bb5 > 0) {
            bs = _pow5mult(ptr, bs, bb5);
            bb1 = _multiply(ptr, bs, bb);
            _Bfree(ptr, bb);
            bb = bb1;
        }
        if (bb2 > 0)
            bb = _lshift(ptr, bb, bb2);
        if (bd5 > 0)
            bd = _pow5mult(ptr, bd, bd5);
        if (bd2 > 0)
            bd = _lshift(ptr, bd, bd2);
        if (bs2 > 0)
            bs = _lshift(ptr, bs, bs2);
        delta = __mdiff(ptr, bb, bd);
        dsign = delta->_sign;
        delta->_sign = 0;
        i = __mcmp(delta, bs);
        if (i < 0) {
            if ((dsign || rv.i[0]) || (rv.i[1] & ((__uint32_t)0xfffffL)))
                break;
            delta = _lshift(ptr, delta, 1);
            if (__mcmp(delta, bs) > 0)
                goto drop_down;
            break;
        }
        if (i == 0) {
            if (dsign) {
                if (((rv.i[1] & ((__uint32_t)0xfffffL)) == ((__uint32_t)0xfffffL)) &&
                    (rv.i[0] == 0xffffffff)) {
                    rv.i[1] = (rv.i[1] & ((__uint32_t)0x7ff00000L)) + ((__uint32_t)0x100000L);
                    rv.i[0] = 0;
                    break;
                }
            } else if ((!(rv.i[1] & ((__uint32_t)0xfffffL))) && (!rv.i[0])) {
            drop_down:
                L = (rv.i[1] & ((__uint32_t)0x7ff00000L)) - ((__uint32_t)0x100000L);

                rv.i[1] = L | ((__uint32_t)0xfffffL);
                rv.i[0] = 0xffffffff;
                break;
            }
            if (!(rv.i[0] & 1))
                break;
            if (dsign)
                rv.d += func_001B8EE8(rv.d);
            else {
                rv.d -= func_001B8EE8(rv.d);
                if (!rv.d)
                    goto undfl;
            }
            break;
        }
        if ((aadj = func_001B92D8(delta, bs)) <= 2.) {
            if (dsign)
                aadj = (aadj1 = 1.);
            else if (rv.i[0] || (rv.i[1] & ((__uint32_t)0xfffffL))) {
                if ((rv.i[0] == 1) && (!rv.i[1]))
                    goto undfl;
                aadj = 1.;
                aadj1 = -1.;
            } else {
                if (aadj < (2. / 2))
                    aadj = 1. / 2;
                else
                    aadj *= 0.5;
                aadj1 = -aadj;
            }
        } else {
            aadj *= 0.5;
            aadj1 = (dsign) ? (aadj) : (-aadj);
            if (0 == 0)
                aadj1 += 0.5;
        }
        y = rv.i[1] & ((__uint32_t)0x7ff00000L);
        if (y == (((__uint32_t)0x100000L) * ((1024 + 1023) - 1))) {
            rv0.d = rv.d;
            rv.i[1] -= 53 * ((__uint32_t)0x100000L);
            adj = aadj1 * func_001B8EE8(rv.d);
            rv.d += adj;
            if ((rv.i[1] & ((__uint32_t)0x7ff00000L)) >=
                (((__uint32_t)0x100000L) * ((1024 + 1023) - 53))) {
                if ((rv0.i[1] ==
                     (((__uint32_t)0xfffffL) | (((__uint32_t)0x100000L) * ((1024 + 1023) - 1)))) &&
                    (rv0.i[0] == ((__uint32_t)0xffffffffL)))
                    goto ovfl;
                rv.i[1] = ((__uint32_t)0xfffffL) | (((__uint32_t)0x100000L) * ((1024 + 1023) - 1));
                rv.i[0] = (__uint32_t)0xffffffffL;
                goto cont;
            } else
                rv.i[1] += 53 * ((__uint32_t)0x100000L);
        } else {
            if ((y <= ((53 - 1) * ((__uint32_t)0x100000L))) && (aadj >= 1.)) {
                aadj1 = (double)((int)(aadj + 0.5));
                if (!dsign)
                    aadj1 = -aadj1;
            }
            adj = aadj1 * func_001B8EE8(rv.d);
            rv.d += adj;
        }
        z = rv.i[1] & ((__uint32_t)0x7ff00000L);
        if (y == z) {
            L = aadj;
            aadj -= L;
            if ((dsign || rv.i[0]) || (rv.i[1] & ((__uint32_t)0xfffffL))) {
                if ((aadj < .4999999) || (aadj > .5000001))
                    break;
            } else if (aadj < (.4999999 / 2))
                break;
        }
    cont:
        _Bfree(ptr, bb);

        _Bfree(ptr, bd);
        _Bfree(ptr, bs);
        _Bfree(ptr, delta);
    }

retfree:
    _Bfree(ptr, bb);

    _Bfree(ptr, bd);
    _Bfree(ptr, bs);
    _Bfree(ptr, bd0);
    _Bfree(ptr, delta);
ret:
    if (se)
        *se = (char *)s;

    return (sign) ? (-rv.d) : (rv.d);
}
