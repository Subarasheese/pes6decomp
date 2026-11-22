/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, trees.c (send_all_trees). See THIRD_PARTY.md. */
/* trees.c -- output deflated data using Huffman coding
 * Copyright (C) 1995-2002 Jean-loup Gailly
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
typedef unsigned char Byte;
typedef Byte Bytef;
typedef unsigned int uInt;
typedef struct z_stream_s *z_streamp;
typedef unsigned char uch;
typedef uch uchf;
typedef unsigned short ush;
typedef ush ushf;
typedef unsigned long ulg;
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
static const uch bl_order[19] = {16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15};

extern void func_00128610(deflate_state *s, ct_data *tree, int max_code);

#define send_bits(s, value, length)                                                                \
    do {                                                                                           \
        int len = (length);                                                                        \
        if ((s)->bi_valid > 16 - len) {                                                            \
            int val = (value);                                                                     \
            (s)->bi_buf |= val << (s)->bi_valid;                                                   \
            (s)->pending_buf[(s)->pending++] = (uch)((s)->bi_buf & 0xff);                          \
            (s)->pending_buf[(s)->pending++] = (uch)((ush)(s)->bi_buf >> 8);                       \
            (s)->bi_buf = (ush)val >> (16 - (s)->bi_valid);                                        \
            (s)->bi_valid += len - 16;                                                             \
        } else {                                                                                   \
            (s)->bi_buf |= (value) << (s)->bi_valid;                                               \
            (s)->bi_valid += len;                                                                  \
        }                                                                                          \
    } while (0)

void func_001282D0(deflate_state *s, int lcodes, int dcodes, int blcodes) {
    int rank;
    send_bits(s, lcodes - 257, 5);
    send_bits(s, dcodes - 1, 5);
    send_bits(s, blcodes - 4, 4);
    for (rank = 0; rank < blcodes; rank++)
        send_bits(s, s->bl_tree[bl_order[rank]].dl.len, 3);
    func_00128610(s, s->dyn_ltree, lcodes - 1);
    func_00128610(s, s->dyn_dtree, dcodes - 1);
}
