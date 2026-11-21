/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, inffast.c (inflate_fast).
 * See LICENSES/zlib-1.1.4.txt. */
/* inffast.c -- process literals and length/distance pairs fast
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
struct internal_state {
    int dummy;
};
struct inflate_codes_state {
    int dummy;
};
/* "invalid distance code" */ extern char D_003C5860[22];
/* "invalid literal/length code" */ extern char D_003C5880[28];

int func_001259F0(uInt bl, uInt bd, inflate_huft *tl, inflate_huft *td, inflate_blocks_statef *s,
                  z_streamp z) {
    inflate_huft *t;
    uInt e;
    uLong b;
    uInt k;
    Bytef *p;
    uInt n;
    Bytef *q;
    uInt m;
    uInt ml;
    uInt md;
    uInt c;
    uInt d;
    Bytef *r;
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
    ml = D_00375A50[bl];
    md = D_00375A50[bd];
    do {
        {
            while (k < 20) {
                b |= ((uLong)((n--, *(p++)))) << k;
                k += 8;
            }
        }
        if ((e = (t = tl + (((uInt)b) & ml))->word.what.Exop) == 0) {
            {
                b >>= t->word.what.Bits;
                k -= t->word.what.Bits;
            };
            *(q++) = (Byte)t->base;
            m--;
            continue;
        }
        do {
            {
                b >>= t->word.what.Bits;
                k -= t->word.what.Bits;
            }
            if (e & 16) {
                e &= 15;
                c = t->base + (((uInt)b) & D_00375A50[e]);
                {
                    b >>= e;
                    k -= e;
                };
                {
                    while (k < 15) {
                        b |= ((uLong)((n--, *(p++)))) << k;
                        k += 8;
                    }
                };
                e = (t = td + (((uInt)b) & md))->word.what.Exop;
                do {
                    {
                        b >>= t->word.what.Bits;
                        k -= t->word.what.Bits;
                    }
                    if (e & 16) {
                        e &= 15;
                        {
                            while (k < e) {
                                b |= ((uLong)((n--, *(p++)))) << k;
                                k += 8;
                            }
                        }
                        d = t->base + (((uInt)b) & D_00375A50[e]);
                        {
                            b >>= e;
                            k -= e;
                        };
                        m -= c;
                        r = q - d;
                        if (r < s->window) {
                            do {
                                r += s->end - s->window;
                            } while (r < s->window);
                            e = s->end - r;
                            if (c > e) {
                                c -= e;
                                do {
                                    *(q++) = *(r++);
                                } while (--e);
                                r = s->window;
                                do {
                                    *(q++) = *(r++);
                                } while (--c);
                            } else {
                                *(q++) = *(r++);
                                c--;
                                *(q++) = *(r++);
                                c--;
                                do {
                                    *(q++) = *(r++);
                                } while (--c);
                            }
                        } else {
                            *(q++) = *(r++);
                            c--;
                            *(q++) = *(r++);
                            c--;
                            do {
                                *(q++) = *(r++);
                            } while (--c);
                        }
                        break;
                    } else if ((e & 64) == 0) {
                        t += t->base;
                        e = (t += ((uInt)b) & D_00375A50[e])->word.what.Exop;
                    } else {
                        z->msg = (char *)D_003C5860;
                        {
                            c = z->avail_in - n;
                            c = ((k >> 3) < c) ? (k >> 3) : (c);
                            n += c;
                            p -= c;
                            k -= c << 3;
                        }
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
                        return -3;
                    }
                } while (1);
                break;
            }
            if ((e & 64) == 0) {
                t += t->base;
                if ((e = (t += ((uInt)b) & D_00375A50[e])->word.what.Exop) == 0) {
                    {
                        b >>= t->word.what.Bits;
                        k -= t->word.what.Bits;
                    };
                    *(q++) = (Byte)t->base;
                    m--;
                    break;
                }
            } else if (e & 32) {
                ;
                {
                    c = z->avail_in - n;
                    c = ((k >> 3) < c) ? (k >> 3) : (c);
                    n += c;
                    p -= c;
                    k -= c << 3;
                }
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
                return 1;
            } else {
                z->msg = (char *)D_003C5880;
                {
                    c = z->avail_in - n;
                    c = ((k >> 3) < c) ? (k >> 3) : (c);
                    n += c;
                    p -= c;
                    k -= c << 3;
                }
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
                return -3;
            }
        } while (1);
    } while ((m >= 258) && (n >= 10));
    {
        c = z->avail_in - n;
        c = ((k >> 3) < c) ? (k >> 3) : (c);
        n += c;
        p -= c;
        k -= c << 3;
    }
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
    return 0;
}
