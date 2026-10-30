/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001DABD0(void **arg0) {
    s32 var_a4;
    s32 var_a5;
    s64 var_v1;
    s64 var_v1_2;
    s64 var_v1_3;
    s64 var_v1_4;
    u32 temp_a0_2;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u64 temp_a0;
    void *temp_a1;
    void *var_a2;
    void *var_a3;

    temp_a1 = *arg0;
    var_a4 = 0;
    var_a3 = M2C_FIELD(temp_a1, void **, 8);
    if (0 < 3) {
        temp_a0 = (u64) ((s64) temp_a1 << 0x20) >> 0x20;
        do {
            var_a2 = M2C_FIELD(var_a3, void **, 8);
            var_a5 = 0;
            if ((s32) M2C_FIELD(var_a3, u16 *, 0) > 0) {
                do {
                    temp_v1 = M2C_FIELD(var_a2, u32 *, 4);
                    if (temp_v1 != 0) {
                        var_v1 = temp_v1 - temp_a0;
                    } else {
                        var_v1 = 0;
                    }
                    var_a5 += 1;
                    M2C_FIELD(var_a2, u32 *, 4) = (u32) ((s64) (var_v1 << 0x20) >> 0x20);
                    var_a2 += 8;
                } while (var_a5 < (s32) M2C_FIELD(var_a3, u16 *, 0));
            }
            temp_v1_2 = M2C_FIELD(var_a3, u32 *, 4);
            if (temp_v1_2 != 0) {
                var_v1_2 = temp_v1_2 - temp_a0;
            } else {
                var_v1_2 = 0;
            }
            M2C_FIELD(var_a3, u32 *, 4) = (u32) ((s64) (var_v1_2 << 0x20) >> 0x20);
            temp_v1_3 = (u32) M2C_FIELD(var_a3, void **, 8);
            if (temp_v1_3 != 0) {
                var_v1_3 = temp_v1_3 - temp_a0;
            } else {
                var_v1_3 = 0;
            }
            var_a4 += 1;
            M2C_FIELD(var_a3, void **, 8) = (void *) ((s64) (var_v1_3 << 0x20) >> 0x20);
            var_a3 += 0xC;
        } while (var_a4 < 3);
    }
    temp_a0_2 = (u32) M2C_FIELD(temp_a1, void **, 8);
    if (temp_a0_2 != 0) {
        var_v1_4 = temp_a0_2 - ((u64) ((s64) temp_a1 << 0x20) >> 0x20);
    } else {
        var_v1_4 = 0;
    }
    M2C_FIELD(temp_a1, void **, 8) = (void *) ((s64) (var_v1_4 << 0x20) >> 0x20);
}
