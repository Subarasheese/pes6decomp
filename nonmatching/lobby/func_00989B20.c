/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008214E0();                                /* extern */
s32 func_0082B6B0();                                /* extern */
s32 func_00832280();                                /* extern */
M2C_UNK func_00969BE0();                            /* extern */
s32 func_00969C00();                                /* extern */
extern char D_008A5F70[];
extern char D_008A5F72[];
extern char D_00A7D780[];
extern char D_00A7D790[];

void func_00989B20(void) {
    s16 *var_a0;
    s16 *var_a0_2;
    s16 *var_a0_3;
    s16 *var_a0_4;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;

    temp_s1 = func_00832280();
    temp_s0 = func_0082B6B0();
    if ((temp_s1 != 0) || (temp_s0 != 0)) {
        if (func_008214E0() != 0) {
            func_00969BE0();
            goto block_4;
        }
    } else {
block_4:
        temp_v0 = func_00969C00();
        switch (temp_v0) {                          /* irregular */
        case 1:
        case 3:
            if (temp_s0 != 0) {
                var_a1 = 2;
                (*(s16 *)D_008A5F72) = 0xB;
                if (2 < 5) {
                    var_a0 = ((void *)D_008A5F70) + (2 * 2);
                    do {
                        var_a1 += 1;
                        *var_a0 = 0;
                        var_a0 += 2;
                    } while (var_a1 < 5);
                    return;
                }
            } else if (temp_s1 != 0) {
                (*(s32 *)D_00A7D780) = 0;
                (*(s32 *)D_00A7D790) = 0;
                var_a1_2 = 2;
                (*(s16 *)D_008A5F72) = 2;
                if (2 < 5) {
                    var_a0_2 = ((void *)D_008A5F70) + (2 * 2);
                    do {
                        var_a1_2 += 1;
                        *var_a0_2 = 0;
                        var_a0_2 += 2;
                    } while (var_a1_2 < 5);
                    return;
                }
            } else {
                var_a1_3 = 2;
                (*(s16 *)D_008A5F72) = 2;
                if (2 < 5) {
                    var_a0_3 = ((void *)D_008A5F70) + (2 * 2);
                    do {
                        var_a1_3 += 1;
                        *var_a0_3 = 0;
                        var_a0_3 += 2;
                    } while (var_a1_3 < 5);
                    return;
                }
            case 0:
                return;
            }
            break;
        case 2:
            var_a1_4 = 2;
            (*(s16 *)D_008A5F72) = 0xC;
            if (2 < 5) {
                var_a0_4 = ((void *)D_008A5F70) + (2 * 2);
                do {
                    var_a1_4 += 1;
                    *var_a0_4 = 0;
                    var_a0_4 += 2;
                } while (var_a1_4 < 5);
            }
            break;
        }
    }
}
