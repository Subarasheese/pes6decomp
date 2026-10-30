/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00209C60(s32, M2C_UNK);                /* extern */
M2C_UNK func_0020A250(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0020A380(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0020A540(s32);                         /* extern */
extern s32 D_003EA8E0;
extern char D_00591C09[];

void func_00957990(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s32 temp_s1_7;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s1;

    if (D_003EA8E0 != 0) {
        func_00209C60(D_003EA8E0, 2);
        var_s1 = 0;
        do {
            temp_s0 = var_s1 & 0xFFFF;
            func_0020A380(D_003EA8E0, 1, temp_s0);
            func_0020A380(D_003EA8E0, 2, temp_s0);
            var_s1 = (var_s1 + 1) & 0xFFFF;
        } while (var_s1 < 0x39);
        if ((*(u8 *)D_00591C09) != 0xE) {
            func_00209C60(D_003EA8E0, 2);
            var_s0 = 0x39;
            do {
                temp_s1 = var_s0 & 0xFFFF;
                func_0020A380(D_003EA8E0, 1, temp_s1);
                func_0020A380(D_003EA8E0, 2, temp_s1);
                var_s0 = (var_s0 + 1) & 0xFFFF;
            } while (var_s0 < 0x40);
            func_00209C60(D_003EA8E0, 2);
            var_s0_2 = 0x40;
            do {
                temp_s1_2 = var_s0_2 & 0xFFFF;
                func_0020A380(D_003EA8E0, 1, temp_s1_2);
                func_0020A380(D_003EA8E0, 2, temp_s1_2);
                var_s0_2 = (var_s0_2 + 1) & 0xFFFF;
            } while (var_s0_2 < 0xCC);
            func_00209C60(D_003EA8E0, 2);
            var_s0_3 = 0xFE;
            do {
                temp_s1_3 = var_s0_3 & 0xFFFF;
                func_0020A380(D_003EA8E0, 1, temp_s1_3);
                func_0020A380(D_003EA8E0, 2, temp_s1_3);
                var_s0_3 = (var_s0_3 + 1) & 0xFFFF;
            } while (var_s0_3 < 0x10E);
        } else {
            func_00209C60(D_003EA8E0, 2);
            var_s0_4 = 0xCC;
            do {
                temp_s1_4 = var_s0_4 & 0xFFFF;
                func_0020A380(D_003EA8E0, 1, temp_s1_4);
                func_0020A380(D_003EA8E0, 2, temp_s1_4);
                var_s0_4 = (var_s0_4 + 1) & 0xFFFF;
            } while (var_s0_4 < 0xDD);
        }
        func_00209C60(D_003EA8E0, 2);
        var_s0_5 = 0x112;
        do {
            temp_s1_5 = var_s0_5 & 0xFFFF;
            func_0020A380(D_003EA8E0, 1, temp_s1_5);
            func_0020A380(D_003EA8E0, 2, temp_s1_5);
            var_s0_5 = (var_s0_5 + 1) & 0xFFFF;
        } while (var_s0_5 < 0x119);
        func_00209C60(D_003EA8E0, 2);
        var_s0_6 = 0x119;
        do {
            temp_s1_6 = var_s0_6 & 0xFFFF;
            switch (temp_s1_6) {                    /* irregular */
            case 0x122:
                break;
            case 0x120:
            case 0x11F:
                func_0020A380(D_003EA8E0, 1, temp_s1_6);
                break;
            default:
                func_0020A380(D_003EA8E0, 1, temp_s1_6);
                func_0020A380(D_003EA8E0, 2, temp_s1_6);
                break;
            }
            var_s0_6 = (var_s0_6 + 1) & 0xFFFF;
        } while (var_s0_6 < 0x128);
        func_00209C60(D_003EA8E0, 2);
        var_s0_7 = 0;
        do {
            temp_s1_7 = var_s0_7 & 0xFFFF;
            func_0020A250(D_003EA8E0, 1, temp_s1_7);
            func_0020A250(D_003EA8E0, 2, temp_s1_7);
            var_s0_7 = (var_s0_7 + 1) & 0xFFFF;
        } while (var_s0_7 < 0x73);
        func_0020A540(D_003EA8E0);
        D_003EA8E0 = 0;
    }
}
