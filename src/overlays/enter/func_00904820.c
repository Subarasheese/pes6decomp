/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"
extern u8 D_0092F0FF[], D_0092F0FC[];
extern Pes6MatchPlayer *func_009177C0(s32 slot);
extern void func_00903A70(s32), func_009045A0(s32), func_0090B0E0(s32);
extern void func_001AAF50(Pes6PlayerFieldState *, s8), func_001AAF40(Pes6PlayerFieldState *, s8);
s32 func_00904820(void) {
    u8 slot;
    s32 enabled = D_0092F0FF[D_0092F0FC[0]] != 26;
    func_00903A70(enabled);
    func_009045A0(enabled);
    for (slot = 0; slot < 22U; slot++) {
        Pes6MatchPlayer *player = func_009177C0(slot);
        if (player) {
            Pes6PlayerFieldState *field = player->info->fieldState;
            if (field->pad00[2]) {
                func_001AAF50(field, 0);
                func_001AAF40(field, 1);
            }
        }
    }
    func_0090B0E0(6);
    return 1;
}
