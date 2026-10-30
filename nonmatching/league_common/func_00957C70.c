/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_001540C0();                                /* extern */
M2C_UNK func_00209C60(s32, M2C_UNK);                /* extern */
M2C_UNK func_0020A400(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0020A4B0(s32, M2C_UNK, s32);           /* extern */
s32 func_0020A550(M2C_UNK);                         /* extern */
M2C_UNK func_002CB730(s64);                         /* extern */
extern s32 D_003EA8E0;
extern char D_00591C09[];

void func_00957C70(void) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s1_7;
    s32 var_s1_8;
    s64 temp_s0;

    if (D_003EA8E0 == 0) {
        temp_s0 = (s64) (func_001540C0() << 0x38) >> 0x38;
        func_002CB730(5);
        temp_v0 = func_0020A550(0x336);
        D_003EA8E0 = temp_v0;
        func_00209C60(temp_v0, 2);
        var_s1 = 0;
        do {
            func_0020A4B0(D_003EA8E0, 1, var_s1);
            func_0020A4B0(D_003EA8E0, 2, var_s1);
            var_s1 += 1;
        } while (var_s1 < 0x39);
        if ((*(u8 *)D_00591C09) != 0xE) {
            func_00209C60(D_003EA8E0, 2);
            var_s1_2 = 0x39;
            do {
                func_0020A4B0(D_003EA8E0, 1, var_s1_2);
                func_0020A4B0(D_003EA8E0, 2, var_s1_2);
                var_s1_2 += 1;
            } while (var_s1_2 < 0x40);
            func_00209C60(D_003EA8E0, 2);
            var_s1_3 = 0x40;
            do {
                func_0020A4B0(D_003EA8E0, 1, var_s1_3);
                func_0020A4B0(D_003EA8E0, 2, var_s1_3);
                var_s1_3 += 1;
            } while (var_s1_3 < 0xCC);
            func_00209C60(D_003EA8E0, 2);
            var_s1_4 = 0xFE;
            do {
                func_0020A4B0(D_003EA8E0, 1, var_s1_4);
                func_0020A4B0(D_003EA8E0, 2, var_s1_4);
                var_s1_4 += 1;
            } while (var_s1_4 < 0x10E);
        } else {
            func_00209C60(D_003EA8E0, 2);
            var_s1_5 = 0xCC;
            do {
                func_0020A4B0(D_003EA8E0, 1, var_s1_5);
                func_0020A4B0(D_003EA8E0, 2, var_s1_5);
                var_s1_5 += 1;
            } while (var_s1_5 < 0xDD);
        }
        func_00209C60(D_003EA8E0, 2);
        var_s1_6 = 0x112;
        do {
            func_0020A4B0(D_003EA8E0, 1, var_s1_6);
            func_0020A4B0(D_003EA8E0, 2, var_s1_6);
            var_s1_6 += 1;
        } while (var_s1_6 < 0x119);
        func_00209C60(D_003EA8E0, 2);
        var_s1_7 = 0x119;
        do {
            switch (var_s1_7) {                     /* irregular */
            case 0x122:
                break;
            case 0x120:
            case 0x11F:
                func_0020A4B0(D_003EA8E0, 1, var_s1_7);
                break;
            default:
                func_0020A4B0(D_003EA8E0, 1, var_s1_7);
                func_0020A4B0(D_003EA8E0, 2, var_s1_7);
                break;
            }
            var_s1_7 += 1;
        } while (var_s1_7 < 0x128);
        func_00209C60(D_003EA8E0, 2);
        var_s1_8 = 0;
        do {
            func_0020A400(D_003EA8E0, 1, var_s1_8);
            func_0020A400(D_003EA8E0, 2, var_s1_8);
            var_s1_8 += 1;
        } while (var_s1_8 < 0x73);
        func_002CB730(temp_s0);
    }
}
