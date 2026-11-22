#ifndef PES6_MPEG_BIT_READER_H
#define PES6_MPEG_BIT_READER_H

/* libmpeg bit reader, adapted from ico/sce/libmpeg/pack.c. See LICENSES/ico-MIT.txt. */
#include "types.h"

typedef struct {
    u64 bits;
    s64 position;
    u8 *base, *next;
    s32 remaining;
    u8 *wrap, *end;
    s32 ringSize;
} MpegBitReader;

static inline void flush_bits(MpegBitReader *bs, s32 n) {
    bs->bits <<= n;
    bs->remaining -= n;
    while (bs->remaining < 57) {
        bs->bits |= (u64)*bs->next++ << (56 - bs->remaining);
        if (bs->next >= bs->end)
            bs->next = bs->wrap;
        bs->remaining += 8;
    }
    bs->position += n;
}

static inline u32 read_bits(MpegBitReader *bs, s32 n) {
    u32 value = bs->bits >> (64 - n);
    flush_bits(bs, n);
    return value;
}

#endif
