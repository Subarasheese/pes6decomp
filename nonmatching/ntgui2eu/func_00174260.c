/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00174260(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_a7;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a5;
    s32 var_a6;
    u32 *var_a1;
    u32 temp_v1_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_a3 = M2C_FIELD(arg0, s32 *, 0xB8C);
    var_a6 = 0;
    temp_a7 = (M2C_FIELD(arg0, s32 *, 0xD04) != 0) ? arg1 : 0;
    var_a5 = arg2 - 1;
    var_a1 = M2C_FIELD(arg0, s32 *, 0xB80) + (temp_a3 * 0x24);
    if (arg2 == 0) {
        goto block_12;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xBF0);
    if (temp_a3 == temp_v1) {
        goto block_12;
    }
    if ((u32) *var_a1 < 0x80U) {
        goto loop_8;
    }
    if (temp_a3 >= (temp_v1 - 1)) {
        goto block_12;
    }
block_4:
    temp_v1_2 = *var_a1;
    var_a0 = 1;
    if (temp_v1_2 < 0xE0U) {
        goto loop_7;
    }
    var_a0 = 2;
    if (temp_v1_2 < 0xF0U) {
        goto loop_7;
    }
    var_a0 = (temp_v1_2 > 0xF7U) ? 0 : 3;
loop_7:
    var_a6 += 1;
    var_a0 -= 1;
    temp_v0 = M2C_FIELD(var_a1, s32 *, 4) & 0xAF;
    M2C_FIELD(var_a1, s32 *, 4) = (s32) ((temp_a7 == 0) ? temp_v0 : (temp_v0 | 0x50));
    var_a1 += 0x24;
    M2C_FIELD(arg0, s32 *, 0xB8C) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8C) + 1);
    if (var_a0 != 0) {
        goto loop_7;
    }
loop_8:
    var_a6 += 1;
    var_a5 -= 1;
    temp_v1_3 = M2C_FIELD(var_a1, s32 *, 4) & 0xAF;
    M2C_FIELD(var_a1, s32 *, 4) = (s32) ((temp_a7 == 0) ? temp_v1_3 : (temp_v1_3 | 0x50));
    var_a1 += 0x24;
    temp_v1_4 = M2C_FIELD(arg0, s32 *, 0xB8C) + 1;
    M2C_FIELD(arg0, s32 *, 0xB8C) = temp_v1_4;
    if (var_a5 == -1) {
        goto block_12;
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xBF0);
    if (temp_v1_4 == temp_a0) {
        goto block_12;
    }
    if ((u32) *var_a1 < 0x80U) {
        goto loop_8;
    }
    if (temp_v1_4 < (temp_a0 - 1)) {
        goto block_4;
    }
block_12:
    return var_a6;
}
