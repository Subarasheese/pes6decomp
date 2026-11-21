/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, inflate.c (inflateEnd).
 * See LICENSES/zlib-1.1.4.txt. */
/* inflate.c -- zlib interface to inflate modules
 * Copyright (C) 1995-2002 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

extern int func_00124590(inflate_blocks_statef *, z_streamp);
struct inflate_blocks_state {
    int dummy;
};
typedef enum {
    METHOD,
    FLAG,
    DICT4,
    DICT3,
    DICT2,
    DICT1,
    DICT0,
    BLOCKS,
    CHECK4,
    CHECK3,
    CHECK2,
    CHECK1,
    DONE,
    BAD
} inflate_mode;
struct internal_state {
    inflate_mode mode;
    union {
        uInt method;
        struct {
            uLong was;
            uLong need;
        } check;
        uInt marker;
    } sub;
    int nowrap;
    uInt wbits;
    inflate_blocks_statef *blocks;
};

int func_001267A0(z_streamp z) {
    if (((z == 0) || (z->state == 0)) || (z->zfree == 0))
        return -2;
    if (z->state->blocks != 0)
        func_00124590(z->state->blocks, z);
    (*z->zfree)(z->opaque, (voidpf)z->state);
    z->state = 0;
    ;
    return 0;
}
