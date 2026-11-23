/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "pes6/formation_mode.h"
void func_008D03C0(FormationModePage *p, u8 mode) {
    p->mode = mode;
    resetFormationMode(p);
}
