/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00192438(void);
M2C_UNK func_0019B5B0();                            /* extern */
s64 func_0019B640();                                /* extern */

s64 func_00193068(void) {
    s64 temp_a0;
    s64 var_v0;
    void *temp_v0;

    temp_v0 = func_00192438();
    if (M2C_FIELD(temp_v0, s32 *, 8) == 0) {
        func_0019B5B0();
        var_v0 = 1;
        if (M2C_FIELD(temp_v0, s16 *, 0) == 1) {
            return (s64) ((((u64) *(u64 *)0x12001000 >> 0xD) & 1) << 0x20) >> 0x20;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_a0 = (func_0019B640() >> 0xD) & 1;
    var_v0 = 1;
    if (M2C_FIELD(temp_v0, s16 *, 0) == 1) {
        var_v0 = (s64) (temp_a0 << 0x20) >> 0x20;
    }
    return var_v0;
}
