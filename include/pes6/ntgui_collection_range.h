#ifndef PES6_NTGUI_COLLECTION_RANGE_H
#define PES6_NTGUI_COLLECTION_RANGE_H

#include "types.h"

typedef struct {
    void *items;
    s32 capacity, minimumCapacity, count, growth;
} NtguiCollection;

#endif
