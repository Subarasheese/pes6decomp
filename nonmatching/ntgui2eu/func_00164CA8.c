/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00164CA8(s32 arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s64 var_a1;
    u32 temp_a0;
    u32 var_a1_2;
    u64 temp_a0_2;
    u64 var_v1;

    temp_a1 = arg0 >> 8;
    temp_v1 = arg0 & 0xFF;
    temp_a0 = temp_a1 - 0x81;
    if (temp_a0 < 0x1FU) {
        var_a1_2 = temp_a0;
        goto block_4;
    }
    var_a1_2 = temp_a1 - 0xC1;
    if ((u32) (temp_a1 - 0xE0) >= 0x10U) {
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return -1;
    }
block_4:
    temp_a0_2 = temp_v1 - 0x40;
    var_a1 = var_a1_2 * 2;
    if (temp_a0_2 < 0x3FU) {
        var_v1 = temp_a0_2;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return (s64) ((((u64) (var_a1 << 0x20) >> 0x18) + ((u64) (var_v1 << 0x20) >> 0x20) + 0x2121) << 0x20) >> 0x20;
    }
    if ((u32) (temp_v1 - 0x80) >= 0x1FU) {
        var_v1 = temp_v1 - 0x9F;
        var_a1 += 1;
        if (var_v1 < 0x5EU) {
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return (s64) ((((u64) (var_a1 << 0x20) >> 0x18) + ((u64) (var_v1 << 0x20) >> 0x20) + 0x2121) << 0x20) >> 0x20;
        }
        return -1;
    }
    var_v1 = temp_v1 - 0x41;
    return (s64) ((((u64) (var_a1 << 0x20) >> 0x18) + ((u64) (var_v1 << 0x20) >> 0x20) + 0x2121) << 0x20) >> 0x20;
}
