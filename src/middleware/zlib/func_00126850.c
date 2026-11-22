/* compiler: mwcc-3.0.1b151-merged-sections */
/* Adapted from zlib 1.1.4, inftrees.c (inflate_trees_dynamic). See THIRD_PARTY.md. */
/* inftrees.c -- generate Huffman trees for efficient decoding
 * Copyright (C) 1995-2002 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
typedef unsigned char Byte;
typedef unsigned int uInt;
typedef unsigned long uLong;
typedef Byte Bytef;
typedef uInt uIntf;
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

static const uInt cplens[31] = {3,  4,   5,   6,   7,   8,   9,   10, 11, 13, 15,
                                17, 19,  23,  27,  31,  35,  43,  51, 59, 67, 83,
                                99, 115, 131, 163, 195, 227, 258, 0,  0};
static const uInt cplext[31] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2,   2,  2,
                                3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0, 112, 112};
static const uInt cpdist[30] = {1,    2,    3,    4,    5,    7,    9,    13,    17,    25,
                                33,   49,   65,   97,   129,  193,  257,  385,   513,   769,
                                1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577};
static const uInt cpdext[30] = {0, 0, 0, 0, 1, 1, 2, 2,  3,  3,  4,  4,  5,  5,  6,
                                6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13};
static const char incompleteLiterals[] = "incomplete literal/length tree";
static const char emptyDistances[] = "empty distance tree with lengths";
static const char oversubscribedLiterals[] = "oversubscribed literal/length tree";
static const char oversubscribedDistances[] = "oversubscribed distance tree";
static const char incompleteDistances[] = "incomplete distance tree";

extern int func_00126BA0(uIntf *b, uInt n, uInt s, const uIntf *d, const uIntf *e, inflate_huft **t,
                         uIntf *m, inflate_huft *hp, uInt *hn, uIntf *v);

enum { Z_OK = 0, Z_DATA_ERROR = -3, Z_MEM_ERROR = -4, Z_BUF_ERROR = -5 };

int func_00126850(uInt nl, uInt nd, uIntf *c, uIntf *bl, uIntf *bd, inflate_huft **tl,
                  inflate_huft **td, inflate_huft *hp, z_streamp z) {
    int r;
    uInt hn = 0;
    uIntf *v;
    if ((v = (uIntf *)(*z->zalloc)(z->opaque, 288, sizeof(uInt))) == 0)
        return Z_MEM_ERROR;
    r = func_00126BA0(c, nl, 257, cplens, cplext, tl, bl, hp, &hn, v);
    if ((r != Z_OK) || ((*bl) == 0)) {
        if (r == Z_DATA_ERROR)
            z->msg = (char *)oversubscribedLiterals;
        else if (r != Z_MEM_ERROR) {
            z->msg = (char *)incompleteLiterals;
            r = Z_DATA_ERROR;
        }
        (*z->zfree)(z->opaque, (voidpf)v);
        return r;
    }
    r = func_00126BA0(c + nl, nd, 0, cpdist, cpdext, td, bd, hp, &hn, v);
    if ((r != Z_OK) || (((*bd) == 0) && (nl > 257))) {
        if (r == Z_DATA_ERROR)
            z->msg = (char *)oversubscribedDistances;
        else if (r == Z_BUF_ERROR) {
            z->msg = (char *)incompleteDistances;
            r = Z_DATA_ERROR;
        } else if (r != Z_MEM_ERROR) {
            z->msg = (char *)emptyDistances;
            r = Z_DATA_ERROR;
        }
        (*z->zfree)(z->opaque, (voidpf)v);
        return r;
    }
    (*z->zfree)(z->opaque, (voidpf)v);
    return Z_OK;
}
