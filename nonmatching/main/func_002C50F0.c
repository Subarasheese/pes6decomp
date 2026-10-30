/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002C4960(u32, s8);
u32 func_00C12FD0(u32, u32, s32, M2C_UNK);          /* extern */
u32 func_00C137C0(u32);                             /* extern */
u32 func_00C137F0();                                /* extern */
u32 func_00C13840();                                /* extern */
s32 func_00C17E10(s8, s32);                         /* extern */
extern char D_003DA424[];
extern char D_003DA428[];
extern char D_003DA4D0[];
extern s8 D_003E9D50;
extern s8 D_003E9D51;
extern s8 D_003E9D52;
extern s8 D_003E9D53;

u32 func_002C50F0(u32 arg0, u32 arg1, s8 arg2, s32 arg3, s32 arg4) {
    u32 spA0;
    s32 temp_s7;
    s32 temp_s7_2;
    s32 temp_v1;
    s32 var_s2;
    s8 temp_s0;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a1;
    u32 temp_s1;
    u32 temp_s1_2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s1_2;
    u32 var_s4;
    u32 var_v0;
    u32 var_v0_2;

    var_s4 = arg1;
    temp_v1 = arg2 & 0xFF;
    spA0 = -1U;
    temp_s7 = temp_v1 & 0x1F;
    temp_s0 = (temp_v1 >> 5) & 1;
    var_s2 = 0;
    if ((func_00C17E10(temp_s0, temp_s7) & 0xFF) == 0xFF) {
        var_v0 = -1U;
    } else {
        temp_s1 = func_00C137F0();
        temp_a0 = func_00C13840();
        D_003E9D53 = 0xFF;
        D_003E9D50 = arg2;
        D_003E9D52 = 0;
        var_v0 = func_00C12FD0(temp_a0, temp_s1, (*(s32 *)D_003DA428), 1);
        if (var_v0 == -1U) {
            var_v0 = temp_s1;
        }
    }
    if (var_v0 < var_s4) {
        var_s4 = var_v0;
    }
    if ((func_00C17E10(temp_s0 & 0xFF, temp_s7 & 0xFF) & 0xFF) == 0xFF) {
        var_s1 = -1U;
    } else {
        temp_s1_2 = func_00C13840();
        temp_a1 = func_00C137F0();
        D_003E9D53 = 0xFF;
        D_003E9D50 = arg2;
        D_003E9D52 = 0;
        var_v0_2 = func_00C12FD0(temp_s1_2, temp_a1, (*(s32 *)D_003DA424), 1);
        if (var_v0_2 == -1U) {
            var_v0_2 = temp_s1_2;
        }
        var_s1 = var_v0_2;
    }
    var_s1_2 = (arg0 >= var_s1) ? arg0 : var_s1;
    if (var_s1_2 < var_s4) {
        temp_s7_2 = (*(s32 *)D_003DA4D0);
loop_15:
        if ((func_002C4960(var_s1_2, arg2) == arg3) && (var_s2 += 1, (var_s2 == arg4))) {
            spA0 = var_s1_2;
        } else {
            temp_a0_2 = func_00C137C0(var_s1_2);
            D_003E9D53 = 0xFF;
            D_003E9D51 = temp_s0;
            D_003E9D52 = 0;
            temp_v0 = func_00C12FD0(temp_a0_2, var_s4, temp_s7_2, 1);
            var_s1_2 = temp_v0;
            if (temp_v0 != -1U) {
                if (temp_v0 >= var_s4) {

                } else {
                    goto loop_15;
                }
            }
        }
    }
    return spA0;
}
