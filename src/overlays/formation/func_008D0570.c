/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "pes6/formation_mode.h"
extern void func_002DF960(void *), func_008D0430(FormationModePage *, s32);
static inline void clearFormationState(FormationModePage *p) {
    p->cursor = 0;
    p->scroll = 0;
    p->field1bc = 0;
    p->field1c0 = 0;
    p->popup = 0;
    p->field1c8 = 0;
    p->side = 3;
}
void func_008D0570(FormationModePage *p, s32 selection) {
    if (p) {
        p->mode = 3;
        resetFormationMode(p);
        func_002DF960(p->resource);
        p->resource = 0;
        func_001F3CA0(p->next);
        func_001F3CA0(p->previous);
        clearFormationState(p);
        p->side = (selection & 255u) >> 1;
        func_008D0150(p, p->side);
        func_008D0430(p, selection);
    }
}
