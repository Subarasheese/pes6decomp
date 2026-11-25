#ifndef PES6_CARD_SELECTION_GRID_H
#define PES6_CARD_SELECTION_GRID_H

#include "pes6/widget_color.h"

typedef struct {
    s32 entry;
    s32 group;
    s32 option;
    s32 value;
    s32 column;
    s32 row;
} CardGridPage;

typedef struct {
    u32 ids[20];
    s32 marks[20];
    u8 reservedA0[0x400];
    s32 groupId;
} CardGridGroup;

typedef struct {
    u8 reserved00[0x48];
    s32 dirty;
    WidgetColor colors[2];
    void *caption;
    u8 *pageWidgets[2];
    u8 *indicator;
    u8 *details;
    u8 reserved68[0x90];
    s32 section;
    u8 reservedFC[0x180c];
    s32 allowEmpty;
    s32 mode;
    CardGridPage pages[2];
    s32 active;
    CardGridGroup groups[20];
} CardSelectionGrid;

static inline s32 cardGridSection(s32 group) {
    s32 section;
    if (group < 8)
        section = 0;
    else if (group < 16)
        section = 1;
    else if (group < 20)
        section = 2;
    else
        section = -1;
    return section;
}

#endif
