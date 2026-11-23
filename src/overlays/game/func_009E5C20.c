/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "pes6/match_player.h"
extern Pes6MatchPlayer D_0058E7F0[];
extern u8 D_00591BE4[];
extern s32 D_00591E14[];
extern void func_001AAF40(Pes6PlayerFieldState *, s8), func_001AAF50(Pes6PlayerFieldState *, s32),
    func_00AD0A20(void), Pes6MatchFlow_SetState(s32, s32);
extern s32 func_00152130(s32, s8), func_00B24670(void);
void func_009E5C20(void) {
    if (D_00591E14[0] == D_00591BE4[0] * 30) {
        s32 i = 0;
        Pes6MatchPlayer *p = D_0058E7F0;
        do {
            Pes6PlayerInfo *info = p->info;
            if (info->active) {
                func_001AAF50(info->fieldState, 2);
                func_001AAF40(p->info->fieldState, 1);
            }
            ++i;
            ++p;
        } while (i < 22);
    }
    ++D_00591E14[0];
    func_00AD0A20();
    if (!func_00152130(0, 16))
        return;
    if (!func_00B24670())
        Pes6MatchFlow_SetState(2, 4);
}
