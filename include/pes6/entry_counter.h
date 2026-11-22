#ifndef PES6_ENTRY_COUNTER_H
#define PES6_ENTRY_COUNTER_H

#include "pes6/entry_page.h"

extern char D_0092E9C8[];
extern s32 func_001C78F8(char *, const char *, ...);

static inline char *entry_counter(s32 offset, char *output, s32 limit) {
    s32 value = D_003EA5D0[D_003EA5CC]->storage.values[offset];
    value = value < limit ? value : limit - 1;
    func_001C78F8(output, D_0092E9C8, value);
    return output;
}

#endif
