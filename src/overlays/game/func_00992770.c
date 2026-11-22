/* compiler: mwcc-3.0.1b151-O3 */
#include "pes6/match_player.h"
extern u8 func_009E1C90(s32 slot);
extern s32 func_00BF6280(void);
extern u8 D_005926FE[], D_005926FD[], D_00CBCB36[], D_00CBCDE2[];
u8 func_00992770(s32 event) {
    s32 result = 0;
    if ((u8)func_009E1C90(1) == 12 && func_00BF6280() == 2 && (u8)func_009E1C90(3) == 3 &&
        D_00CBCB36[0] == event)
        result = 2;
    else if ((u8)func_009E1C90(1) == 12 && func_00BF6280() == 2 && (u8)func_009E1C90(3) == 5 &&
             D_00CBCB36[0] == event)
        result = 3;
    else if ((u8)func_009E1C90(1) == 10 && D_005926FE[0] == 4) {
        if (D_005926FD[0] == 1 && event == 8) {
            if (Pes6MatchPlayer_Get(D_00CBCDE2[0])->info->unk30 == 0x40e)
                result = 1;
        }
    }
    return (u8)result;
}
