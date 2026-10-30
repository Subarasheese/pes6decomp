/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0019FD40(void *arg0, s32 arg1) {
    s16 var_a4;
    s16 var_a5;
    s16 var_a6;
    s16 var_a7;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_v1;
    s32 var_a2;
    u32 temp_a4;
    u32 temp_a5;

    temp_a1 = arg1 & 0xFFFF;
    if (temp_a1 >= 0) {
        if (temp_a1 < 0x60) {
            var_a6 = (temp_a1 % 6) + ((((arg1 & 0xFFFF) / 6) + ((u32) temp_a1 >> 0x1F)) * 7);
            var_a7 = var_a6 + 7;
            var_a4 = var_a6 + 1;
            var_a5 = var_a7 + 1;
            goto block_18;
        }
        if (temp_a1 < 0xA0) {
            temp_v1 = temp_a1 - 0x60;
            temp_a3 = temp_v1 % 4;
            var_a2 = temp_v1 >> 2;
            if (temp_v1 < 0) {
                var_a2 = (s32) (temp_v1 + 3) >> 2;
            }
            var_a6 = temp_a3 + (var_a2 * 4) + 0x77;
            var_a7 = var_a6 + 4;
            var_a4 = var_a6 + 1;
            var_a5 = var_a7 + 1;
            if (temp_a3 == 3) {
                var_a4 = var_a2 * 7;
                var_a5 = var_a4 + 7;
            }
            goto block_18;
        }
        if (temp_a1 < 0xB8) {
            temp_a4 = temp_a1 - 0xA0;
            temp_a3_2 = ((temp_a1 - 0xA0) / 6) + (temp_a4 >> 0x1F);
            temp_a1_2 = 5 - ((s32) temp_a4 % 6);
            var_a4 = temp_a3_2 + (temp_a1_2 * 4) + 0xBB;
            var_a6 = var_a4 + 4;
            var_a5 = var_a4 + 1;
            var_a7 = var_a6 + 1;
            if (temp_a1_2 == 5) {
                var_a6 = temp_a3_2 + 0x77;
                var_a7 = var_a6 + 1;
            }
            if (temp_a3_2 == 3) {
                var_a7 = 5 - temp_a1_2;
                var_a5 = var_a7 + 1;
            }
            goto block_18;
        }
        if (temp_a1 < 0xD0) {
            temp_a5 = temp_a1 - 0xB8;
            temp_a3_3 = 3 - (((temp_a1 - 0xB8) / 6) + (temp_a5 >> 0x1F));
            temp_a1_3 = 5 - ((s32) temp_a5 % 6);
            var_a5 = temp_a3_3 + (temp_a1_3 * 4) + 0xD3;
            var_a7 = var_a5 + 4;
            var_a4 = var_a5 + 1;
            var_a6 = var_a7 + 1;
            if (temp_a1_3 == 5) {
                var_a7 = temp_a3_3 + 0xB7;
                var_a6 = var_a7 + 1;
            }
            if (temp_a3_3 == 3) {
                var_a6 = 0x75 - temp_a1_3;
                var_a4 = var_a6 + 1;
            }
block_18:
            if (arg0 != NULL) {
                M2C_FIELD(arg0, s16 *, 0) = var_a7;
                M2C_FIELD(arg0, s16 *, 4) = var_a6;
                M2C_FIELD(arg0, s16 *, 2) = var_a5;
                M2C_FIELD(arg0, s16 *, 6) = var_a4;
            }
        }
    }
}
