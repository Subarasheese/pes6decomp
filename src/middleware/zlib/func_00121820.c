/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, infcodes.c (inflate_codes).
 * See LICENSES/zlib-1.1.4.txt. */
/* infcodes.c -- process literals and length/distance pairs
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
extern int func_001259F0(uInt, uInt, inflate_huft *, inflate_huft *, inflate_blocks_statef *,
                         z_streamp);
typedef enum {
    START,
    LEN,
    LENEXT,
    DIST,
    DISTEXT,
    COPY,
    LIT,
    WASH,
    END,
    BADCODE
} inflate_codes_mode;
struct inflate_codes_state {
    inflate_codes_mode mode;
    uInt len;
    union {
        struct {
            inflate_huft *tree;
            uInt need;
        } code;
        uInt lit;
        struct {
            uInt get;
            uInt dist;
        } copy;
    } sub;
    Byte lbits;
    Byte dbits;
    inflate_huft *ltree;
    inflate_huft *dtree;
};
/* "invalid literal/length code" */ extern char D_003C5660[28];
/* "invalid distance code" */ extern char D_003C5680[22];

int func_00121820(inflate_blocks_statef *s, z_streamp z, int r) {
    uInt j;
    inflate_huft *t;
    uInt e;
    uLong b;
    uInt k;
    Bytef *p;
    uInt n;
    Bytef *q;
    uInt m;
    Bytef *f;
    inflate_codes_statef *c = s->sub.decode.codes;
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
        switch (c->mode) {
        case START:
            if ((m >= 258) && (n >= 10)) {
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
                r = func_001259F0(c->lbits, c->dbits, c->ltree, c->dtree, s, z);
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
                if (r != 0) {
                    c->mode = (r == 1) ? (WASH) : (BADCODE);
                    break;
                }
            }
            c->sub.code.need = c->lbits;
            c->sub.code.tree = c->ltree;
            c->mode = LEN;

        case LEN:
            j = c->sub.code.need;
            {
                while (k < j) {
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
            t = c->sub.code.tree + (((uInt)b) & D_00375A50[j]);
            {
                b >>= t->word.what.Bits;
                k -= t->word.what.Bits;
            }
            e = (uInt)t->word.what.Exop;
            if (e == 0) {
                c->sub.lit = t->base;
                ;
                c->mode = LIT;
                break;
            }
            if (e & 16) {
                c->sub.copy.get = e & 15;
                c->len = t->base;
                c->mode = LENEXT;
                break;
            }
            if ((e & 64) == 0) {
                c->sub.code.need = e;
                c->sub.code.tree = t + t->base;
                break;
            }
            if (e & 32) {
                ;
                c->mode = WASH;
                break;
            }
            c->mode = BADCODE;
            z->msg = (char *)D_003C5660;
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

        case LENEXT:
            j = c->sub.copy.get;
            {
                while (k < j) {
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
            c->len += ((uInt)b) & D_00375A50[j];
            {
                b >>= j;
                k -= j;
            }
            c->sub.code.need = c->dbits;
            c->sub.code.tree = c->dtree;
            ;
            c->mode = DIST;

        case DIST:
            j = c->sub.code.need;
            {
                while (k < j) {
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
            t = c->sub.code.tree + (((uInt)b) & D_00375A50[j]);
            {
                b >>= t->word.what.Bits;
                k -= t->word.what.Bits;
            }
            e = (uInt)t->word.what.Exop;
            if (e & 16) {
                c->sub.copy.get = e & 15;
                c->sub.copy.dist = t->base;
                c->mode = DISTEXT;
                break;
            }
            if ((e & 64) == 0) {
                c->sub.code.need = e;
                c->sub.code.tree = t + t->base;
                break;
            }
            c->mode = BADCODE;
            z->msg = (char *)D_003C5680;
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

        case DISTEXT:
            j = c->sub.copy.get;
            {
                while (k < j) {
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
            c->sub.copy.dist += ((uInt)b) & D_00375A50[j];
            {
                b >>= j;
                k -= j;
            };
            c->mode = COPY;

        case COPY:
            f = q - c->sub.copy.dist;
            while (f < s->window)
                f += s->end - s->window;

            while (c->len) {
                {
                    if (m == 0) {
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
                {
                    *(q++) = (Byte)(*(f++));
                    m--;
                }
                if (f == s->end)
                    f = s->window;
                c->len--;
            }

            c->mode = START;
            break;

        case LIT: {
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
                            m = (uInt)((uInt)((q < s->read) ? ((s->read - q) - 1) : (s->end - q)));
                        }
                    }
                    {
                        if ((q == s->end) && (s->read != s->window)) {
                            q = s->window;
                            m = (uInt)((uInt)((q < s->read) ? ((s->read - q) - 1) : (s->end - q)));
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
            {
                *(q++) = (Byte)c->sub.lit;
                m--;
            }
            c->mode = START;
            break;

        case WASH:
            if (k > 7) {
                k -= 8;
                n++;
                p--;
            }
            {
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
            c->mode = END;

        case END:
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

        case BADCODE:
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
