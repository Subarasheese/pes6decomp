/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, infblock.c (inflate_blocks_free).
 * licence: zlib (see THIRD_PARTY.md) */
/* infblock.c -- interpret and process block types to last block
 * Copyright (C) 1995-2002 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
typedef unsigned char Byte;
typedef unsigned int uInt;
typedef unsigned long uLong;
typedef Byte Bytef;
typedef uInt uIntf;
typedef uLong uLongf;
typedef void *voidpf;
typedef voidpf (*alloc_func)(voidpf opaque, uInt items, uInt size);
typedef void (*free_func)(voidpf opaque, voidpf address);
typedef struct z_stream_s {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;
    Bytef *next_out;
    uInt avail_out;
    uLong total_out;
    char *msg;
    struct internal_state *state;
    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;
    int data_type;
    uLong adler;
    uLong reserved;
} z_stream;
typedef z_stream *z_streamp;
typedef uLong (*check_func)(uLong check, const Bytef *buf, uInt len);
typedef struct inflate_blocks_state inflate_blocks_statef;
typedef struct inflate_huft_s inflate_huft;
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
typedef struct inflate_codes_state inflate_codes_statef;
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
int func_00124590(inflate_blocks_statef *s, z_streamp z) {
    inflate_blocks_reset(s, z, 0);
    (*z->zfree)(z->opaque, (voidpf)s->window);
    (*z->zfree)(z->opaque, (voidpf)s->hufts);
    (*z->zfree)(z->opaque, (voidpf)s);
    ;
    return 0;
}
