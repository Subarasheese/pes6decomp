/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001E7C30(void *arg0) {
    s32 temp_a1;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_a4_2;
    u32 *temp_a2;
    u32 *temp_a2_2;
    u64 temp_v1;

    if (arg0 != NULL) {
        temp_v1 = (u64) ((s64) arg0 << 0x20) >> 0x20;
        M2C_FIELD(arg0, u32 *, 8) = (u32) ((s64) ((M2C_FIELD(arg0, u32 *, 8) + temp_v1) << 0x20) >> 0x20);
        var_a4 = 0;
        if ((s32) M2C_FIELD(arg0, u8 *, 0) > 0) {
            var_a3 = 0;
            do {
                var_a4 += 1;
                temp_a2 = M2C_FIELD(arg0, u32 *, 8) + var_a3;
                *temp_a2 = (u32) ((s64) ((temp_v1 + *temp_a2) << 0x20) >> 0x20);
                var_a3 += 4;
            } while (var_a4 < (s32) M2C_FIELD(arg0, u8 *, 0));
        }
        temp_a1 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_a1 != 0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) ((s64) ((((u64) ((s64) temp_a1 << 0x20) >> 0x20) + temp_v1) << 0x20) >> 0x20);
            var_a3_2 = 0;
            if ((s32) M2C_FIELD(arg0, u8 *, 0) > 0) {
                var_a4_2 = 0;
                do {
                    var_a3_2 += 1;
                    temp_a2_2 = M2C_FIELD(arg0, s32 *, 4) + var_a4_2;
                    *temp_a2_2 = (u32) ((s64) ((temp_v1 + *temp_a2_2) << 0x20) >> 0x20);
                    var_a4_2 += 4;
                } while (var_a3_2 < (s32) M2C_FIELD(arg0, u8 *, 0));
            }
        }
    }
}
