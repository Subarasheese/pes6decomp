/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

M2C_UNK Pes6MatchFlow_SetState(M2C_UNK, M2C_UNK);
M2C_UNK func_00B78E60(M2C_UNK, s32);
s32 func_00B7B850();
M2C_UNK func_00B7B890();
s32 func_00BE9B70();
extern u8 D_00591BE4[];
extern char Pes6MatchContext_FrameCounter[];

void func_00BEA590(M2C_UNK arg0, s32 arg1) {
    s32 var_s1;
    s32 var_s2;
    u8 temp_s0;

    temp_s0 = D_00591BE4[0];
    var_s1 = 0;
    if (0 < temp_s0) {
        do {
            func_00B78E60(0, arg1);
            var_s2 = 0;
            if (func_00BE9B70() == 0) {
                var_s2 = 1;
            }
            if (func_00B7B850() != 0) {
                var_s2 = 1;
            }
            if (var_s2 == 1) {
                Pes6MatchFlow_SetState(2, 0xE);
                break;
            } else {
                func_00B7B890();
                arg1 = (*(s32 *)Pes6MatchContext_FrameCounter) + 1;
                (*(s32 *)Pes6MatchContext_FrameCounter) = arg1;
                var_s1 += 1;
            }
        } while (var_s1 < temp_s0);
    }
}
