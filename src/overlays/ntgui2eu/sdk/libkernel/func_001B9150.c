/* compiler: ee-gcc-2.96-G0 */
/*
 * Adapted from newlib 1.10.0 newlib/libc/stdlib/mprec.c.
 * SPDX-License-Identifier: HPND
 * Upstream sourceware revision: newlib-1_10_0 (ffbf3c2fe5af89ba84aad3359964ead31121b7ad).
 * David M. Gay, Copyright (c) 1991 by AT&T. The full upstream notice follows.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy or
 * modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY. IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 */
/* newlib 1.10.0, libc/stdlib/mprec.c, via g-guthrie/mvc2-port-and-decomp. */
typedef struct __sbuf {
    unsigned char *_base;
    int _size;
} SBuf;
typedef struct __sFILE FILE;
typedef struct _Bigint {
    struct _Bigint *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
} _Bigint;
typedef struct _reent {
    int _errno;
    FILE *_stdin;
    FILE *_stdout;
    FILE *_stderr;
    int _inc;
    char _emergency[25];
    int _current_category;
    const char *_current_locale;
    int __sdidinit;
    void (*__cleanup)(struct _reent *);
    struct _Bigint *_result;
    int _result_k;
    struct _Bigint *_p5s;
} Reent;
struct __sFILE {
    unsigned char *_p;
    int _r;
    int _w;
    short _flags;
    short _file;
    SBuf _bf;
    int _lbfsize;
    void *_cookie;
    int (*_read)(void *, char *, int);
    int (*_write)(void *, const char *, int);
    long long (*_seek)(void *, long long, int);
    int (*_close)(void *);
    SBuf _ub;
    unsigned char *_up;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    SBuf _lb;
    int _blksize;
    int _offset;
    Reent *_data;
};
typedef unsigned int __ULong;
typedef unsigned int __uint32_t;
union double_union {
    double d;
    __uint32_t i[2];
};
extern _Bigint *func_001B8400(Reent *, int);
extern __ULong func_001B8790(__ULong *);
extern int func_001B8710(__ULong x);

_Bigint *func_001B9150(Reent *ptr, double _d, int *e, int *bits) {
    union double_union d;
    _Bigint *b;
    int de;
    int i;
    int k;
    __ULong *x;
    __ULong y;
    __ULong z;
    d.d = _d;
    d.d = _d;
    b = func_001B8400(ptr, 1);
    x = b->_x;
    z = d.i[1] & ((__uint32_t)0x000fffff);
    d.i[1] &= 0x7fffffff;
    if ((de = (int)(d.i[1] >> 20)) != 0)
        z |= (__uint32_t)0x00100000;
    if (d.i[0]) {
        y = d.i[0];
        k = func_001B8790(&y);
        if (k) {
            x[0] = y | (z << (32 - k));
            z >>= k;
        } else
            x[0] = y;
        i = (b->_wds = (x[1] = z) ? (2) : (1));
    } else {
        k = func_001B8790(&z);
        x[0] = z;
        i = (b->_wds = 1);
        k += 32;
    }
    if (de) {
        *e = ((de - 1023) - (53 - 1)) + k;
        *bits = 53 - k;
    } else {
        *e = (((de - 1023) - (53 - 1)) + 1) + k;
        *bits = (32 * i) - func_001B8710(x[i - 1]);
    }
    return b;
}
