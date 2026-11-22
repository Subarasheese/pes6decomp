#ifndef PES6_ENTRY_COUNTER_H
#define PES6_ENTRY_COUNTER_H

#include "types.h"
typedef struct {
    u8 values[0x160];
} EntryPage;
extern EntryPage *D_003EA5D0[2];
extern s32 D_003EA5CC;
extern char D_003EA5BC[8], D_0092E9C8[];
extern s32 func_001C78F8(char *, const char *, ...);

static inline char *entry_counter(s32 offset) {
    s32 value = D_003EA5D0[D_003EA5CC]->values[offset];
    value = value < 1000 ? value : 999;
    func_001C78F8(D_003EA5BC, D_0092E9C8, value);
    return D_003EA5BC;
}

#endif
