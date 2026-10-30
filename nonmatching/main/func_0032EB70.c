/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005EFFA0[];
extern char D_005EFFA8[];

void func_0032EB70(u32 arg0) {
    s32 temp_a4_2;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 var_a2;
    u32 *temp_v1;
    u32 *var_v1;
    u32 temp_a4;
    u32 temp_a4_3;
    u32 temp_a5_2;
    u32 temp_a6_2;
    u32 temp_a6_3;
    u32 temp_a7_2;
    u32 temp_a7_3;
    u32 temp_t0_2;
    u32 temp_t0_3;
    u32 temp_t1_2;
    u32 temp_t1_3;
    u32 temp_t2_2;
    u32 temp_t2_3;
    u32 temp_t3;
    u32 temp_t3_2;

    var_a2 = 1;
    (*(u32 *)D_005EFFA8) = arg0;
    var_v1 = ((void *)D_005EFFA8) + 4;
    do {
        temp_a4 = M2C_FIELD(var_v1, u32 *, -4);
        temp_t2 = var_a2 + 1;
        temp_t1 = var_a2 + 2;
        temp_t0 = var_a2 + 3;
        temp_a7 = var_a2 + 4;
        temp_a6 = var_a2 + 5;
        temp_a5 = var_a2 + 6;
        temp_a4_2 = var_a2 + 7;
        temp_t3 = var_a2 + ((temp_a4 ^ (temp_a4 >> 0x1E)) * 0x6C078965);
        M2C_FIELD(var_v1, u32 *, 0) = temp_t3;
        var_a2 += 8;
        temp_t3_2 = temp_t2 + ((temp_t3 ^ (temp_t3 >> 0x1E)) * 0x6C078965);
        M2C_FIELD(var_v1, u32 *, 4) = temp_t3_2;
        temp_t2_2 = temp_t1 + ((temp_t3_2 ^ (temp_t3_2 >> 0x1E)) * 0x6C078965);
        M2C_FIELD(var_v1, u32 *, 8) = temp_t2_2;
        temp_t1_2 = temp_t0 + ((temp_t2_2 ^ (temp_t2_2 >> 0x1E)) * 0x6C078965);
        M2C_FIELD(var_v1, u32 *, 0xC) = temp_t1_2;
        temp_t0_2 = temp_a7 + ((temp_t1_2 ^ (temp_t1_2 >> 0x1E)) * 0x6C078965);
        M2C_FIELD(var_v1, u32 *, 0x10) = temp_t0_2;
        temp_a7_2 = temp_a6 + ((temp_t0_2 ^ (temp_t0_2 >> 0x1E)) * 0x6C078965);
        M2C_FIELD(var_v1, u32 *, 0x14) = temp_a7_2;
        temp_a6_2 = temp_a5 + ((temp_a7_2 ^ (temp_a7_2 >> 0x1E)) * 0x6C078965);
        M2C_FIELD(var_v1, u32 *, 0x18) = temp_a6_2;
        M2C_FIELD(var_v1, s32 *, 0x1C) = (s32) (temp_a4_2 + ((temp_a6_2 ^ (temp_a6_2 >> 0x1E)) * 0x6C078965));
        var_v1 += 0x20;
    } while (var_a2 < 0x268);
    temp_v1 = &(((void *)D_005EFFA8))[var_a2];
    temp_t2_3 = M2C_FIELD(temp_v1, u32 *, -4);
    temp_t1_3 = var_a2 + ((temp_t2_3 ^ (temp_t2_3 >> 0x1E)) * 0x6C078965);
    M2C_FIELD(temp_v1, u32 *, 0) = temp_t1_3;
    temp_t0_3 = var_a2 + 1 + ((temp_t1_3 ^ (temp_t1_3 >> 0x1E)) * 0x6C078965);
    M2C_FIELD(temp_v1, u32 *, 4) = temp_t0_3;
    temp_a7_3 = var_a2 + 2 + ((temp_t0_3 ^ (temp_t0_3 >> 0x1E)) * 0x6C078965);
    M2C_FIELD(temp_v1, u32 *, 8) = temp_a7_3;
    temp_a6_3 = var_a2 + 3 + ((temp_a7_3 ^ (temp_a7_3 >> 0x1E)) * 0x6C078965);
    M2C_FIELD(temp_v1, u32 *, 0xC) = temp_a6_3;
    temp_a5_2 = var_a2 + 4 + ((temp_a6_3 ^ (temp_a6_3 >> 0x1E)) * 0x6C078965);
    M2C_FIELD(temp_v1, u32 *, 0x10) = temp_a5_2;
    temp_a4_3 = var_a2 + 5 + ((temp_a5_2 ^ (temp_a5_2 >> 0x1E)) * 0x6C078965);
    M2C_FIELD(temp_v1, u32 *, 0x14) = temp_a4_3;
    M2C_FIELD(temp_v1, s32 *, 0x18) = (s32) (var_a2 + 6 + ((temp_a4_3 ^ (temp_a4_3 >> 0x1E)) * 0x6C078965));
    M2C_FIELD(((void *)D_005EFFA0), s32 *, 0x9C8) = 1;
    M2C_FIELD(((void *)D_005EFFA0), s32 *, 0) = 1;
}
