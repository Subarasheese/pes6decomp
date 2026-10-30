/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00987400(void);
extern u32 func_0099BA80(void);
M2C_UNK func_0099B860(M2C_UNK);                     /* extern */
s32 func_0099BA90(M2C_UNK *);                       /* extern */
extern char D_008A5F70[];

s32 func_009878E0(s32 arg0) {
    s16 *temp_s0;
    s16 *var_v1;
    s16 *var_v1_2;
    s16 *var_v1_3;
    s16 *var_v1_4;
    s16 *var_v1_5;
    s16 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a1_2;

    temp_s0 = ((void *)D_008A5F70) + (arg0 * 2);
    temp_v1 = *temp_s0;
    switch (temp_v1) {                              /* irregular */
    case 3:
        var_a1 = arg0 + 1;
        *temp_s0 = 0;
        if (var_a1 < 5) {
            var_v1 = ((void *)D_008A5F70) + (var_a1 * 2);
            do {
                var_a1 += 1;
                *var_v1 = 0;
                var_v1 += 2;
            } while (var_a1 < 5);
        }
        return 1;
    default:
        var_a1_2 = arg0 + 1;
        *temp_s0 = 0;
        if (var_a1_2 < 5) {
            var_v1_2 = ((void *)D_008A5F70) + (var_a1_2 * 2);
            do {
                var_a1_2 += 1;
                *var_v1_2 = 0;
                var_v1_2 += 2;
            } while (var_a1_2 < 5);
        }
        return 1;
    case 0:
        func_00987400();
        func_0099B860(0x161);
        func_0099B860(0x15F);
        func_0099B860(0x15D);
        var_a0 = arg0 + 1;
        *temp_s0 += 1;
        if (var_a0 < 5) {
            var_v1_3 = ((void *)D_008A5F70) + (var_a0 * 2);
            do {
                var_a0 += 1;
                *var_v1_3 = 0;
                var_v1_3 += 2;
            } while (var_a0 < 5);
        }
block_29:
        return 0;
    case 1:
        if (func_0099BA90(((void *)D_008A5F70)) == 1) {
            var_a0_2 = arg0 + 1;
            *temp_s0 += 1;
            if (var_a0_2 < 5) {
                var_v1_4 = ((void *)D_008A5F70) + (var_a0_2 * 2);
                do {
                    var_a0_2 += 1;
                    *var_v1_4 = 0;
                    var_v1_4 += 2;
                } while (var_a0_2 < 5);
            }
        }
        goto block_29;
    case 2:
        if (func_0099BA80() == 1) {
            var_a0_3 = arg0 + 1;
            *temp_s0 += 1;
            if (var_a0_3 < 5) {
                var_v1_5 = ((void *)D_008A5F70) + (var_a0_3 * 2);
                do {
                    var_a0_3 += 1;
                    *var_v1_5 = 0;
                    var_v1_5 += 2;
                } while (var_a0_3 < 5);
            }
        }
        goto block_29;
    }
}
