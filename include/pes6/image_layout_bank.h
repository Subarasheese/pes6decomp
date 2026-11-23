#ifndef PES6_IMAGE_LAYOUT_BANK_H
#define PES6_IMAGE_LAYOUT_BANK_H

#include "types.h"

typedef struct {
    u32 count;
    void **entries;
} LayoutDirectory;
typedef struct {
    LayoutDirectory *resources, *layouts;
} LayoutFile;
typedef struct {
    s32 handle;
    void *address;
} LayoutResource;
typedef struct LayoutInstance {
    struct LayoutInstance *prevGlobal, *nextGlobal, *prevInBank, *nextInBank;
} LayoutInstance;
typedef struct LayoutBank {
    struct LayoutBank *prev, *next;
    s32 id;
    LayoutFile *file;
    LayoutDirectory *layouts;
    LayoutResource *resources;
    s32 instanceCount;
    LayoutInstance *first, *last;
} LayoutBank;
extern LayoutBank *D_003E9978, *D_003E997C;

typedef struct {
    s32 heap;
    u8 reserved04[60];
    s32 id;
    LayoutFile *file;
} LoadedLayout;

static inline LayoutBank *findLayoutBank(s32 id) {
    LayoutBank *bank = D_003E9978;
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
