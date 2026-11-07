/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5C1[];
extern char D_0058E5C2[];
extern char Pes6MatchSquads[];
extern s32 func_00288670(s32,s32);

s32 func_0030FC50(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 != 0xFF) {
        var_a2 = temp_v1 % 23;
    } else {
        var_a2 = 1;
    }
    if (temp_v1 != 0xFF) {
        var_a0 = temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    return func_00288670(M2C_FIELD(((*(((u8 *)D_0058E5C1) + (var_a2 * 0x240)) * 0x348) + (((u8 *)Pes6MatchSquads) + (*(((u8 *)D_0058E5C2) + (var_a0 * 0x240)) * 0x6900))), u8 *, 0x76) & 0x7F, 0x28);
}
