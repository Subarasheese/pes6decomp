/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00192438(void);
s64 func_00101F28(void) {
    s64 var_v0;
    void *temp_v0;

    temp_v0 = func_00192438();
    var_v0 = 1;
    if (M2C_FIELD(temp_v0, s32 *, 8) == 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0) != 1) {
            return 0;
        }
        var_v0 = (s64) ((((u64) *(u64 *)0x12001000 >> 0xD) & 1) << 0x20) >> 0x20;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
