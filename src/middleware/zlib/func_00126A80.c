/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, inftrees.c (inflate_trees_bits).
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
struct internal_state {
    int dummy;
};
extern int func_00126BA0(uIntf *b, uInt n, uInt s, const uIntf *d, const uIntf *e, inflate_huft **t,
                         uIntf *m, inflate_huft *hp, uInt *hn, uIntf *v);
/* "oversubscribed dynamic bit lengths tree" */ extern char D_003C5C30[40];
/* "incomplete dynamic bit lengths tree" */ extern char D_003C5C60[36];

int func_00126A80(uIntf *c, uIntf *bb, inflate_huft **tb, inflate_huft *hp, z_streamp z) {
    int r;
    uInt hn = 0;
    uIntf *v;
    if ((v = (uIntf *)(*z->zalloc)(z->opaque, 19, sizeof(uInt))) == 0)
        return -4;
    r = func_00126BA0(c, 19, 19, (uIntf *)0, (uIntf *)0, tb, bb, hp, &hn, v);
    if (r == (-3))
        z->msg = (char *)D_003C5C30;
    else if ((r == (-5)) || ((*bb) == 0)) {
        z->msg = (char *)D_003C5C60;
        r = -3;
    }
    (*z->zfree)(z->opaque, (voidpf)v);
    return r;
}
