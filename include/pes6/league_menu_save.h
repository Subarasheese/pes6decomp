#ifndef PES6_LEAGUE_MENU_SAVE_H
#define PES6_LEAGUE_MENU_SAVE_H

#include "types.h"

typedef struct {
    u8 reserved00[4];
    u32 phase;
} LeagueSaveHeader;

extern LeagueSaveHeader *Pes6SaveData_Current;
extern void func_0094C790(s32 phase);

#endif
