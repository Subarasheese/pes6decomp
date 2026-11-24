/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern s32 func_002937A0(u8);
extern const u16 D_003D2CC8[];
extern void func_002CA080(RoleCounts *), func_008BD2E0(RoleWork *, u8),
    func_008BC9B0(RoleWork *, RoleCounts *), func_008BCB20(RoleWork *, RoleCounts *);
s32 func_008BC540(FormationOptions *opts, s32 advance, s32 restrictTeams) {
    RoleWork work;
    RoleCounts counts;
    s32 i;
    s32 allowed = 1;
    work.count = 0;
    func_002CA080(&counts);
    work.original = opts->tactics.plan.layouts[opts->tactics.selectedLayout].instructions;
    for (i = 0; i < FORMATION_STARTERS; i++) {
        work.assigned.role[i] = 3;
        counts.counts[(u8)func_002937A0(work.original.role[i])]++;
    }
    for (i = 0; i < 14; i++) {
        switch (i) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            func_008BD2E0(&work, i);
            break;
        }
    }
    if (advance) {
        func_008BC9B0(&work, &counts);
    } else {
        func_008BCB20(&work, &counts);
        {
            s32 slot;
            for (slot = 1; slot < FORMATION_STARTERS; slot++) {
                if ((u8)func_002937A0(work.assigned.role[slot]) == 3) {
                    if (work.assigned.outfield[slot - 1].x > 11)
                        work.assigned.outfield[slot - 1].x = 11;
                }
            }
        }
    }
    if (restrictTeams)
        for (i = 0; D_003D2CC8[i] != 0xffff; i++) {
            if (opts->team == D_003D2CC8[i]) {
                work.count = 0;
                allowed = 0;
                break;
            }
        }
    if (work.count == FORMATION_STARTERS)
        opts->tactics.plan.layouts[opts->tactics.selectedLayout].instructions = work.assigned;
    return allowed;
}
