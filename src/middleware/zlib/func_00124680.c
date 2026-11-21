/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, infblock.c (inflate_blocks).
 * See LICENSES/zlib-1.1.4.txt. */
/* infblock.c -- interpret and process block types to last block
 * Copyright (C) 1995-2002 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

typedef unsigned int size_t;
extern void *memcpy(void *, const void *, size_t);
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
extern int func_00126A80(uIntf *, uIntf *, inflate_huft **, inflate_huft *, z_streamp);
extern int func_00126850(uInt, uInt, uIntf *, uIntf *, uIntf *, inflate_huft **, inflate_huft **,
                         inflate_huft *, z_streamp);
extern int func_00126820(uIntf *, uIntf *, inflate_huft **, inflate_huft **, z_streamp);
extern inflate_codes_statef *func_00122260(uInt, uInt, inflate_huft *, inflate_huft *, z_streamp);
extern int func_00121820(inflate_blocks_statef *, z_streamp, int);
extern void func_00121800(inflate_codes_statef *, z_streamp);
typedef enum { TYPE, LENS, STORED, TABLE, BTREE, DTREE, CODES, DRY, DONE, BAD } inflate_block_mode;
struct inflate_blocks_state {
    inflate_block_mode mode;
    union {
        uInt left;
        struct {
            uInt table;
            uInt index;
            uIntf *blens;
            uInt bb;
            inflate_huft *tb;
        } trees;
        struct {
            inflate_codes_statef *codes;
        } decode;
    } sub;
    uInt last;
    uInt bitk;
    uLong bitb;
    inflate_huft *hufts;
    Bytef *window;
    Bytef *end;
    Bytef *read;
    Bytef *write;
    check_func checkfn;
    uLong check;
};
extern uInt D_00375A50[17];
extern int func_00127140(inflate_blocks_statef *, z_streamp, int);
struct internal_state {
    int dummy;
};
struct inflate_codes_state {
    int dummy;
};
extern const uInt D_003C5750[];
/* "invalid block type" */ extern char D_003C57A0[19];
/* "invalid stored block lengths" */ extern char D_003C57C0[29];
/* "too many length or distance symbols" */ extern char D_003C57E0[36];
/* "invalid bit length repeat" */ extern char D_003C5810[26];

int func_00124680(inflate_blocks_statef *s, z_streamp z, int r) {
    uInt t;
    uLong b;
    uInt k;
    Bytef *p;
    uInt n;
    Bytef *q;
    uInt m;
    {
        {
            p = z->next_in;
            n = z->avail_in;
            b = s->bitb;
            k = s->bitk;
        }
        {
            q = s->write;
            m = (uInt)((uInt)((q < s->read) ? ((s->read - q) - 1) : (s->end - q)));
        }
    }
    while (1)
        switch (s->mode) {
        case TYPE: {
            while (k < 3) {
                {
                    if (n)
                        r = 0;
                    else {
                        {
                            {
                                s->bitb = b;
                                s->bitk = k;
                            }
                            {
                                z->avail_in = n;
                                z->total_in += p - z->next_in;
                                z->next_in = p;
                            }
                            {
                                s->write = q;
                            }
                        }
                        return func_00127140(s, z, r);
                    }
                };
                b |= ((uLong)((n--, *(p++)))) << k;
                k += 8;
            }
        }
            t = ((uInt)b) & 7;
            s->last = t & 1;
            switch (t >> 1) {
            case 0:;
                {
                    b >>= 3;
                    k -= 3;
                }
                t = k & 7;
                {
                    b >>= t;
                    k -= t;
                }
                s->mode = LENS;
                break;

            case 1:;
                {
                    uInt bl;
                    uInt bd;
                    inflate_huft *tl;
                    inflate_huft *td;
                    func_00126820(&bl, &bd, &tl, &td, z);
                    s->sub.decode.codes = func_00122260(bl, bd, tl, td, z);
                    if (s->sub.decode.codes == 0) {
                        r = -4;
                        {
                            {
                                {
                                    s->bitb = b;
                                    s->bitk = k;
                                }
                                {
                                    z->avail_in = n;
                                    z->total_in += p - z->next_in;
                                    z->next_in = p;
                                }
                                {
                                    s->write = q;
                                }
                            }
                            return func_00127140(s, z, r);
                        }
                    }
                }
                {
                    b >>= 3;
                    k -= 3;
                }
                s->mode = CODES;
                break;

            case 2:;
                {
                    b >>= 3;
                    k -= 3;
                }
                s->mode = TABLE;
                break;

            case 3: {
                b >>= 3;
                k -= 3;
            }
                s->mode = BAD;
                z->msg = (char *)D_003C57A0;
                r = -3;
                {
                    {
                        {
                            s->bitb = b;
                            s->bitk = k;
                        }
                        {
                            z->avail_in = n;
                            z->total_in += p - z->next_in;
                            z->next_in = p;
                        }
                        {
                            s->write = q;
                        }
                    }
                    return func_00127140(s, z, r);
                }
            }

            break;

        case LENS: {
            while (k < 32) {
                {
                    if (n)
                        r = 0;
                    else {
                        {
                            {
                                s->bitb = b;
                                s->bitk = k;
                            }
                            {
                                z->avail_in = n;
                                z->total_in += p - z->next_in;
                                z->next_in = p;
                            }
                            {
                                s->write = q;
                            }
                        }
                        return func_00127140(s, z, r);
                    }
                };
                b |= ((uLong)((n--, *(p++)))) << k;
                k += 8;
            }
        }
            if ((((~b) >> 16) & 0xffff) != (b & 0xffff)) {
                s->mode = BAD;
                z->msg = (char *)D_003C57C0;
                r = -3;
                {
                    {
                        {
                            s->bitb = b;
                            s->bitk = k;
                        }
                        {
                            z->avail_in = n;
                            z->total_in += p - z->next_in;
                            z->next_in = p;
                        }
                        {
                            s->write = q;
                        }
                    }
                    return func_00127140(s, z, r);
                }
            }
            s->sub.left = ((uInt)b) & 0xffff;
            b = (k = 0);
            ;
            s->mode = (s->sub.left) ? (STORED) : ((s->last) ? (DRY) : (TYPE));
            break;

        case STORED:
            if (n == 0) {
                {
                    {
                        s->bitb = b;
                        s->bitk = k;
                    }
                    {
                        z->avail_in = n;
                        z->total_in += p - z->next_in;
                        z->next_in = p;
                    }
                    {
                        s->write = q;
                    }
                }
                return func_00127140(s, z, r);
            }
            {
                if (m == 0) {
                    {
                        if ((q == s->end) && (s->read != s->window)) {
                            q = s->window;
                            m = (uInt)((uInt)((q < s->read) ? ((s->read - q) - 1) : (s->end - q)));
                        }
                    }
                    if (m == 0) {
                        {
                            {
                                s->write = q;
                            }
                            r = func_00127140(s, z, r);
                            {
                                q = s->write;
                                m = (uInt)((uInt)((q < s->read) ? ((s->read - q) - 1)
                                                                : (s->end - q)));
                            }
                        }
                        {
                            if ((q == s->end) && (s->read != s->window)) {
                                q = s->window;
                                m = (uInt)((uInt)((q < s->read) ? ((s->read - q) - 1)
                                                                : (s->end - q)));
                            }
                        }
                        if (m == 0) {
                            {
                                {
                                    s->bitb = b;
                                    s->bitk = k;
                                }
                                {
                                    z->avail_in = n;
                                    z->total_in += p - z->next_in;
                                    z->next_in = p;
                                }
                                {
                                    s->write = q;
                                }
                            }
                            return func_00127140(s, z, r);
                        }
                    }
                }
                r = 0;
            }
            t = s->sub.left;
            if (t > n)
                t = n;
            if (t > m)
                t = m;
            memcpy(q, p, t);
            p += t;
            n -= t;
            q += t;
            m -= t;
            if ((s->sub.left -= t) != 0)
                break;
            ;
            s->mode = (s->last) ? (DRY) : (TYPE);
            break;

        case TABLE: {
            while (k < 14) {
                {
                    if (n)
                        r = 0;
                    else {
                        {
                            {
                                s->bitb = b;
                                s->bitk = k;
                            }
                            {
                                z->avail_in = n;
                                z->total_in += p - z->next_in;
                                z->next_in = p;
                            }
                            {
                                s->write = q;
                            }
                        }
                        return func_00127140(s, z, r);
                    }
                };
                b |= ((uLong)((n--, *(p++)))) << k;
                k += 8;
            }
        }
            s->sub.trees.table = (t = ((uInt)b) & 0x3fff);
            if (((t & 0x1f) > 29) || (((t >> 5) & 0x1f) > 29)) {
                s->mode = BAD;
                z->msg = (char *)D_003C57E0;
                r = -3;
                {
                    {
                        {
                            s->bitb = b;
                            s->bitk = k;
                        }
                        {
                            z->avail_in = n;
                            z->total_in += p - z->next_in;
                            z->next_in = p;
                        }
                        {
                            s->write = q;
                        }
                    }
                    return func_00127140(s, z, r);
                }
            }
            t = (258 + (t & 0x1f)) + ((t >> 5) & 0x1f);
            if ((s->sub.trees.blens = (uIntf *)(*z->zalloc)(z->opaque, t, sizeof(uInt))) == 0) {
                r = -4;
                {
                    {
                        {
                            s->bitb = b;
                            s->bitk = k;
                        }
                        {
                            z->avail_in = n;
                            z->total_in += p - z->next_in;
                            z->next_in = p;
                        }
                        {
                            s->write = q;
                        }
                    }
                    return func_00127140(s, z, r);
                }
            }
            {
                b >>= 14;
                k -= 14;
            }
            s->sub.trees.index = 0;
            ;
            s->mode = BTREE;

        case BTREE:
            while (s->sub.trees.index < (4 + (s->sub.trees.table >> 10))) {
                {
                    while (k < 3) {
                        {
                            if (n)
                                r = 0;
                            else {
                                {
                                    {
                                        s->bitb = b;
                                        s->bitk = k;
                                    }
                                    {
                                        z->avail_in = n;
                                        z->total_in += p - z->next_in;
                                        z->next_in = p;
                                    }
                                    {
                                        s->write = q;
                                    }
                                }
                                return func_00127140(s, z, r);
                            }
                        };
                        b |= ((uLong)((n--, *(p++)))) << k;
                        k += 8;
                    }
                }
                s->sub.trees.blens[D_003C5750[s->sub.trees.index++]] = ((uInt)b) & 7;
                {
                    b >>= 3;
                    k -= 3;
                }
            }

            while (s->sub.trees.index < 19)
                s->sub.trees.blens[D_003C5750[s->sub.trees.index++]] = 0;

            s->sub.trees.bb = 7;
            t = func_00126A80(s->sub.trees.blens, &s->sub.trees.bb, &s->sub.trees.tb, s->hufts, z);
            if (t != 0) {
                r = t;
                if (r == (-3)) {
                    (*z->zfree)(z->opaque, (voidpf)s->sub.trees.blens);
                    s->mode = BAD;
                }
                {
                    {
                        {
                            s->bitb = b;
                            s->bitk = k;
                        }
                        {
                            z->avail_in = n;
                            z->total_in += p - z->next_in;
                            z->next_in = p;
                        }
                        {
                            s->write = q;
                        }
                    }
                    return func_00127140(s, z, r);
                }
            }
            s->sub.trees.index = 0;
            ;
            s->mode = DTREE;

        case DTREE:
            while (t = s->sub.trees.table,
                   s->sub.trees.index < ((258 + (t & 0x1f)) + ((t >> 5) & 0x1f))) {
                inflate_huft *h;
                uInt i;
                uInt j;
                uInt c;
                t = s->sub.trees.bb;
                {
                    while (k < t) {
                        {
                            if (n)
                                r = 0;
                            else {
                                {
                                    {
                                        s->bitb = b;
                                        s->bitk = k;
                                    }
                                    {
                                        z->avail_in = n;
                                        z->total_in += p - z->next_in;
                                        z->next_in = p;
                                    }
                                    {
                                        s->write = q;
                                    }
                                }
                                return func_00127140(s, z, r);
                            }
                        };
                        b |= ((uLong)((n--, *(p++)))) << k;
                        k += 8;
                    }
                }
                h = s->sub.trees.tb + (((uInt)b) & D_00375A50[t]);
                t = h->word.what.Bits;
                c = h->base;
                if (c < 16) {
                    {
                        b >>= t;
                        k -= t;
                    }
                    s->sub.trees.blens[s->sub.trees.index++] = c;
                } else {
                    i = (c == 18) ? (7) : (c - 14);
                    j = (c == 18) ? (11) : (3);
                    {
                        while (k < (t + i)) {
                            {
                                if (n)
                                    r = 0;
                                else {
                                    {
                                        {
                                            s->bitb = b;
                                            s->bitk = k;
                                        }
                                        {
                                            z->avail_in = n;
                                            z->total_in += p - z->next_in;
                                            z->next_in = p;
                                        }
                                        {
                                            s->write = q;
                                        }
                                    }
                                    return func_00127140(s, z, r);
                                }
                            };
                            b |= ((uLong)((n--, *(p++)))) << k;
                            k += 8;
                        }
                    }
                    {
                        b >>= t;
                        k -= t;
                    }
                    j += ((uInt)b) & D_00375A50[i];
                    {
                        b >>= i;
                        k -= i;
                    }
                    i = s->sub.trees.index;
                    t = s->sub.trees.table;
                    if (((i + j) > ((258 + (t & 0x1f)) + ((t >> 5) & 0x1f))) ||
                        ((c == 16) && (i < 1))) {
                        (*z->zfree)(z->opaque, (voidpf)s->sub.trees.blens);
                        s->mode = BAD;
                        z->msg = (char *)D_003C5810;
                        r = -3;
                        {
                            {
                                {
                                    s->bitb = b;
                                    s->bitk = k;
                                }
                                {
                                    z->avail_in = n;
                                    z->total_in += p - z->next_in;
                                    z->next_in = p;
                                }
                                {
                                    s->write = q;
                                }
                            }
                            return func_00127140(s, z, r);
                        }
                    }
                    c = (c == 16) ? (s->sub.trees.blens[i - 1]) : (0);
                    do {
                        s->sub.trees.blens[i++] = c;
                    } while (--j);
                    s->sub.trees.index = i;
                }
            }

            s->sub.trees.tb = 0;
            {
                uInt bl;
                uInt bd;
                inflate_huft *tl;
                inflate_huft *td;
                inflate_codes_statef *c;
                bl = 9;
                bd = 6;
                t = s->sub.trees.table;
                t = func_00126850(257 + (t & 0x1f), 1 + ((t >> 5) & 0x1f), s->sub.trees.blens, &bl,
                                  &bd, &tl, &td, s->hufts, z);
                if (t != 0) {
                    if (t == ((uInt)(-3))) {
                        (*z->zfree)(z->opaque, (voidpf)s->sub.trees.blens);
                        s->mode = BAD;
                    }
                    r = t;
                    {
                        {
                            {
                                s->bitb = b;
                                s->bitk = k;
                            }
                            {
                                z->avail_in = n;
                                z->total_in += p - z->next_in;
                                z->next_in = p;
                            }
                            {
                                s->write = q;
                            }
                        }
                        return func_00127140(s, z, r);
                    }
                };
                if ((c = func_00122260(bl, bd, tl, td, z)) == 0) {
                    r = -4;
                    {
                        {
                            {
                                s->bitb = b;
                                s->bitk = k;
                            }
                            {
                                z->avail_in = n;
                                z->total_in += p - z->next_in;
                                z->next_in = p;
                            }
                            {
                                s->write = q;
                            }
                        }
                        return func_00127140(s, z, r);
                    }
                }
                s->sub.decode.codes = c;
            }
            (*z->zfree)(z->opaque, (voidpf)s->sub.trees.blens);
            s->mode = CODES;

        case CODES: {
            {
                s->bitb = b;
                s->bitk = k;
            }
            {
                z->avail_in = n;
                z->total_in += p - z->next_in;
                z->next_in = p;
            }
            {
                s->write = q;
            }
        }
            if ((r = func_00121820(s, z, r)) != 1)
                return func_00127140(s, z, r);
            r = 0;
            func_00121800(s->sub.decode.codes, z);
            {{p = z->next_in;
            n = z->avail_in;
            b = s->bitb;
            k = s->bitk;
        }
    {
        q = s->write;
        m = (uInt)((uInt)((q < s->read) ? ((s->read - q) - 1) : (s->end - q)));
    }
};
if (!s->last) {
    s->mode = TYPE;
    break;
}
s->mode = DRY;

case DRY: {
    {
        s->write = q;
    }
    r = func_00127140(s, z, r);
    {
        q = s->write;
        m = (uInt)((uInt)((q < s->read) ? ((s->read - q) - 1) : (s->end - q)));
    }
}
if (s->read != s->write) {
    {
        {
            s->bitb = b;
            s->bitk = k;
        }
        {
            z->avail_in = n;
            z->total_in += p - z->next_in;
            z->next_in = p;
        }
        {
            s->write = q;
        }
    }
    return func_00127140(s, z, r);
}
s->mode = DONE;

case DONE:
r = 1;
{
    {
        {
            s->bitb = b;
            s->bitk = k;
        }
        {
            z->avail_in = n;
            z->total_in += p - z->next_in;
            z->next_in = p;
        }
        {
            s->write = q;
        }
    }
    return func_00127140(s, z, r);
}

case BAD:
r = -3;
{
    {
        {
            s->bitb = b;
            s->bitk = k;
        }
        {
            z->avail_in = n;
            z->total_in += p - z->next_in;
            z->next_in = p;
        }
        {
            s->write = q;
        }
    }
    return func_00127140(s, z, r);
}

default:
r = -2;
{
    {
        {
            s->bitb = b;
            s->bitk = k;
        }
        {
            z->avail_in = n;
            z->total_in += p - z->next_in;
            z->next_in = p;
        }
        {
            s->write = q;
        }
    }
    return func_00127140(s, z, r);
}
}
}
