#ifndef PES6_ENTRY_WAIT_H
#define PES6_ENTRY_WAIT_H

#include "types.h"

struct Counter {
    s32 limit;
    s32 current;
};

extern s32 func_002D55B0(struct Counter *counter);
extern s32 func_0035A260(void);

static inline s32 entryWaitReady(struct Counter *counter) {
    s32 ready = 0;
    if (func_002D55B0(counter) == 1 || func_0035A260() == 1)
        ready = 1;
    return ready;
}

#endif
