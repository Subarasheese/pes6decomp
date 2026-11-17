/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_0028F9D0(s32, void *, s32);
extern char Pes6MatchSquads[];

s32 func_00C2CAC0(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s6;
    u8 *temp_s0;
    u8 *temp_v1;

    var_s6 = 0xB;
    var_s1 = 0;
    temp_s0 = (u8 *)Pes6MatchSquads + (*arg0 * 0x6900);
    *arg3 = 0;
    do {
        temp_v1 = temp_s0 + (arg0[0x8C + var_s1] * 0x348);
        if (temp_v1[0xD4] != 0 && temp_v1[0xF8] == 0 && temp_v1[0xF9] == 0) {
            temp_v0 = func_0028F9D0(arg1, temp_v1 + 0x68, arg2 & 0xFF);
            if (*arg3 < temp_v0) {
                *arg3 = temp_v0;
                var_s6 = var_s1;
            }
        }
        var_s1 += 1;
    } while (var_s1 < 0xB);
    return var_s6;
}
