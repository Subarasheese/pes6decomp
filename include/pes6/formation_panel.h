#ifndef PES6_FORMATION_PANEL_H
#define PES6_FORMATION_PANEL_H

#include "types.h"

typedef struct {
    u8 kind;
    u8 value;
    s16 difference;
} FormationPanelRow;

void func_008DC850(FormationPanelRow *row, u8 kind, u8 value, u8 comparison);

#endif
