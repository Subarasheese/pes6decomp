#ifndef PES6_OVERLAY_MODULE_H
#define PES6_OVERLAY_MODULE_H

#include "types.h"

/* A module identifies its asset and the overlay region that receives it. */
typedef struct {
    s32 asset;
    s32 region;
} Pes6ModuleEntry;

Pes6ModuleEntry *Pes6Module_Get(s32 moduleId);
s32 Pes6Module_GetRegion(s32 moduleId);
void Pes6Module_Load(s32 moduleId);
void func_001FC780(s32 region);

#endif
