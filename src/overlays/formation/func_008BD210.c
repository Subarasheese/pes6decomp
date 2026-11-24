/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
u8 func_008BD210(const RoleWork *work) {
    u8 preferred = 33;
    s32 i;
    for (i = 0; i < 11; i++) {
        switch (work->original.role[i]) {
        case 23:
        case 16:
            preferred = 31;
            break;
        case 22:
        case 15:
            preferred = 35;
            break;
        case 30:
            if (preferred == 35)
                preferred = 33;
            break;
        case 29:
            if (preferred == 31)
                preferred = 33;
            break;
        }
    }
    return preferred;
}
