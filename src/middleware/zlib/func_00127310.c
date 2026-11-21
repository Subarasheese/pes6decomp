/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, trees.c (compress_block).
 * See LICENSES/zlib-1.1.4.txt. */
/* trees.c -- output deflated data using Huffman coding
 * Copyright (C) 1995-2002 Jean-loup Gailly
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
extern const int D_003C5C90[29];
extern const int D_003C5D10[30];
extern const uch D_003C6300[512];
extern const uch D_003C6500[(258 - 3) + 1];
extern const int D_003C6600[29];
extern const int D_003C6680[30];
struct static_tree_desc_s {
    const ct_data *static_tree;
    const intf *extra_bits;
    int extra_base;
    int elems;
    int max_length;
};

void func_00127310(deflate_state *s, ct_data *ltree, ct_data *dtree) {
    unsigned dist;
    int lc;
    unsigned lx = 0;
    unsigned code;
    int extra;
    if (s->last_lit != 0)
        do {
            dist = s->d_buf[lx];
            lc = s->l_buf[lx++];
            if (dist == 0) {
                {
                    int len = ltree[lc].dl.len;
                    if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                        int val = ltree[lc].fc.code;
                        s->bi_buf |= val << s->bi_valid;
                        {
                            {
                                s->pending_buf[s->pending++] = (uch)(s->bi_buf & 0xff);
                            };
                            {
                                s->pending_buf[s->pending++] = (uch)(((ush)s->bi_buf) >> 8);
                            };
                        };
                        s->bi_buf = ((ush)val) >> (((8 * 2) * (sizeof(char))) - s->bi_valid);
                        s->bi_valid += len - ((8 * 2) * (sizeof(char)));
                    } else {
                        s->bi_buf |= ltree[lc].fc.code << s->bi_valid;
                        s->bi_valid += len;
                    }
                };
                ;
            } else {
                code = D_003C6500[lc];
                {
                    int len = ltree[(code + 256) + 1].dl.len;
                    if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                        int val = ltree[(code + 256) + 1].fc.code;
                        s->bi_buf |= val << s->bi_valid;
                        {
                            {
                                s->pending_buf[s->pending++] = (uch)(s->bi_buf & 0xff);
                            };
                            {
                                s->pending_buf[s->pending++] = (uch)(((ush)s->bi_buf) >> 8);
                            };
                        };
                        s->bi_buf = ((ush)val) >> (((8 * 2) * (sizeof(char))) - s->bi_valid);
                        s->bi_valid += len - ((8 * 2) * (sizeof(char)));
                    } else {
                        s->bi_buf |= ltree[(code + 256) + 1].fc.code << s->bi_valid;
                        s->bi_valid += len;
                    }
                };
                extra = D_003C5C90[code];
                if (extra != 0) {
                    lc -= D_003C6600[code];
                    {
                        int len = extra;
                        if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                            int val = lc;
                            s->bi_buf |= val << s->bi_valid;
                            {
                                {
                                    s->pending_buf[s->pending++] = (uch)(s->bi_buf & 0xff);
                                };
                                {
                                    s->pending_buf[s->pending++] = (uch)(((ush)s->bi_buf) >> 8);
                                };
                            };
                            s->bi_buf = ((ush)val) >> (((8 * 2) * (sizeof(char))) - s->bi_valid);
                            s->bi_valid += len - ((8 * 2) * (sizeof(char)));
                        } else {
                            s->bi_buf |= lc << s->bi_valid;
                            s->bi_valid += len;
                        }
                    };
                }
                dist--;
                code = (dist < 256) ? (D_003C6300[dist]) : (D_003C6300[256 + (dist >> 7)]);
                ;
                {
                    int len = dtree[code].dl.len;
                    if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                        int val = dtree[code].fc.code;
                        s->bi_buf |= val << s->bi_valid;
                        {
                            {
                                s->pending_buf[s->pending++] = (uch)(s->bi_buf & 0xff);
                            };
                            {
                                s->pending_buf[s->pending++] = (uch)(((ush)s->bi_buf) >> 8);
                            };
                        };
                        s->bi_buf = ((ush)val) >> (((8 * 2) * (sizeof(char))) - s->bi_valid);
                        s->bi_valid += len - ((8 * 2) * (sizeof(char)));
                    } else {
                        s->bi_buf |= dtree[code].fc.code << s->bi_valid;
                        s->bi_valid += len;
                    }
                };
                extra = D_003C5D10[code];
                if (extra != 0) {
                    dist -= D_003C6680[code];
                    {
                        int len = extra;
                        if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                            int val = dist;
                            s->bi_buf |= val << s->bi_valid;
                            {
                                {
                                    s->pending_buf[s->pending++] = (uch)(s->bi_buf & 0xff);
                                };
                                {
                                    s->pending_buf[s->pending++] = (uch)(((ush)s->bi_buf) >> 8);
                                };
                            };
                            s->bi_buf = ((ush)val) >> (((8 * 2) * (sizeof(char))) - s->bi_valid);
                            s->bi_valid += len - ((8 * 2) * (sizeof(char)));
                        } else {
                            s->bi_buf |= dist << s->bi_valid;
                            s->bi_valid += len;
                        }
                    };
                }
            };
        } while (lx < s->last_lit);
    {
        int len = ltree[256].dl.len;
        if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
            int val = ltree[256].fc.code;
            s->bi_buf |= val << s->bi_valid;
            {
                {
                    s->pending_buf[s->pending++] = (uch)(s->bi_buf & 0xff);
                };
                {
                    s->pending_buf[s->pending++] = (uch)(((ush)s->bi_buf) >> 8);
                };
            };
            s->bi_buf = ((ush)val) >> (((8 * 2) * (sizeof(char))) - s->bi_valid);
            s->bi_valid += len - ((8 * 2) * (sizeof(char)));
        } else {
            s->bi_buf |= ltree[256].fc.code << s->bi_valid;
            s->bi_valid += len;
        }
    };
    s->last_eob_len = ltree[256].dl.len;
}
