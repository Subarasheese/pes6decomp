/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_00C12FD0(u32, u32, s32, M2C_UNK);          /* extern */
u32 func_00C137C0();                                /* extern */
u32 func_00C137F0();                                /* extern */
u32 func_00C13840();                                /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */
extern char D_003DA428[];
extern char D_003DA4D0[];
extern s8 D_003E9D50;
extern s8 D_003E9D51;
extern s8 D_003E9D52;
extern s8 D_003E9D53;

u32 func_002C4FA0(u32 arg0, s8 arg1) {
    s32 temp_s0;
    s32 temp_s2;
    s8 temp_s1;
    u32 temp_a0;
    u32 temp_s0_2;
    u32 temp_s3;
    u32 temp_s5;
    u32 var_s1;
    u32 var_v0;

    temp_s3 = func_00C137C0();
    temp_s5 = func_00C137F0();
    temp_s2 = arg1 & 0xFF;
    D_003E9D53 = 0xFF;
    temp_s1 = (temp_s2 >> 5) & 1;
    temp_s0 = (*(s32 *)D_003DA4D0);
    D_003E9D52 = 0;
    D_003E9D51 = temp_s1;
    if (func_00C12FD0(arg0, temp_s3, temp_s0, 1) == -1U) {
        return -1U;
    }
    D_003E9D53 = 0xFF;
    D_003E9D51 = temp_s1;
    D_003E9D52 = 0;
    var_s1 = func_00C12FD0(temp_s3, temp_s5, temp_s0, 1);
    if ((func_00C17E10(temp_s1 & 0xFF, temp_s2 & 0x1F) & 0xFF) == 0xFF) {
        var_v0 = -1U;
    } else {
        temp_s0_2 = func_00C137F0();
        temp_a0 = func_00C13840();
        D_003E9D53 = 0xFF;
        D_003E9D50 = arg1;
        D_003E9D52 = 0;
        var_v0 = func_00C12FD0(temp_a0, temp_s0_2, (*(s32 *)D_003DA428), 1);
        if (var_v0 == -1U) {
            var_v0 = temp_s0_2;
        }
    }
    if (var_v0 < var_s1) {
        var_s1 = var_v0;
    }
    return var_s1;
}
