/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C17E10();                                /* extern */
extern char D_00CCAF80[];

u8 func_00C222B0(s32 arg0) {
    s32 temp_a0;
    u8 var_v0;

    temp_a0 = func_00C17E10() & 0xFF;
    var_v0 = 0;
    if (temp_a0 < 0x12) {
        var_v0 = M2C_FIELD((temp_a0 + (((arg0 & 0xFF) * 0x12) + ((void *)D_00CCAF80))), u8 *, 0x98);
    }
    return var_v0;
}
