/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, deflate.c (longest_match).
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

uInt func_00123750(deflate_state *s, IPos cur_match) {
    unsigned chain_length = s->max_chain_length;
    register Bytef *scan = s->window + s->strstart;
    register Bytef *match;
    register int len;
    int best_len = s->prev_length;
    int nice_match = s->nice_match;
    IPos limit = (s->strstart > ((IPos)(s->w_size - ((258 + 3) + 1))))
                     ? (s->strstart - ((IPos)(s->w_size - ((258 + 3) + 1))))
                     : (0);
    Posf *prev = s->prev;
    uInt wmask = s->w_mask;
    register Bytef *strend = (s->window + s->strstart) + 258;
    register Byte scan_end1 = scan[best_len - 1];
    register Byte scan_end = scan[best_len];
    ;
    if (s->prev_length >= s->good_match) {
        chain_length >>= 2;
    }
    if (((uInt)nice_match) > s->lookahead)
        nice_match = s->lookahead;
    ;
    do {
        ;
        match = s->window + cur_match;
        if ((((match[best_len] != scan_end) || (match[best_len - 1] != scan_end1)) ||
             ((*match) != (*scan))) ||
            ((*(++match)) != scan[1]))
            continue;
        scan += 2, match++;
        ;
        do {
        } while ((((((((((*(++scan)) == (*(++match))) && ((*(++scan)) == (*(++match)))) &&
                       ((*(++scan)) == (*(++match)))) &&
                      ((*(++scan)) == (*(++match)))) &&
                     ((*(++scan)) == (*(++match)))) &&
                    ((*(++scan)) == (*(++match)))) &&
                   ((*(++scan)) == (*(++match)))) &&
                  ((*(++scan)) == (*(++match)))) &&
                 (scan < strend));
        ;
        len = 258 - ((int)(strend - scan));
        scan = strend - 258;
        if (len > best_len) {
            s->match_start = cur_match;
            best_len = len;
            if (len >= nice_match)
                break;
            scan_end1 = scan[best_len - 1];
            scan_end = scan[best_len];
        }
    } while (((cur_match = prev[cur_match & wmask]) > limit) && ((--chain_length) != 0));
    if (((uInt)best_len) <= s->lookahead)
        return (uInt)best_len;
    return s->lookahead;
}
