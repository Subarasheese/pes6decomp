/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, deflate.c (deflateEnd).
 * See LICENSES/zlib-1.1.4.txt. */
/* deflate.c -- compress data using the deflation algorithm
 * Copyright (C) 1995-2002 Jean-loup Gailly.
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

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

int func_00123960(z_streamp strm) {
    int status;
    if ((strm == 0) || (strm->state == 0))
        return -2;
    status = strm->state->status;
    if (((status != 42) && (status != 113)) && (status != 666)) {
        return -2;
    }
    {
        if (strm->state->pending_buf)
            (*strm->zfree)(strm->opaque, (voidpf)strm->state->pending_buf);
    };
    {
        if (strm->state->head)
            (*strm->zfree)(strm->opaque, (voidpf)strm->state->head);
    };
    {
        if (strm->state->prev)
            (*strm->zfree)(strm->opaque, (voidpf)strm->state->prev);
    };
    {
        if (strm->state->window)
            (*strm->zfree)(strm->opaque, (voidpf)strm->state->window);
    };
    (*strm->zfree)(strm->opaque, (voidpf)strm->state);
    strm->state = 0;
    return (status == 113) ? (-3) : (0);
}
