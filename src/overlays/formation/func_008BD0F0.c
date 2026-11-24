/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern s32 func_002937A0(u8);
s32 func_008BD0F0(const RoleWork *work, u8 group) {
    s32 i, j;
    for (i = 1; i < 11; i++) {
        if ((u8)func_002937A0(work->original.role[i]) != group)
            continue;
        for (j = 1; j < 11; j++) {
            if (work->original.role[i] != work->assigned.role[j] &&
                (u8)func_002937A0(work->assigned.role[j]) >= 5) {
                s32 dx = work->assigned.outfield[j - 1].x - work->original.outfield[i - 1].x;
                s32 dy = (work->assigned.outfield[j - 1].y - work->original.outfield[i - 1].y) / 2;
                if (dx * dx + dy * dy < 36)
                    return 1;
            }
        }
    }
    return 0;
}
