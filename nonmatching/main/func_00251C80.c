/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E9B74;
extern s32 D_003E9B94;
extern char D_005850E0[];

void func_00251C80(s32 arg0) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a2_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a3;
    s32 var_a3_2;

    switch (arg0) {                                 /* irregular */
    case 0:
        var_a3 = 0;
        var_a2 = ((void *)D_005850E0);
        temp_a1 = D_003E9B74 - D_003E9B94;
        D_003E9B94 = temp_a1;
        do {
            if (M2C_FIELD(var_a2, s32 *, 8) >= 0x14) {
                temp_v1 = M2C_FIELD(var_a2, s32 *, 0xB8);
                if (temp_v1 != 0) {
                    M2C_FIELD(var_a2, s32 *, 0xB8) = (s32) (temp_a1 + temp_v1);
                }
            }
            var_a3 += 1;
            var_a2 += 0xD4;
        } while (var_a3 < 4);
        var_a3_2 = 0;
        var_a2_2 = ((void *)D_005850E0);
        do {
            temp_a0 = M2C_FIELD(var_a2_2, s32 *, 8);
            if ((temp_a0 >= 0x11) && (temp_a0 < 0x13)) {
                temp_v1_2 = M2C_FIELD(var_a2_2, s32 *, 0xBC);
                if (temp_v1_2 != 0) {
                    M2C_FIELD(var_a2_2, s32 *, 0xBC) = (s32) (temp_a1 + temp_v1_2);
                }
            }
            var_a3_2 += 1;
            var_a2_2 += 0xD4;
        } while (var_a3_2 < 4);
        return;
    case 1:
        D_003E9B94 = D_003E9B74;
        break;
    }
}
