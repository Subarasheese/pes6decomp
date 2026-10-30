/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00814E50();                                /* extern */
s32 func_00816CB0();                                /* extern */
M2C_UNK func_0081F110();                            /* extern */
s32 func_008225C0(M2C_UNK);                         /* extern */
M2C_UNK func_00857F50();                            /* extern */
s32 func_00880AF0(M2C_UNK);                         /* extern */
M2C_UNK func_00981280(M2C_UNK);                     /* extern */
s32 func_009883F0(M2C_UNK);                         /* extern */
s32 func_00D108C0();                                /* extern */
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

s32 func_00988BC0(void) {
    s16 *var_v1;
    s16 *var_v1_2;
    s16 *var_v1_3;
    s16 *var_v1_4;
    s16 *var_v1_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;

    switch ((*(s16 *)D_008A5F72)) {                           /* irregular */
    default:
        var_a0 = 2;
        (*(s16 *)D_008A5F72) = 0;
        if (2 < 5) {
            var_v1 = ((void *)D_008A5F70) + (2 * 2);
            do {
                var_a0 += 1;
                *var_v1 = 0;
                var_v1 += 2;
            } while (var_a0 < 5);
        }
block_37:
        return 0;
    case 0:
        if (func_008225C0(2) == 1) {
            var_a0_2 = 2;
            (*(s16 *)D_008A5F72) += 1;
            if (2 < 5) {
                var_v1_2 = ((void *)D_008A5F70) + (2 * 2);
                do {
                    var_a0_2 += 1;
                    *var_v1_2 = 0;
                    var_v1_2 += 2;
                } while (var_a0_2 < 5);
            }
        }
        goto block_37;
    case 1:
        if (func_00880AF0(2) != 1) {

        } else if (func_00816CB0() != 1) {

        } else if (func_00D108C0() != 1) {

        } else if (func_00814E50() == 1) {
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
        goto block_37;
    case 2:
        if (func_009883F0(2) == 1) {
            var_a0_4 = 2;
            (*(s16 *)D_008A5F72) += 1;
            if (2 < 5) {
                var_v1_4 = ((void *)D_008A5F70) + (2 * 2);
                do {
                    var_a0_4 += 1;
                    *var_v1_4 = 0;
                    var_v1_4 += 2;
                } while (var_a0_4 < 5);
            }
        }
        goto block_37;
    case 3:
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
        func_00981280(0xFFFF);
        func_0081F110();
        func_00857F50();
        var_a0_5 = 2;
        (*(s16 *)D_008A5F72) = 0;
        if (2 < 5) {
            var_v1_5 = ((void *)D_008A5F70) + (2 * 2);
            do {
                var_a0_5 += 1;
                *var_v1_5 = 0;
                var_v1_5 += 2;
            } while (var_a0_5 < 5);
        }
        return 1;
    }
}
