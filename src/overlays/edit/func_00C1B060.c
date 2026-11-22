/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "pes6/kit.h"
extern s32 Pes6Team_ResolveSpecialId(s32 team);
extern void func_00C1B270(void);
inline s32 originalKitTeam(s32 team) { return Pes6Team_ResolveSpecialId(team); }

void func_00C1B060(s32 team, s32 reset) {
    s32 i;
    if (reset == 1) {
        func_00C1B270();
    } else {
        i = 0;
        do {
            Pes6KitDefinition *dest = func_002F82B0(team, i);
            const Pes6KitDefinition *source;
            if ((u16)team == 0x126)
                source = func_002F8120((u16)originalKitTeam(team), i);
            else
                source = func_002F8120(team, i);
            dest->type = source->type;
            dest->option3B = source->option3B;
            dest->model = source->model;
            dest->variant = source->variant;
            dest->style[9] = 0;
            dest->style[11] = 0;
            dest->style[14] = source->style[14];
            dest->style[15] = source->style[15];
            ++i;
        } while (i < 4);
    }
}
