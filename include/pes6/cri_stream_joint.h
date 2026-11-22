/* CRI stream-joint layouts adapted from LucasPicoli/god-hand-decomp, include/godhand/criSj.h. See THIRD_PARTY.md. */
#ifndef PES6_CRI_STREAM_JOINT_H
#define PES6_CRI_STREAM_JOINT_H
#include "types.h"

typedef struct SjChunk {
    s8 *data;
    s32 len;
} SjChunk;

typedef struct SjMem {
    void *vtbl;
    s32 used;
    void *uuid;
    s32 dataLen, readPos;
    s8 *base;
    s32 size;
    void (*cb)(void *object, s32 error);
    void *cbobj;
} SjMem;

typedef struct SjRbf {
    void *vtbl;
    s32 used;
    void *uuid;
    s32 data, free, freePos, dataPos;
    s8 *buf;
    s32 size, extra, freeTaken, freeReturned, dataTaken, dataReturned;
    void (*err)(void *object, s32 error);
    void *errObj;
} SjRbf;

#endif
