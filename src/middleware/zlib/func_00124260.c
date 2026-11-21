/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, deflate.c (deflateInit2_).
 * See LICENSES/zlib-1.1.4.txt. */
/* deflate.c -- compress data using the deflation algorithm
 * Copyright (C) 1995-2002 Jean-loup Gailly.
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

extern const char *D_00375B00[10];
extern voidpf func_00129810(voidpf opaque, unsigned items, unsigned size);
extern void func_001297E0(voidpf opaque, voidpf ptr);
typedef struct ct_data_s {
    union {
        ush freq;
        ush code;
    } fc;
    union {
        ush dad;
        ush len;
    } dl;
} ct_data;
typedef struct static_tree_desc_s static_tree_desc;
typedef struct tree_desc_s {
    ct_data *dyn_tree;
    int max_code;
    static_tree_desc *stat_desc;
} tree_desc;
typedef ush Pos;
typedef Pos Posf;
typedef unsigned IPos;
typedef struct internal_state {
    z_streamp strm;
    int status;
    Bytef *pending_buf;
    ulg pending_buf_size;
    Bytef *pending_out;
    int pending;
    int noheader;
    Byte data_type;
    Byte method;
    int last_flush;
    uInt w_size;
    uInt w_bits;
    uInt w_mask;
    Bytef *window;
    ulg window_size;
    Posf *prev;
    Posf *head;
    uInt ins_h;
    uInt hash_size;
    uInt hash_bits;
    uInt hash_mask;
    uInt hash_shift;
    long block_start;
    uInt match_length;
    IPos prev_match;
    int match_available;
    uInt strstart;
    uInt match_start;
    uInt lookahead;
    uInt prev_length;
    uInt max_chain_length;
    uInt max_lazy_match;
    int level;
    int strategy;
    uInt good_match;
    int nice_match;
    struct ct_data_s dyn_ltree[(2 * ((256 + 1) + 29)) + 1];
    struct ct_data_s dyn_dtree[(2 * 30) + 1];
    struct ct_data_s bl_tree[(2 * 19) + 1];
    struct tree_desc_s l_desc;
    struct tree_desc_s d_desc;
    struct tree_desc_s bl_desc;
    ush bl_count[15 + 1];
    int heap[(2 * ((256 + 1) + 29)) + 1];
    int heap_len;
    int heap_max;
    uch depth[(2 * ((256 + 1) + 29)) + 1];
    uchf *l_buf;
    uInt lit_bufsize;
    uInt last_lit;
    ushf *d_buf;
    ulg opt_len;
    ulg static_len;
    uInt matches;
    int last_eob_len;
    ush bi_buf;
    int bi_valid;
} deflate_state;
struct static_tree_desc_s {
    int dummy;
};
extern int func_001240D0(z_streamp strm);
extern int func_00123960(z_streamp strm);
/* Points to the original "1.1.4" string. */ extern const char *D_003E7404;

int func_00124260(z_streamp strm, int level, int method, int windowBits, int memLevel, int strategy,
                  const char *version, int stream_size) {
    deflate_state *s;
    int noheader = 0;

    ushf *overlay;
    if (((version == 0) || (version[0] != D_003E7404[0])) || (stream_size != (sizeof(z_stream)))) {
        return -6;
    }
    if (strm == 0)
        return -2;
    strm->msg = 0;
    if (strm->zalloc == 0) {
        strm->zalloc = func_00129810;
        strm->opaque = (voidpf)0;
    }
    if (strm->zfree == 0)
        strm->zfree = func_001297E0;
    if (level == (-1))
        level = 6;
    if (windowBits < 0) {
        noheader = 1;
        windowBits = -windowBits;
    }
    if (((((((((memLevel < 1) || (memLevel > 9)) || (method != 8)) || (windowBits < 9)) ||
            (windowBits > 15)) ||
           (level < 0)) ||
          (level > 9)) ||
         (strategy < 0)) ||
        (strategy > 2)) {
        return -2;
    }
    s = (deflate_state *)(*strm->zalloc)(strm->opaque, 1, sizeof(deflate_state));
    if (s == 0)
        return -4;
    strm->state = (struct internal_state *)s;
    s->strm = strm;
    s->noheader = noheader;
    s->w_bits = windowBits;
    s->w_size = 1 << s->w_bits;
    s->w_mask = s->w_size - 1;
    s->hash_bits = memLevel + 7;
    s->hash_size = 1 << s->hash_bits;
    s->hash_mask = s->hash_size - 1;
    s->hash_shift = ((s->hash_bits + 3) - 1) / 3;
    s->window = (Bytef *)(*strm->zalloc)(strm->opaque, s->w_size, 2 * (sizeof(Byte)));
    s->prev = (Posf *)(*strm->zalloc)(strm->opaque, s->w_size, sizeof(Pos));
    s->head = (Posf *)(*strm->zalloc)(strm->opaque, s->hash_size, sizeof(Pos));
    s->lit_bufsize = 1 << (memLevel + 6);
    overlay = (ushf *)(*strm->zalloc)(strm->opaque, s->lit_bufsize, (sizeof(ush)) + 2);
    s->pending_buf = (uchf *)overlay;
    s->pending_buf_size = ((ulg)s->lit_bufsize) * ((sizeof(ush)) + 2L);
    if ((((s->window == 0) || (s->prev == 0)) || (s->head == 0)) || (s->pending_buf == 0)) {
        strm->msg = (char *)D_00375B00[2 - (-4)];
        func_00123960(strm);
        return -4;
    }
    s->d_buf = overlay + (s->lit_bufsize / (sizeof(ush)));
    s->l_buf = s->pending_buf + ((1 + (sizeof(ush))) * s->lit_bufsize);
    s->level = level;
    s->strategy = strategy;
    s->method = (Byte)method;
    return func_001240D0(strm);
}
