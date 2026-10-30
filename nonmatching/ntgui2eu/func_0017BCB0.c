/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0017BCB0(void *arg0) {
    s32 temp_a4;
    s32 temp_v0_2;
    s32 temp_v1;
    u32 var_t2;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1_2;
    void *var_a7;
    void *var_t0;
    void *var_t1;

    var_t2 = 0;
    temp_v0 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0x1C60) + 0x970);
    var_t1 = temp_v0 + 0x70;
    var_t0 = temp_v0 + 0x1310;
    var_a7 = temp_v0 + 0x9C0;
    do {
        temp_v1 = ((s32) (var_t2 + (var_t2 >> 0x1F)) >> 1) * 2;
        temp_v0_2 = var_t2 - temp_v1;
        temp_v1_2 = arg0 + ((var_t2 - temp_v1) * 4);
        temp_a4 = temp_v0_2 + 2;
        temp_a0 = arg0 + ((temp_v0_2 + 1) * 4);
        M2C_FIELD(var_t1, u8 *, 0) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x930);
        var_t2 += 1;
        temp_a1 = arg0 + (temp_a4 * 4);
        M2C_FIELD(var_t1, u8 *, 1) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x931);
        M2C_FIELD(var_t1, u8 *, 2) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x932);
        M2C_FIELD(var_t1, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_v1_2, u8 *, 0x933)) / 255);
        var_t1 += 0x20;
        M2C_FIELD(var_a7, u8 *, 0) = (u8) M2C_FIELD(temp_a0, u8 *, 0x930);
        M2C_FIELD(var_a7, u8 *, 1) = (u8) M2C_FIELD(temp_a0, u8 *, 0x931);
        M2C_FIELD(var_a7, u8 *, 2) = (u8) M2C_FIELD(temp_a0, u8 *, 0x932);
        M2C_FIELD(var_a7, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a0, u8 *, 0x933)) / 255);
        var_a7 += 0x20;
        M2C_FIELD(var_t0, u8 *, 0) = (u8) M2C_FIELD(temp_a1, u8 *, 0x930);
        M2C_FIELD(var_t0, u8 *, 1) = (u8) M2C_FIELD(temp_a1, u8 *, 0x931);
        M2C_FIELD(var_t0, u8 *, 2) = (u8) M2C_FIELD(temp_a1, u8 *, 0x932);
        M2C_FIELD(var_t0, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a1, u8 *, 0x933)) / 255);
        var_t0 += 0x20;
    } while (var_t2 < 0x4AU);
}
