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
extern _Bigint *func_001B8400(Reent *, int);

_Bigint *func_001B8888(Reent *ptr, _Bigint *a, _Bigint *b) {
    _Bigint *c;
    int k;
    int wa;
    int wb;
    int wc;
    __ULong carry;
    __ULong y;
    __ULong z;
    __ULong *x;
    __ULong *xa;
    __ULong *xae;
    __ULong *xb;
    __ULong *xbe;
    __ULong *xc;
    __ULong *xc0;
    __ULong z2;
    if (a->_wds < b->_wds) {
        c = a;
        a = b;
        b = c;
    }
    k = a->_k;
    wa = a->_wds;
    wb = b->_wds;
    wc = wa + wb;
    if (wc > a->_maxwds)
        k++;
    c = func_001B8400(ptr, k);
    for (x = c->_x, xa = x + wc; x < xa; x++)
        *x = 0;

    xa = a->_x;
    xae = xa + wa;
    xb = b->_x;
    xbe = xb + wb;
    xc0 = c->_x;
    for (; xb < xbe; xb++, xc0++) {
        if ((y = (*xb) & 0xffff) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            do {
                z = ((((*x) & 0xffff) * y) + ((*xc) & 0xffff)) + carry;
                carry = z >> 16;
                z2 = ((((*(x++)) >> 16) * y) + ((*xc) >> 16)) + carry;
                carry = z2 >> 16;
                ((unsigned short *)xc)[1] = (unsigned short)z2,
                                 ((unsigned short *)xc)[0] = (unsigned short)z, xc++;
            } while (x < xae);
            *xc = carry;
        }
        if ((y = (*xb) >> 16) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            z2 = *xc;
            do {
                z = ((((*x) & 0xffff) * y) + ((*xc) >> 16)) + carry;
                carry = z >> 16;
                ((unsigned short *)xc)[1] = (unsigned short)z,
                                 ((unsigned short *)xc)[0] = (unsigned short)z2, xc++;
                z2 = ((((*(x++)) >> 16) * y) + ((*xc) & 0xffff)) + carry;
                carry = z2 >> 16;
            } while (x < xae);
            *xc = z2;
        }
    }

    for (xc0 = c->_x, xc = xc0 + wc; (wc > 0) && (!(*(--xc))); --wc)
        ;

    c->_wds = wc;
    return c;
}
