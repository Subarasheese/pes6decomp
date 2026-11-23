#ifndef PES6_MENU_COMMANDS_H
#define PES6_MENU_COMMANDS_H

#include "types.h"
typedef s32 (*MenuCommand)(void);
typedef struct {
    s32 id, flags;
    MenuCommand callback;
} MenuCommandEntry;
extern void func_001BC300(void);
extern s32 func_001BC3D0(s32 page, s32 id, s32 flags, MenuCommand callback);

#endif
