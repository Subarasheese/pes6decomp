/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_strip_colors.h"

extern s32 D_0053C3B4[], D_0053C3BC[];
extern s32 Pes6Team_ResolveSpecialId(s32 team);

void func_00243EA0(void) {
    MatchColor home, away;
    s32 primary, alternate;
    if ((D_003E9E88[0] & ALTERNATE_SHIRT) == 0)
        home = func_00241660(Pes6MatchContext[0], STRIP_PRIMARY_SHIRT, 0);
    else
        home = func_00241660(Pes6MatchContext[0], STRIP_PRIMARY_SHIRT, 1);
    if ((D_003E9E88[1] & ALTERNATE_SHIRT) == 0)
        away = func_00241660(D_00591BB2[0], STRIP_PRIMARY_SHIRT, 0);
    else
        away = func_00241660(D_00591BB2[0], STRIP_PRIMARY_SHIRT, 1);
    primary = (s32)func_00243930(func_00241660(Pes6MatchContext[0], STRIP_GOALKEEPER, 0), away, 0);
    alternate =
        (s32)func_00243930(func_00241660(Pes6MatchContext[0], STRIP_GOALKEEPER, 1), away, 0);
    if (primary >= alternate)
        D_0053C3B4[0] = 0;
    else
        D_0053C3B4[0] = KEEPER_PARTS;
    if (primary >= 20)
        D_0053C3B4[0] = 0;
    primary = (s32)func_00243930(func_00241660(D_00591BB2[0], STRIP_GOALKEEPER, 0), home, 0);
    alternate = (s32)func_00243930(func_00241660(D_00591BB2[0], STRIP_GOALKEEPER, 1), home, 0);
    if (primary >= alternate)
        D_0053C3BC[0] = 0;
    else
        D_0053C3BC[0] = KEEPER_PARTS;
    if (primary >= 20)
        D_0053C3BC[0] = 0;
    if ((u16)Pes6Team_ResolveSpecialId(Pes6MatchContext[0]) ==
        (u16)Pes6Team_ResolveSpecialId(D_00591BB2[0])) {
        if ((D_003E9E88[0] & ALTERNATE_SHIRT) == 0) {
            D_0053C3B4[0] = 0;
            D_0053C3BC[0] = KEEPER_PARTS;
        } else {
            D_0053C3B4[0] = KEEPER_PARTS;
            D_0053C3BC[0] = 0;
        }
    }
}
