#ifndef PES6_FORMATION_MODE_H
#define PES6_FORMATION_MODE_H

#include "types.h"
typedef struct {
    u8 pad00[2];
    u8 side;
    u8 pad03[6];
    u8 mode;
    u8 pad0a[0x3e];
    void *window, *previous, *next;
    u8 pad54[0x138];
    s32 cursor, scroll;
    u8 pad194[0x28];
    s32 field1bc, field1c0;
    s32 field1c4, field1c8;
    u8 pad1cc[4];
    void *popup;
    u8 pad1d4[8];
    void *resource;
} FormationModePage;
extern void func_001F3CA0(void *), func_008CFFA0(FormationModePage *, void *, s32),
    func_001F22B0(void *), func_008D0150(FormationModePage *, s32);
static inline void resetFormationMode(FormationModePage *page) {
    func_001F3CA0(page->window);
    page->scroll = 0;
    func_008CFFA0(page, page->window, page->mode);
    func_001F22B0(page->popup);
    page->popup = 0;
    if (page->mode == 3)
        func_008D0150(page, page->side);
}

#endif
