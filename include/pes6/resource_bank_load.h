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
    s32 reserved[3], id, heap;
} ResourceLoadOptions;
extern ResourceBankLink *D_003E993C, *D_003E9944, *D_003E9948;
extern ResourceBankLink *D_0052B140[];
extern s32 func_0017F9A0(s32 resource, void (*ready)(LoadedResource *), s32 *arguments,
                         s32 argumentBytes, ResourceLoadOptions *options);
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
