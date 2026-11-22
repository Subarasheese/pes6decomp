/* compiler: ee-gcc-2.96 */
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
/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/mprec.c). */

typedef unsigned int __ULong;
typedef int __Long;

#define ULong __ULong
#define Long __Long

struct _Bigint {
    struct _Bigint *_next;
    int _k, _maxwds, _sign, _wds;
    __ULong _x[1];
};

typedef struct _Bigint _Bigint;

#define Bigint _Bigint

struct _reent {
    int _errno;
    void *_stdin, *_stdout, *_stderr;
    int _inc;
    char _emergency[25];
    int _current_category;
    const char *_current_locale;
    int __sdidinit;
    void (*__cleanup)(struct _reent *);
    struct _Bigint *_result;
    int _result_k;
    struct _Bigint *_p5s;
    struct _Bigint **_freelist;
};

union double_union {
    double d;
    __ULong i[2];
};

#define word0(x) ((x).i[1])
#define word1(x) ((x).i[0])

#define Exp_shift 20
#define Exp_msk1 0x100000
#define Exp_mask 0x7ff00000
#define P 53
#define Bias 1023
#define Frac_mask 0xfffff
#define Ebits 11
#define Exp_1 0x3ff00000
#define _Kmax 15

#define Storeinc(a, b, c) (((unsigned short *)a)[1] = b, ((unsigned short *)a)[0] = c, a++)

#define Bcopy(x, y) memcpy((char *)&x->_sign, (char *)&y->_sign, y->_wds * sizeof(Long) + 2 * sizeof(int))

extern void *memcpy(void *dst, const void *src, unsigned int n);
extern void *_calloc_r(struct _reent *ptr, unsigned int nmemb, unsigned int size);

Bigint *_multiply(struct _reent *ptr, Bigint *a, Bigint *b);
double _b2d(Bigint *a, int *e);

#define tens __mprec_tens
#define bigtens __mprec_bigtens
#define tinytens __mprec_tinytens

#define Balloc _Balloc
#define Bfree _Bfree
#define multadd _multadd
#define i2b _i2b
#define hi0bits _hi0bits
#define lo0bits func_001B8790
#define mult _multiply
#define cmp __mcmp
#define b2d _b2d
Bigint *_Balloc(struct _reent *ptr, int k);
void _Bfree(struct _reent *ptr, Bigint *v);
Bigint *_multadd(struct _reent *ptr, Bigint *b, int m, int a);
Bigint *_s2b(struct _reent *ptr, const char *s, int nd0, int nd, ULong y9);
int _hi0bits(ULong x);

int func_001B8790(ULong *y)
{
    int k;
    ULong x = *y;

    if (x & 7) {
        if (x & 1) {
            return 0;
        }
        if (x & 2) {
            *y = x >> 1;
            return 1;
        }
        *y = x >> 2;
        return 2;
    }
    k = 0;
    if (!(x & 0xffff)) {
        k = 16;
        x >>= 16;
    }
    if (!(x & 0xff)) {
        k += 8;
        x >>= 8;
    }
    if (!(x & 0xf)) {
        k += 4;
        x >>= 4;
    }
    if (!(x & 0x3)) {
        k += 2;
        x >>= 2;
    }
    if (!(x & 1)) {
        k++;
        x >>= 1;
        if (!x) {
            return 32;
        }
    }
    *y = x;
    return k;
}
Bigint *_i2b(struct _reent *ptr, int i);
Bigint *_multiply(struct _reent *ptr, Bigint *a, Bigint *b);
Bigint *_pow5mult(struct _reent *ptr, Bigint *b, int k);
Bigint *_lshift(struct _reent *ptr, Bigint *b, int k);
int __mcmp(Bigint *a, Bigint *b);
Bigint *__mdiff(struct _reent *ptr, Bigint *a, Bigint *b);
double _ulp(double _x);
double _b2d(Bigint *a, int *e);
Bigint *_d2b(struct _reent *ptr, double _d, int *e, int *bits);
double _ratio(Bigint *a, Bigint *b);
extern const double tens[];
extern const double bigtens[];
extern const double tinytens[];
double _mprec_log10(int dig);
