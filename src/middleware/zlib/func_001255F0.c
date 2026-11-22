/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, infblock.c (inflate_blocks_new).
 * See LICENSES/zlib-1.1.4.txt. */
/* infblock.c -- interpret and process block types to last block
 * Copyright (C) 1995-2002 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

typedef uLong uLongf;
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
struct internal_state {
    int dummy;
};
struct inflate_codes_state {
    int dummy;
};

static inline void inflate_blocks_reset(inflate_blocks_statef *s, z_streamp z, uLongf *c) {
    if (c != 0)
        *c = s->check;
    if ((s->mode == BTREE) || (s->mode == DTREE))
        (*z->zfree)(z->opaque, (voidpf)s->sub.trees.blens);
    if (s->mode == CODES)
        func_00121800(s->sub.decode.codes, z);
    s->mode = TYPE;
    s->bitk = 0;
    s->bitb = 0;
    s->read = (s->write = s->window);
    if (s->checkfn != 0)
        z->adler = (s->check = (*s->checkfn)(0L, (const Bytef *)0, 0));
    ;
}
inflate_blocks_statef *func_001255F0(z_streamp z, check_func c, uInt w) {
    inflate_blocks_statef *s;
    if ((s = (inflate_blocks_statef *)(*z->zalloc)(z->opaque, 1,
                                                   sizeof(struct inflate_blocks_state))) == 0)
        return s;
    if ((s->hufts = (inflate_huft *)(*z->zalloc)(z->opaque, sizeof(inflate_huft), 1440)) == 0) {
        (*z->zfree)(z->opaque, (voidpf)s);
        return 0;
    }
    if ((s->window = (Bytef *)(*z->zalloc)(z->opaque, 1, w)) == 0) {
        (*z->zfree)(z->opaque, (voidpf)s->hufts);
        (*z->zfree)(z->opaque, (voidpf)s);
        return 0;
    }
    s->end = s->window + w;
    s->checkfn = c;
    s->mode = TYPE;
    ;
    inflate_blocks_reset(s, z, 0);
    return s;
}
