/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E9A04;
extern char D_00537B50[];
extern char D_00537B54[];
extern M2C_UNK func_00216990;
extern M2C_UNK func_00217AA0;
extern M2C_UNK func_00218020;

s32 func_002169D0(void *arg0) {
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_a2_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xBC);
    var_v1 = 0;
    if (temp_v0 != 0) {
        if (temp_v0 >= 4) {
            var_v1 = 2;
        } else {
            var_v1 = 1;
        }
    }
    switch (var_v1) {                               /* irregular */
    default:
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
        D_003E9A04 += 1;
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC8);
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (temp_v0_2 + 0x20);
        }
        var_a2 = M2C_FIELD(arg0, s32 **, 0xA8);
        var_a4 = 0;
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xAC);
        temp_a0 = *var_a2;
        var_a3 = 0;
        if (temp_a0 != temp_v1) {
            var_a1 = var_a2;
            do {
                var_a1 += 4;
                var_a4 += 1;
            } while (*var_a1 != temp_v1);
        }
        if (temp_a0 != &func_00218020) {
            do {
                var_a2 += 4;
                var_a3 += 1;
            } while (*var_a2 != &func_00218020);
        }
block_24:
        var_v0 = var_a3 - var_a4;
block_25:
        return var_v0;
    case 1:
        var_a2_2 = M2C_FIELD(arg0, s32 **, 0xA8);
        var_a4 = 0;
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0xAC);
        temp_a0_2 = *var_a2_2;
        var_a3 = 0;
        if (temp_a0_2 != temp_v1_2) {
            var_a1_2 = var_a2_2;
            do {
                var_a1_2 += 4;
                var_a4 += 1;
            } while (*var_a1_2 != temp_v1_2);
        }
        if (temp_a0_2 != &func_00217AA0) {
            do {
                var_a2_2 += 4;
                var_a3 += 1;
            } while (*var_a2_2 != &func_00217AA0);
        }
        goto block_24;
    case 2:
        var_a4_2 = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = -0x78;
        var_a2_3 = M2C_FIELD(arg0, s32 **, 0xA8);
        temp_v1_3 = M2C_FIELD(arg0, s32 *, 0xAC);
        temp_a0_3 = *var_a2_3;
        var_a3_2 = 0;
        if (temp_a0_3 != temp_v1_3) {
            var_a1_3 = var_a2_3;
            do {
                var_a1_3 += 4;
                var_a4_2 += 1;
            } while (*var_a1_3 != temp_v1_3);
        }
        if (temp_a0_3 != &func_00216990) {
            do {
                var_a2_3 += 4;
                var_a3_2 += 1;
            } while (*var_a2_3 != &func_00216990);
        }
        var_v0 = var_a3_2 - var_a4_2;
        if ((*(s32 *)D_00537B50) == 0) {
            (*(s32 *)D_00537B50) = 1;
            (*(s32 *)D_00537B54) = -0x78;
            goto block_25;
        }
        return var_v0;
    }
}
