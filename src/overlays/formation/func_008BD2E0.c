/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern s32 func_002937A0(u8);
void func_008BD2E0(RoleWork *work, u8 group) {
    u8 slot;
    s32 i;
    slot = work->count;
    for (i = 0; i < FORMATION_STARTERS; i++) {
        const u8 *role = &work->original.role[i];
        if (group == (u8)func_002937A0(*role)) {
            work->assigned.role[slot] = *role;
            if ((s32)slot > 0) {
                const FormationPosition *position = &work->original.outfield[i - 1];
                work->assigned.outfield[slot - 1] = *position;
            }
            work->assigned.option1[slot] = work->original.option1[i];
            work->assigned.option2[slot] = work->original.option2[i];
            switch (*role) {
            case 23:
            case 16:
                if (work->assigned.outfield[slot - 1].y < 74)
                    work->assigned.outfield[slot - 1].y = 74;
                break;
            case 22:
            case 15:
                if (work->assigned.outfield[slot - 1].y > 30)
                    work->assigned.outfield[slot - 1].y = 30;
                break;
            }
            slot++;
        }
    }
    work->count = slot;
}
