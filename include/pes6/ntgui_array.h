#ifndef PES6_NTGUI_ARRAY_H
#define PES6_NTGUI_ARRAY_H

#include "types.h"

typedef struct WidgetItem WidgetItem;
typedef struct {
    WidgetItem **items;
    s32 capacity;
    s32 initialCapacity;
    s32 count;
    s32 growth;
} WidgetArray;

typedef struct {
    u8 bytes[32];
} WindowRecord;
typedef struct {
    WindowRecord *items;
    s32 capacity, initialCapacity, count, growth;
} WindowRecords;

#endif
