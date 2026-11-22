/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, trees.c (send_tree).
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
struct static_tree_desc_s {
    const ct_data *static_tree;
    const intf *extra_bits;
    int extra_base;
    int elems;
    int max_length;
};

void func_00128610(deflate_state *s, ct_data *tree, int max_code) {
    int n;
    int prevlen = -1;
    int curlen;
    int nextlen = tree[0].dl.len;
    int count = 0;
    int max_count = 7;
    int min_count = 4;
    if (nextlen == 0)
        max_count = 138, min_count = 3;
    for (n = 0; n <= max_code; n++) {
        curlen = nextlen;
        nextlen = tree[n + 1].dl.len;
        if (((++count) < max_count) && (curlen == nextlen)) {
            continue;
        } else if (count < min_count) {
            do {
                {
                    int len = s->bl_tree[curlen].dl.len;
                    if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                        int val = s->bl_tree[curlen].fc.code;
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
                        s->bi_buf |= s->bl_tree[curlen].fc.code << s->bi_valid;
                        s->bi_valid += len;
                    }
                };
            } while ((--count) != 0);
        } else if (curlen != 0) {
            if (curlen != prevlen) {
                {
                    int len = s->bl_tree[curlen].dl.len;
                    if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                        int val = s->bl_tree[curlen].fc.code;
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
                        s->bi_buf |= s->bl_tree[curlen].fc.code << s->bi_valid;
                        s->bi_valid += len;
                    }
                };
                count--;
            };
            {
                int len = s->bl_tree[16].dl.len;
                if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                    int val = s->bl_tree[16].fc.code;
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
                    s->bi_buf |= s->bl_tree[16].fc.code << s->bi_valid;
                    s->bi_valid += len;
                }
            };
            {
                int len = 2;
                if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                    int val = count - 3;
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
                    s->bi_buf |= (count - 3) << s->bi_valid;
                    s->bi_valid += len;
                }
            };
        } else if (count <= 10) {
            {
                int len = s->bl_tree[17].dl.len;
                if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                    int val = s->bl_tree[17].fc.code;
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
                    s->bi_buf |= s->bl_tree[17].fc.code << s->bi_valid;
                    s->bi_valid += len;
                }
            };
            {
                int len = 3;
                if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                    int val = count - 3;
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
                    s->bi_buf |= (count - 3) << s->bi_valid;
                    s->bi_valid += len;
                }
            };
        } else {
            {
                int len = s->bl_tree[18].dl.len;
                if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                    int val = s->bl_tree[18].fc.code;
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
                    s->bi_buf |= s->bl_tree[18].fc.code << s->bi_valid;
                    s->bi_valid += len;
                }
            };
            {
                int len = 7;
                if (s->bi_valid > (((int)((8 * 2) * (sizeof(char)))) - len)) {
                    int val = count - 11;
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
                    s->bi_buf |= (count - 11) << s->bi_valid;
                    s->bi_valid += len;
                }
            };
        }
        count = 0;
        prevlen = curlen;
        if (nextlen == 0) {
            max_count = 138, min_count = 3;
        } else if (curlen == nextlen) {
            max_count = 6, min_count = 3;
        } else {
            max_count = 7, min_count = 4;
        }
    }
}
