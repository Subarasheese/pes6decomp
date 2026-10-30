/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001807B0(void *arg0) {
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_v0_7;
    u32 var_a5;
    u32 var_a5_2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    void *temp_a2;
    void *temp_a3;
    void *temp_v0_8;
    void *temp_v1;
    void *var_a2;
    void *var_a3;
    void *var_a6;
    void *var_a7;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x934);
    var_a5 = 1;
    temp_v1 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xF80) + 0x970);
    M2C_FIELD(temp_v1, u8 *, 0x180) = temp_v0;
    temp_a3 = temp_v1 + 0x880;
    M2C_FIELD(temp_v1, u8 *, 0x880) = temp_v0;
    temp_a2 = temp_v1 + 0x180;
    var_a7 = temp_v1 + 0x3F0;
    var_a6 = temp_v1 + 0xAF0;
    temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x935);
    M2C_FIELD(temp_a3, u8 *, 1) = temp_v0_2;
    M2C_FIELD(temp_a2, u8 *, 1) = temp_v0_2;
    temp_v0_3 = M2C_FIELD(arg0, u8 *, 0x936);
    M2C_FIELD(temp_a3, u8 *, 2) = temp_v0_3;
    M2C_FIELD(temp_a2, u8 *, 2) = temp_v0_3;
    temp_lo = (s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(arg0, u8 *, 0x937)) / 255;
    M2C_FIELD(temp_a3, s8 *, 3) = (s8) temp_lo;
    M2C_FIELD(temp_a2, s8 *, 3) = (s8) temp_lo;
    var_a3 = temp_v1 + 0x8A0;
    var_a2 = temp_v1 + 0x1A0;
    do {
        temp_v0_4 = M2C_FIELD(arg0, u8 *, 0x934);
        var_a5 += 1;
        M2C_FIELD(var_a3, u8 *, 0) = temp_v0_4;
        M2C_FIELD(var_a2, u8 *, 0) = temp_v0_4;
        temp_v0_5 = M2C_FIELD(arg0, u8 *, 0x935);
        M2C_FIELD(var_a3, u8 *, 1) = temp_v0_5;
        M2C_FIELD(var_a2, u8 *, 1) = temp_v0_5;
        temp_v0_6 = M2C_FIELD(arg0, u8 *, 0x936);
        M2C_FIELD(var_a3, u8 *, 2) = temp_v0_6;
        M2C_FIELD(var_a2, u8 *, 2) = temp_v0_6;
        temp_lo_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(arg0, u8 *, 0x937)) / 255;
        M2C_FIELD(var_a3, s8 *, 3) = (s8) temp_lo_2;
        M2C_FIELD(var_a2, s8 *, 3) = (s8) temp_lo_2;
        var_a3 += 0x20;
        var_a2 += 0x20;
    } while (var_a5 < 0x13U);
    var_a5_2 = 0;
    do {
        temp_v0_7 = (var_a5_2 - (((s32) (var_a5_2 + (var_a5_2 >> 0x1F)) >> 1) * 2)) + 2;
        var_a5_2 += 1;
        temp_v0_8 = arg0 + (temp_v0_7 * 4);
        temp_v1_2 = M2C_FIELD(temp_v0_8, u8 *, 0x930);
        M2C_FIELD(var_a6, u8 *, 0) = temp_v1_2;
        M2C_FIELD(var_a7, u8 *, 0) = temp_v1_2;
        temp_v1_3 = M2C_FIELD(temp_v0_8, u8 *, 0x931);
        M2C_FIELD(var_a6, u8 *, 1) = temp_v1_3;
        M2C_FIELD(var_a7, u8 *, 1) = temp_v1_3;
        temp_v1_4 = M2C_FIELD(temp_v0_8, u8 *, 0x932);
        M2C_FIELD(var_a6, u8 *, 2) = temp_v1_4;
        M2C_FIELD(var_a7, u8 *, 2) = temp_v1_4;
        temp_lo_3 = (s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_v0_8, u8 *, 0x933)) / 255;
        M2C_FIELD(var_a6, s8 *, 3) = (s8) temp_lo_3;
        M2C_FIELD(var_a7, s8 *, 3) = (s8) temp_lo_3;
        var_a6 += 0x20;
        var_a7 += 0x20;
    } while (var_a5_2 < 0x24U);
}
