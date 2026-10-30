/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_0021EE40(M2C_UNK);                          /* extern */
extern char D_00CE35B0[];

s32 func_00B94A90(s32 arg0) {
    s32 temp_v1;
    u8 var_v0;
    void *var_a1;

    temp_v1 = arg0 & 0xFFFF;
    var_a1 = NULL;
    if ((temp_v1 >= 0x40) && (temp_v1 < 0xCC)) {
        var_a1 = (*(s32 *)D_00CE35B0) + (((temp_v1 - 0x40) & 0xFFFF) * 0x58) + 0xB6364;
    }
    if (var_a1 == NULL) {
        var_v0 = func_0021EE40(0);
    } else {
        var_v0 = M2C_FIELD(var_a1, u8 *, 0x51);
    }
    return var_v0 & 0xFF;
}
