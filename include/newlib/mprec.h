/* newlib 1.9.0, PS2 dtoa.c types and dependencies, adapted from crashwoc-decomp-ps2. */
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

#ifndef PES6_NEWLIB_MPREC_H
#define PES6_NEWLIB_MPREC_H

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
#define IEEE_Arith
#define Pack_32

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

#define Exp_shift1 20
#define Exp_msk1 0x100000
#define Exp_mask 0x7ff00000
#define P 53
#define Bias 1023
#define Exp_11 0x3ff00000
#define Frac_mask1 0xfffff
#define Ten_pmax 22
#define Bletch 0x10
#define Bndry_mask 0xfffff
#define Log2P 1
#define Sign_bit 0x80000000
#define Quick_max 14
#define Int_max 14
#define n_bigtens 5

#define Storeinc(a, b, c) (((unsigned short *)a)[1] = b, ((unsigned short *)a)[0] = c, a++)

#define Bcopy(x, y) memcpy((char *)&x->_sign, (char *)&y->_sign, y->_wds * sizeof(Long) + 2 * sizeof(int))

extern void *memcpy(void *dst, const void *src, unsigned int n);

extern Bigint *_Balloc(struct _reent *ptr, int k);
extern void _Bfree(struct _reent *ptr, Bigint *v);
extern Bigint *_multadd(struct _reent *ptr, Bigint *b, int m, int a);
extern int _hi0bits(ULong x);
extern Bigint *_i2b(struct _reent *ptr, int i);
extern Bigint *_multiply(struct _reent *ptr, Bigint *a, Bigint *b);
extern Bigint *_pow5mult(struct _reent *ptr, Bigint *b, int k);
extern Bigint *_lshift(struct _reent *ptr, Bigint *b, int k);
extern int __mcmp(Bigint *a, Bigint *b);
extern Bigint *__mdiff(struct _reent *ptr, Bigint *a, Bigint *b);
extern Bigint *_d2b(struct _reent *ptr, double d, int *e, int *bits);

extern const double __mprec_tens[];
extern const double __mprec_bigtens[];

#define Balloc _Balloc
#define Bfree _Bfree
#define multadd _multadd
#define hi0bits _hi0bits
#define i2b _i2b
#define mult _multiply
#define pow5mult _pow5mult
#define lshift _lshift
#define cmp __mcmp
#define diff __mdiff
#define d2b _d2b
#define tens __mprec_tens
#define bigtens __mprec_bigtens

int quorem(Bigint *b, Bigint *S);

#endif
