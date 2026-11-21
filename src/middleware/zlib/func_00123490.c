/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, deflate.c (fill_window).
 * See LICENSES/zlib-1.1.4.txt. */
/* deflate.c -- compress data using the deflation algorithm
 * Copyright (C) 1995-2002 Jean-loup Gailly.
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

extern uLong func_00125840(uLong adler, const Bytef *buf, uInt len);
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
struct static_tree_desc_s {
    int dummy;
};

static inline int read_buf(z_streamp strm, Bytef *buf, unsigned size) {
    unsigned len = strm->avail_in;
    if (len > size)
        len = size;
    if (len == 0)
        return 0;
    strm->avail_in -= len;
    if (!strm->state->noheader) {
        strm->adler = func_00125840(strm->adler, strm->next_in, len);
    }
    memcpy(buf, strm->next_in, len);
    strm->next_in += len;
    strm->total_in += len;
    return (int)len;
}
void func_00123490(deflate_state *s) {
    register unsigned n;
    register unsigned m;
    register Posf *p;
    unsigned more;
    uInt wsize = s->w_size;
    do {
        more = (unsigned)((s->window_size - ((ulg)s->lookahead)) - ((ulg)s->strstart));
        if (((more == 0) && (s->strstart == 0)) && (s->lookahead == 0)) {
            more = wsize;
        } else if (more == ((unsigned)(-1))) {
            more--;
        } else if (s->strstart >= (wsize + (s->w_size - ((258 + 3) + 1)))) {
            memcpy(s->window, s->window + wsize, (unsigned)wsize);
            s->match_start -= wsize;
            s->strstart -= wsize;
            s->block_start -= (long)wsize;
            n = s->hash_size;
            p = &s->head[n];
            do {
                m = *(--p);
                *p = (Pos)((m >= wsize) ? (m - wsize) : (0));
            } while (--n);
            n = wsize;
            p = &s->prev[n];
            do {
                m = *(--p);
                *p = (Pos)((m >= wsize) ? (m - wsize) : (0));
            } while (--n);
            more += wsize;
        }
        if (s->strm->avail_in == 0)
            return;
        ;
        n = read_buf(s->strm, (s->window + s->strstart) + s->lookahead, more);
        s->lookahead += n;
        if (s->lookahead >= 3) {
            s->ins_h = s->window[s->strstart];
            s->ins_h = ((s->ins_h << s->hash_shift) ^ s->window[s->strstart + 1]) & s->hash_mask;
        }
    } while ((s->lookahead < ((258 + 3) + 1)) && (s->strm->avail_in != 0));
}
