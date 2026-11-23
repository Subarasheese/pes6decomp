/* compiler: mwcc-3.0.1b151 */
#pragma opt_strength_reduction off
#include "pes6/match_player.h"
extern u8 D_003EA6FC;
extern Pes6MatchPlayer D_0058E7F0[];
extern void func_001AC470(void), func_001AB5E0(void), func_001AC5A0(void);
extern s32 Pes6File_AllChannelsIdle(void), func_00C5A620(u8), func_00C5A6D0(u8);
extern void func_001AFBF0(Pes6PlayerFieldState *, s32), func_001B43B0(Pes6PlayerFieldState *, s32);
s32 func_0093FD30(void) {
    s32 i;
    Pes6MatchPlayer *p;
    if (!D_003EA6FC)
        return 0;
    if (!Pes6File_AllChannelsIdle())
        return 1;
    func_001AB5E0();
    func_001AC5A0();
    func_001AC470();
    p = D_0058E7F0;
    i = 0;
    do {
        func_001AFBF0(p->info->fieldState, func_00C5A620(p->id));
        func_001B43B0(p->info->fieldState, func_00C5A6D0(p->id));
        ++i;
        ++p;
    } while (i < 22);
    D_003EA6FC = 0;
    return 0;
}
