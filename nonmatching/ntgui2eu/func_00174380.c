/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00174380(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a1;
    s32 var_a3;
    s32 var_a4;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    if (M2C_FIELD(arg0, s32 *, 0xD04) != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xB94);
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xB8C);
        var_a4 = temp_v1;
        if (temp_v1 >= temp_a0) {
            var_a4 = temp_a0;
            var_a3 = temp_v1;
        } else {
            var_a3 = temp_a0;
        }
        var_a1 = 0;
        if (var_a4 > 0) {
            do {
                temp_v1_2 = var_a1 * 0x24;
                var_a1 += 1;
                temp_v0 = temp_v1_2 + M2C_FIELD(arg0, s32 *, 0xB80);
                M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) & 0xAF);
            } while (var_a1 < var_a4);
        }
        if (var_a1 < var_a3) {
            do {
                temp_v1_3 = var_a1 * 0x24;
                var_a1 += 1;
                temp_v0_2 = temp_v1_3 + M2C_FIELD(arg0, s32 *, 0xB80);
                M2C_FIELD(temp_v0_2, u8 *, 4) = (s32) (M2C_FIELD(temp_v0_2, u8 *, 4) | 0x50);
            } while (var_a1 < var_a3);
        }
        var_v0 = var_a3 - var_a4;
        if (var_a1 < M2C_FIELD(arg0, s32 *, 0xBF0)) {
            do {
                temp_v1_4 = var_a1 * 0x24;
                var_a1 += 1;
                temp_v0_3 = temp_v1_4 + M2C_FIELD(arg0, s32 *, 0xB80);
                M2C_FIELD(temp_v0_3, s32 *, 4) = (s32) (M2C_FIELD(temp_v0_3, s32 *, 4) & 0xAF);
            } while (var_a1 < M2C_FIELD(arg0, s32 *, 0xBF0));
            var_v0 = var_a3 - var_a4;
        }
        M2C_FIELD(arg0, s32 *, 0xD0C) = var_v0;
    }
}
