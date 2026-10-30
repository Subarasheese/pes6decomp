/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001DDDA0(void **arg0, void *arg1) {
    s32 var_a4;
    s32 var_v1;
    u32 var_a1;
    u32 var_a3;
    u64 temp_a2;

    *arg0 = arg1;
    temp_a2 = (u64) ((s64) arg1 << 0x20) >> 0x20;
    var_v1 = 0;
    M2C_FIELD(arg1, u32 *, 4) = (u32) ((s64) ((M2C_FIELD(arg1, u32 *, 4) + temp_a2) << 0x20) >> 0x20);
    M2C_FIELD(arg1, u32 *, 8) = (u32) ((s64) ((M2C_FIELD(arg1, u32 *, 8) + temp_a2) << 0x20) >> 0x20);
    var_a3 = M2C_FIELD(arg1, u32 *, 4);
    do {
        if (M2C_FIELD(var_a3, u16 *, 0) != 0) {
            M2C_FIELD(var_a3, u32 *, 4) = (u32) ((s64) ((temp_a2 + M2C_FIELD(var_a3, u32 *, 4)) << 0x20) >> 0x20);
            var_a1 = M2C_FIELD(var_a3, u32 *, 4);
            var_a4 = 0;
            if ((s32) M2C_FIELD(var_a3, u16 *, 0) > 0) {
                do {
                    var_a4 += 1;
                    M2C_FIELD(var_a1, u32 *, 0xC) = (u32) ((s64) ((temp_a2 + M2C_FIELD(var_a1, u32 *, 0xC)) << 0x20) >> 0x20);
                    var_a1 += 0x10;
                } while (var_a4 < (s32) M2C_FIELD(var_a3, u16 *, 0));
            }
        }
        var_v1 += 1;
        var_a3 += 8;
    } while (var_v1 < 0x36);
}
