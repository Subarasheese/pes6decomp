/* dreamingmoths/memory-of-alessa, include/sce/mpeg/vibuf.h (ViBuf). See THIRD_PARTY.md. */
#ifndef PES6_MOVIE_INPUT_BUFFER_H
#define PES6_MOVIE_INPUT_BUFFER_H
#include "types.h"
typedef struct {
    u32 words[4];
} MovieQuadword;
typedef struct {
    s64 pts, dts;
    s32 pos, len;
} TimeStamp;
typedef struct {
    MovieQuadword *data, *tag;
    s32 n, dmaStart, dmaN, readBytes, buffSize;
    struct {
        u32 d4madr, d4tadr, d4qwc, d4chcr, d3madr, d3qwc, d3chcr, ipubp, ipuctrl;
    } env;
    s32 sema, isActive;
    s64 totalBytes;
    TimeStamp *ts;
    s32 n_ts, count_ts, wt_ts;
} ViBuf;
#endif
