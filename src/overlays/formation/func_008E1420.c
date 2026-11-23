/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct {
    u8 pad00[0x20];
    u8 count, position;
    u8 pad22[0x3a];
    void *list, *label;
} FormationLabels;
extern void func_008C5CF0(FormationLabels *, s32), func_008C5750(FormationLabels *, void *),
    func_001D7D60(void *, s32), func_002DB580(void *, s32);
extern void *func_001F08B0(u32);
void func_008E1420(FormationLabels *p, s32 active) {
    func_008C5CF0(p, active);
    if ((u8)active == 1)
        func_008C5750(p, func_001F08B0(0x42001c));
    else
        func_008C5750(p, 0);
    func_001D7D60(p->label, active);
    if (p->count > p->position)
        func_002DB580(p->list, active);
}
