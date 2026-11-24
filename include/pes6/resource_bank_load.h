#ifndef PES6_RESOURCE_BANK_LOAD_H
#define PES6_RESOURCE_BANK_LOAD_H

#include "types.h"
typedef struct ResourceBankLink {
    struct ResourceBankLink *prev, *next;
    s32 id;
} ResourceBankLink;
typedef struct {
    s32 heap;
    u8 reserved04[0x3c];
    s32 id;
    void *file;
} LoadedResource;
typedef struct {
    u32 flags;
    void *buffers[2];
    s32 id, heap;
} ResourceLoadOptions;
typedef void (*ResourceReady)(LoadedResource *resource);
typedef u32 (*ResourceSize)(s32 resource);
extern ResourceSize func_0017F640(s32 resource);
extern u32 func_0017F850(s32 resource);
extern s32 func_0017FA50(s32 resource, ResourceReady ready, s32 *arguments, s32 argumentBytes,
                         ResourceLoadOptions *options);
extern s32 func_0017F950(s32 resource, ResourceReady ready, s32 *arguments, s32 argumentBytes,
                         u32 flags);
extern ResourceBankLink *D_003E993C, *D_003E9944, *D_003E9948;
extern ResourceBankLink *D_0052B140[];
extern s32 func_0017F9A0(s32 resource, ResourceReady ready, s32 *arguments, s32 argumentBytes,
                         ResourceLoadOptions *options);
static inline ResourceBankLink *findResourceBank(ResourceBankLink *bank, s32 id) {
    if (!bank)
        return 0;
    do {
        if (bank->id == id)
            return bank;
        bank = bank->next;
    } while (bank);
    return 0;
}

#endif
