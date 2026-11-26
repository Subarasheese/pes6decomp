#ifndef PES6_MC_CONVERTER_H
#define PES6_MC_CONVERTER_H

#include "types.h"

typedef struct {
    u8 status;
    u8 reserved01;
    u8 state[5];
    u8 flags;
    s8 indices[2];
    u8 reserved0A[2];
    s32 selection;
} McConverterTask;

typedef struct {
    u8 dirty[6];
    u8 previousState[5];
    u8 pending, reserved0C, statusIsSix, previousFlags, reserved0F;
    s32 selection;
    s32 previousIndices[2];
} McConverterOptions;

static inline void mcInitConverterOptions(McConverterTask *task, McConverterOptions *options,
                                          s32 selection) {
    task->state[0] = 0;
    task->state[1] = 0;
    task->state[2] = 0;
    task->state[3] = 0;
    task->state[4] = 0;
    task->selection = selection;
    options->dirty[0] = 1;
    options->dirty[1] = 1;
    options->dirty[2] = 1;
    options->dirty[3] = 1;
    options->dirty[4] = 1;
    options->dirty[5] = 1;
    options->previousState[0] = 0;
    options->previousState[1] = 0;
    options->previousState[2] = 0;
    options->previousState[3] = 0;
    options->previousState[4] = 0;
    options->pending = 0;
    options->reserved0C = 0;
    options->statusIsSix = 0;
    options->previousFlags = 0;
    options->selection = selection;
}

#endif
