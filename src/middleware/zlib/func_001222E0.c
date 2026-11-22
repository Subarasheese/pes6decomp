/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, deflate.c (deflate_slow).
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
extern const uch D_003C6500[];
extern const uch D_003C6300[];
typedef enum { need_more, block_done, finish_started, finish_done } block_state;
struct static_tree_desc_s {
    int dummy;
};
extern uInt func_00123750(deflate_state *s, IPos cur_match);
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
block_state func_001222E0(deflate_state *s, int flush) {
    IPos hash_head = 0;
    int bflush;
    for (;;) {
        if (s->lookahead < ((258 + 3) + 1)) {
            func_00123490(s);
            if ((s->lookahead < ((258 + 3) + 1)) && (flush == 0)) {
                return need_more;
            }
            if (s->lookahead == 0)
                break;
        }
        if (s->lookahead >= 3) {
            s->ins_h =
                ((s->ins_h << s->hash_shift) ^ s->window[s->strstart + (3 - 1)]) & s->hash_mask,
            s->prev[s->strstart & s->w_mask] = (hash_head = s->head[s->ins_h]),
            s->head[s->ins_h] = (Pos)s->strstart;
        }
        s->prev_length = s->match_length, s->prev_match = s->match_start;
        s->match_length = 3 - 1;
        if (((hash_head != 0) && (s->prev_length < s->max_lazy_match)) &&
            ((s->strstart - hash_head) <= (s->w_size - ((258 + 3) + 1)))) {
            if (s->strategy != 2) {
                s->match_length = func_00123750(s, hash_head);
            }
            if ((s->match_length <= 5) &&
                ((s->strategy == 1) ||
                 ((s->match_length == 3) && ((s->strstart - s->match_start) > 4096)))) {
                s->match_length = 3 - 1;
            }
        }
        if ((s->prev_length >= 3) && (s->match_length <= s->prev_length)) {
            uInt max_insert = (s->strstart + s->lookahead) - 3;
            ;
            {
                uch len = s->prev_length - 3;
                ush dist = (s->strstart - 1) - s->prev_match;
                s->d_buf[s->last_lit] = dist;
                s->l_buf[s->last_lit++] = len;
                dist--;
                s->dyn_ltree[(D_003C6500[len] + 256) + 1].fc.freq++;
                s->dyn_dtree[(dist < 256) ? (D_003C6300[dist]) : (D_003C6300[256 + (dist >> 7)])]
                    .fc.freq++;
                bflush = s->last_lit == (s->lit_bufsize - 1);
            };
            s->lookahead -= s->prev_length - 1;
            s->prev_length -= 2;
            do {
                if ((++s->strstart) <= max_insert) {
                    s->ins_h = ((s->ins_h << s->hash_shift) ^ s->window[s->strstart + (3 - 1)]) &
                               s->hash_mask,
                    s->prev[s->strstart & s->w_mask] = (hash_head = s->head[s->ins_h]),
                    s->head[s->ins_h] = (Pos)s->strstart;
                }
            } while ((--s->prev_length) != 0);
            s->match_available = 0;
            s->match_length = 3 - 1;
            s->strstart++;
            if (bflush) {
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
        } else if (s->match_available) {
            ;
            {
                uch cc = s->window[s->strstart - 1];
                s->d_buf[s->last_lit] = 0;
                s->l_buf[s->last_lit++] = cc;
                s->dyn_ltree[cc].fc.freq++;
                bflush = s->last_lit == (s->lit_bufsize - 1);
            };
            if (bflush) {
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
            }
            s->strstart++;
            s->lookahead--;
            if (s->strm->avail_out == 0)
                return need_more;
        } else {
            s->match_available = 1;
            s->strstart++;
            s->lookahead--;
        }
    }

    ;
    if (s->match_available) {
        ;
        {
            uch cc = s->window[s->strstart - 1];
            s->d_buf[s->last_lit] = 0;
            s->l_buf[s->last_lit++] = cc;
            s->dyn_ltree[cc].fc.freq++;
            bflush = s->last_lit == (s->lit_bufsize - 1);
        };
        s->match_available = 0;
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
