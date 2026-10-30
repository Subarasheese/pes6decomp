/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
s32 func_00226710();                                /* extern */
s32 func_00229010(s32);                             /* extern */
s32 func_00230410();                                /* extern */
s32 func_00234580(s32, s32);                        /* extern */
s32 func_00236F70(s32, s32, s32);                   /* extern */
M2C_UNK func_00B21620(s32, s32, s32, s32);          /* extern */
extern s16 D_003EAE14;
extern s16 D_003EAE18;
extern s16 D_003EAE1C;

void func_00B220F0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_s6;

    if (func_00230410() == 1) {
        temp_a0 = func_00226710() & 0xFF;
        if ((temp_a0 != 0x22) && (temp_a0 != 0x1E) && (temp_a0 != 0x25) && (temp_a0 != 0x24) && (temp_a0 != 0x20) && (temp_a0 != 0x1C)) {
            D_003EAE1C = 0;
            D_003EAE18 = 0;
            D_003EAE14 = 0;
            return;
        }
        temp_s2 = func_00229010(arg1) & 0xFF;
        if (temp_s2 != (func_00225820() & 0xFF)) {
            var_s4 = func_00229010(arg2) & 0xFF;
            func_00229010(arg1);
            var_s2 = arg2 & 0xFF;
            var_s1 = arg1 & 0xFF;
        } else {
            var_s4 = func_00229010(arg1) & 0xFF;
            func_00229010(arg2);
            var_s1 = arg2 & 0xFF;
            var_s2 = arg1 & 0xFF;
        }
        if ((var_s4 & 0xFF) != 0xFF) {
            temp_s0 = func_00229010(func_00234580(arg0, arg1)) & 0xFF;
            if (temp_s0 != 0xFF) {
                var_s4_2 = 0;
                var_s5 = 0;
                var_s6 = 0;
                do {
                    var_s4_2 = (var_s4_2 + func_00236F70(var_s2, arg0, var_s6 & 0xFF)) & 0xFF;
                    temp_v0 = var_s5 + func_00236F70(var_s1, arg0, var_s6 & 0xFF);
                    var_s6 += 1;
                    var_s5 = temp_v0 & 0xFF;
                } while (var_s6 < 2);
                func_00B21620(var_s4_2, var_s5, temp_s0, var_s4_2);
            } else {
                D_003EAE1C = 0;
                D_003EAE18 = 0;
                D_003EAE14 = 0;
            }
        } else {
            D_003EAE1C = 0;
            D_003EAE18 = 0;
            D_003EAE14 = 0;
        }
    }
}
