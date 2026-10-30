/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BCF890(s32, M2C_UNK, s32);           /* extern */

void func_00B93070(s32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;

    switch (arg0) {                                 /* irregular */
    case 3:
        var_s1 = 0;
        var_s0 = 0x12;
        do {
            func_00BCF890(var_s1, 1, var_s0);
            var_s0 += 1;
            var_s1 += 1;
        } while (var_s0 < 0x17);
        if (var_s1 < 0x12) {
            do {
                func_00BCF890(var_s1, 7, 8);
                var_s1 += 1;
            } while (var_s1 < 0x12);
            return;
        }
        return;
    case 2:
        var_s0_2 = 0;
        do {
            func_00BCF890(var_s0_2, 1, var_s0_2);
            var_s0_2 += 1;
        } while (var_s0_2 < 0x12);
        return;
    case 1:
        var_s1_2 = 0;
        var_s0_3 = 0x11;
        do {
            func_00BCF890(var_s1_2, 0, var_s0_3);
            var_s0_3 += 1;
            var_s1_2 += 1;
        } while (var_s0_3 < 0x1D);
        func_00BCF890(var_s1_2, 4, 0);
        var_s1_3 = var_s1_2 + 1;
        if (var_s1_3 < 0x12) {
            do {
                func_00BCF890(var_s1_3, 7, 8);
                var_s1_3 += 1;
            } while (var_s1_3 < 0x12);
            return;
        }
        break;
    case 0:
        func_00BCF890(0, 3, 0);
        var_s1_4 = 1;
        var_s0_4 = 0;
        do {
            func_00BCF890(var_s1_4, 0, var_s0_4);
            var_s1_4 += 1;
            var_s0_4 += 1;
        } while (var_s1_4 < 0x12);
        return;
    case 4:
        var_s0_5 = 0;
        do {
            func_00BCF890(var_s0_5, 2, var_s0_5);
            temp_a0 = var_s0_5 + 1;
            var_s0_5 = temp_a0;
        } while (temp_a0 < 0xC);
        var_s0_6 = temp_a0 + 1;
        func_00BCF890(temp_a0, 5, 0);
        if (var_s0_6 < 0x12) {
            do {
                func_00BCF890(var_s0_6, 7, 8);
                var_s0_6 += 1;
            } while (var_s0_6 < 0x12);
        }
        break;
    }
}
