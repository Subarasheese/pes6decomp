/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, infutil.c (inflate_flush).
 * See LICENSES/zlib-1.1.4.txt. */
/* inflate_util.c -- data and routines common to blocks and codes
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
struct internal_state {
    int dummy;
};
struct inflate_codes_state {
    int dummy;
};

int func_00127140(inflate_blocks_statef *s, z_streamp z, int r) {
    uInt n;
    Bytef *p;
    Bytef *q;
    p = z->next_out;
    q = s->read;
    n = (uInt)(((q <= s->write) ? (s->write) : (s->end)) - q);
    if (n > z->avail_out)
        n = z->avail_out;
    if (n && (r == (-5)))
        r = 0;
    z->avail_out -= n;
    z->total_out += n;
    if (s->checkfn != 0)
        z->adler = (s->check = (*s->checkfn)(s->check, q, n));
    memcpy(p, q, n);
    p += n;
    q += n;
    if (q == s->end) {
        q = s->window;
        if (s->write == s->end)
            s->write = s->window;
        n = (uInt)(s->write - q);
        if (n > z->avail_out)
            n = z->avail_out;
        if (n && (r == (-5)))
            r = 0;
        z->avail_out -= n;
        z->total_out += n;
        if (s->checkfn != 0)
            z->adler = (s->check = (*s->checkfn)(s->check, q, n));
        memcpy(p, q, n);
        p += n;
        q += n;
    }
    z->next_out = p;
    s->read = q;
    return r;
}
