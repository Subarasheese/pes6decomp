/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, inftrees.c (huft_build).
 * See LICENSES/zlib-1.1.4.txt. */
/* inftrees.c -- generate Huffman trees for efficient decoding
 * Copyright (C) 1995-2002 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

struct inflate_huft_s {
    union {
        struct {
            Byte Exop;
            Byte Bits;
        } what;
        uInt pad;
    } word;
    uInt base;
};

int func_00126BA0(uIntf *b, uInt n, uInt s, const uIntf *d, const uIntf *e, inflate_huft **t,
                  uIntf *m, inflate_huft *hp, uInt *hn, uIntf *v) {
    uInt a;
    uInt c[15 + 1];
    uInt f;
    int g;
    int h;
    register uInt i;
    register uInt j;
    register int k;
    int l;
    uInt mask;
    register uIntf *p;
    inflate_huft *q;
    struct inflate_huft_s r;
    inflate_huft *u[15];
    register int w;
    uInt x[15 + 1];
    uIntf *xp;
    int y;
    uInt z;
    p = c;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    *(p++) = 0;
    p = b;
    i = n;
    do {
        c[*(p++)]++;
    } while (--i);
    if (c[0] == n) {
        *t = (inflate_huft *)0;
        *m = 0;
        return 0;
    }
    l = *m;
    for (j = 1; j <= 15; j++)
        if (c[j])
            break;

    k = j;
    if (((uInt)l) < j)
        l = j;
    for (i = 15; i; i--)
        if (c[i])
            break;

    g = i;
    if (((uInt)l) > i)
        l = i;
    *m = l;
    for (y = 1 << j; j < i; j++, y <<= 1)
        if ((y -= c[j]) < 0)
            return -3;

    if ((y -= c[i]) < 0)
        return -3;
    c[i] += y;
    x[1] = (j = 0);
    p = c + 1;
    xp = x + 2;
    while (--i) {
        *(xp++) = (j += *(p++));
    }

    p = b;
    i = 0;
    do {
        if ((j = *(p++)) != 0)
            v[x[j]++] = i;
    } while ((++i) < n);
    n = x[g];
    x[0] = (i = 0);
    p = v;
    h = -1;
    w = -l;
    u[0] = (inflate_huft *)0;
    q = (inflate_huft *)0;
    z = 0;
    for (; k <= g; k++) {
        a = c[k];
        while (a--) {
            while (k > (w + l)) {
                h++;
                w += l;
                z = g - w;
                z = (z > ((uInt)l)) ? (l) : (z);
                if ((f = 1 << (j = k - w)) > (a + 1)) {
                    f -= a + 1;
                    xp = c + k;
                    if (j < z)
                        while ((++j) < z) {
                            if ((f <<= 1) <= (*(++xp)))
                                break;
                            f -= *xp;
                        }
                }
                z = 1 << j;
                if (((*hn) + z) > 1440)
                    return -3;
                u[h] = (q = hp + (*hn));
                *hn += z;
                if (h) {
                    x[h] = i;
                    r.word.what.Bits = (Byte)l;
                    r.word.what.Exop = (Byte)j;
                    j = i >> (w - l);
                    r.base = (uInt)((q - u[h - 1]) - j);
                    u[h - 1][j] = r;
                } else
                    *t = q;
            }

            r.word.what.Bits = (Byte)(k - w);
            if (p >= (v + n))
                r.word.what.Exop = 128 + 64;
            else if ((*p) < s) {
                r.word.what.Exop = (Byte)(((*p) < 256) ? (0) : (32 + 64));
                r.base = *(p++);
            } else {
                r.word.what.Exop = (Byte)((e[(*p) - s] + 16) + 64);
                r.base = d[(*(p++)) - s];
            }
            f = 1 << (k - w);
            for (j = i >> w; j < z; j += f)
                q[j] = r;

            for (j = 1 << (k - 1); i & j; j >>= 1)
                i ^= j;

            i ^= j;
            mask = (1 << w) - 1;
            while ((i & mask) != x[h]) {
                h--;
                w -= l;
                mask = (1 << w) - 1;
            }
        }
    }

    return ((y != 0) && (g != 1)) ? (-5) : (0);
}
