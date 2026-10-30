/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BE5B0(s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00814E80();                            /* extern */
M2C_UNK func_00816CF0(M2C_UNK);                     /* extern */
M2C_UNK func_0081F220();                            /* extern */
M2C_UNK func_0082C130();                            /* extern */
M2C_UNK func_00841EA0(M2C_UNK);                     /* extern */
M2C_UNK func_00880B30();                            /* extern */
M2C_UNK func_0093D7C0();                            /* extern */
M2C_UNK func_0093D8A0();                            /* extern */
M2C_UNK func_0093D950();                            /* extern */
M2C_UNK func_0093DA00();                            /* extern */
M2C_UNK func_0093DAB0();                            /* extern */
M2C_UNK func_0093DB60();                            /* extern */
M2C_UNK func_0093DC40();                            /* extern */
M2C_UNK func_00981280();                            /* extern */
s32 func_00988620(M2C_UNK);                         /* extern */
M2C_UNK func_009FB0C0();                            /* extern */
extern char D_008A5F70[];
extern char D_008A5F72[];
extern char D_008A64B8[];
extern char D_008A64BC[];
extern char D_008AA0E2[];
extern char D_008AA0E8[];
extern char D_008AB4A8[];
extern char D_008AB4AC[];
extern char D_008AB4B0[];
extern char D_008AB4B4[];
extern char D_008AB4B8[];
extern char D_008AB4BC[];
extern char D_008AB4C0[];
extern char D_008AB76C[];

s32 func_00989880(void) {
    s16 *var_v1;
    s16 *var_v1_2;
    s16 *var_v1_3;
    s16 *var_v1_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;

    switch ((*(s16 *)D_008A5F72)) {                           /* irregular */
    case 0:
        func_001BE5B0(0);
        func_0081F220();
        func_001C48E8(((void *)D_008A5F70), 0, 0x5800);
        (*(s32 *)D_008A64B8) = 0x2C;
        (*(s32 *)D_008A64BC) = 0x2C;
        (*(s16 *)D_008AA0E2) = 0xFFFF;
        (*(s16 *)D_008AA0E8) = 0xFFFF;
        (*(s32 *)D_008AB4A8) = 0;
        (*(s32 *)D_008AB4AC) = 0;
        (*(s32 *)D_008AB4B0) = 0;
        (*(s32 *)D_008AB4B4) = 0;
        (*(s32 *)D_008AB4B8) = 0;
        (*(s32 *)D_008AB4BC) = 0;
        (*(s32 *)D_008AB4C0) = 0;
        (*(s32 *)D_008AB76C) = 0;
        func_00841EA0(0xFFFF);
        func_00981280();
        func_00814E80();
        var_a0 = 2;
        (*(s16 *)D_008A5F72) += 1;
        if (2 < 5) {
            var_v1 = ((void *)D_008A5F70) + (2 * 2);
            do {
                var_a0 += 1;
                *var_v1 = 0;
                var_v1 += 2;
            } while (var_a0 < 5);
        }
block_25:
        return 0;
    default:
        var_a0_2 = 2;
        (*(s16 *)D_008A5F72) = 0;
        if (2 < 5) {
            var_v1_2 = ((void *)D_008A5F70) + (2 * 2);
            do {
                var_a0_2 += 1;
                *var_v1_2 = 0;
                var_v1_2 += 2;
            } while (var_a0_2 < 5);
        }
        return 1;
    case 1:
        if (func_00988620(2) == 1) {
            var_a0_3 = 2;
            (*(s16 *)D_008A5F72) += 1;
            if (2 < 5) {
                var_v1_3 = ((void *)D_008A5F70) + (2 * 2);
                do {
                    var_a0_3 += 1;
                    *var_v1_3 = 0;
                    var_v1_3 += 2;
                } while (var_a0_3 < 5);
            }
        }
        goto block_25;
    case 2:
        func_00816CF0(2);
        func_00880B30();
        func_0082C130();
        func_0093DB60();
        func_0093D7C0();
        func_0093D8A0();
        func_0093D950();
        func_0093DA00();
        func_0093DAB0();
        func_0093DC40();
        func_009FB0C0();
        var_a0_4 = 2;
        (*(s16 *)D_008A5F72) = 0;
        if (2 < 5) {
            var_v1_4 = ((void *)D_008A5F70) + (2 * 2);
            do {
                var_a0_4 += 1;
                *var_v1_4 = 0;
                var_v1_4 += 2;
            } while (var_a0_4 < 5);
        }
        return 1;
    }
}
