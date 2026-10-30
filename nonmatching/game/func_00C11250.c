/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00C11250(s32 arg0) {
    s32 var_t2;
    s32 var_v1;
    u8 *temp_v0;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_a4;
    u8 temp_a5;
    u8 temp_a6;
    u8 temp_a7;
    u8 temp_t0;

    var_t2 = 0;
    if (arg0 != 0) {
        var_v1 = 0;
        do {
            temp_v0 = arg0 + var_v1;
            temp_t0 = M2C_FIELD(temp_v0, u8 *, 0);
            var_v1 += 8;
            temp_a6 = M2C_FIELD(temp_v0, u8 *, 1);
            temp_a7 = M2C_FIELD(temp_v0, u8 *, 2);
            temp_a4 = M2C_FIELD(temp_v0, u8 *, 3);
            temp_a5 = M2C_FIELD(temp_v0, u8 *, 4);
            temp_a3 = M2C_FIELD(temp_v0, u8 *, 5);
            temp_a2 = M2C_FIELD(temp_v0, u8 *, 6);
            temp_a3_2 = M2C_FIELD(temp_v0, u8 *, 7);
            var_t2 = var_t2 + (((s32) temp_t0 >> 4) & 0xFF) + (temp_t0 & 0xF) + (((s32) temp_a6 >> 4) & 0xFF) + (temp_a6 & 0xF) + (((s32) temp_a7 >> 4) & 0xFF) + (temp_a7 & 0xF) + (((s32) temp_a4 >> 4) & 0xFF) + (temp_a4 & 0xF) + (((s32) temp_a5 >> 4) & 0xFF) + (temp_a5 & 0xF) + (((s32) temp_a3 >> 4) & 0xFF) + (temp_a3 & 0xF) + (((s32) temp_a2 >> 4) & 0xFF) + (temp_a2 & 0xF) + (((s32) temp_a3_2 >> 4) & 0xFF) + (temp_a3_2 & 0xF);
        } while (var_v1 < 0x18);
    }
    return (f32) var_t2;
}
