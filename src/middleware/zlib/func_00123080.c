/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, deflate.c (deflate_stored).
 * See LICENSES/zlib-1.1.4.txt. */
/* deflate.c -- compress data using the deflation algorithm
 * Copyright (C) 1995-2002 Jean-loup Gailly.
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

typedef char charf;
typedef unsigned int size_t;
extern void *memcpy(void *, const void *, size_t);
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
extern void func_00127860(deflate_state *s, charf *buf, ulg stored_len, int eof);
typedef enum { need_more, block_done, finish_started, finish_done } block_state;
struct static_tree_desc_s {
    int dummy;
};
extern void func_00123490(deflate_state *s);

static inline void flush_pending(z_streamp strm) {
    unsigned len = strm->state->pending;
    if (len > strm->avail_out)
        len = strm->avail_out;
    if (len == 0)
        return;
    memcpy(strm->next_out, strm->state->pending_out, len);
    strm->next_out += len;
    strm->state->pending_out += len;
    strm->total_out += len;
    strm->avail_out -= len;
    strm->state->pending -= len;
    if (strm->state->pending == 0) {
        strm->state->pending_out = strm->state->pending_buf;
    }
}
block_state func_00123080(deflate_state *s, int flush) {
    ulg max_block_size = 0xffff;
    ulg max_start;
    if (max_block_size > (s->pending_buf_size - 5)) {
        max_block_size = s->pending_buf_size - 5;
    }
    for (;;) {
        if (s->lookahead <= 1) {
            ;
            func_00123490(s);
            if ((s->lookahead == 0) && (flush == 0))
                return need_more;
            if (s->lookahead == 0)
                break;
        };
        s->strstart += s->lookahead;
        s->lookahead = 0;
        max_start = s->block_start + max_block_size;
        if ((s->strstart == 0) || (((ulg)s->strstart) >= max_start)) {
            s->lookahead = (uInt)(s->strstart - max_start);
            s->strstart = (uInt)max_start;
            {
                {
                    func_00127860(s,
                                  (s->block_start >= 0L)
                                      ? ((charf *)(&s->window[(unsigned)s->block_start]))
                                      : ((charf *)0),
                                  (ulg)(((long)s->strstart) - s->block_start), 0);
                    s->block_start = s->strstart;
                    flush_pending(s->strm);
                    ;
                };
                if (s->strm->avail_out == 0)
                    return (0) ? (finish_started) : (need_more);
            };
        }
        if ((s->strstart - ((uInt)s->block_start)) >= (s->w_size - ((258 + 3) + 1))) {
            {
                {
                    func_00127860(s,
                                  (s->block_start >= 0L)
                                      ? ((charf *)(&s->window[(unsigned)s->block_start]))
                                      : ((charf *)0),
                                  (ulg)(((long)s->strstart) - s->block_start), 0);
                    s->block_start = s->strstart;
                    flush_pending(s->strm);
                    ;
                };
                if (s->strm->avail_out == 0)
                    return (0) ? (finish_started) : (need_more);
            };
        }
    }

    {
        {
            func_00127860(s,
                          (s->block_start >= 0L) ? ((charf *)(&s->window[(unsigned)s->block_start]))
                                                 : ((charf *)0),
                          (ulg)(((long)s->strstart) - s->block_start), flush == 4);
            s->block_start = s->strstart;
            flush_pending(s->strm);
            ;
        };
        if (s->strm->avail_out == 0)
            return (flush == 4) ? (finish_started) : (need_more);
    };
    return (flush == 4) ? (finish_done) : (block_done);
}
