#ifndef PES6_MENU_DISPLAY_SCREENS_H
#define PES6_MENU_DISPLAY_SCREENS_H

#include "pes6/menu_widget_groups.h"

typedef struct {
    void *widgets, *labels;
    u8 reserved08[8];
    u8 transition[8];
    u8 reserved18[0x274 - 0x18];
    unsigned char active : 1, labelsOpen : 1;
} MenuDisplayPanel;

typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    u8 reserved10[0x10];
    unsigned char active : 1, labelsOpen : 1;
} MenuDisplayScreen;

#endif
