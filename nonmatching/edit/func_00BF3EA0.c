/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE8E20[];

void func_00BF3EA0(s32 arg0) {
    s32 temp_a0;
    s32 var_a2;
    s32 var_a3;
    void *temp_a1;

    temp_a1 = ((void *)D_00CE8E20) + (arg0 * 0x146C);
    var_a3 = M2C_FIELD(temp_a1, s32 *, 0x1444);
    var_a2 = M2C_FIELD(temp_a1, s32 *, 0x1448);
    if (var_a3 < (M2C_FIELD(temp_a1, s32 *, 0x144C) - 1)) {
        var_a3 += 1;
        if ((s32) M2C_FIELD((temp_a1 + (var_a3 * 0x88)), u16 *, 0x80) >= 0xFFFC) {
            var_a3 += 1;
        }
        temp_a0 = M2C_FIELD(temp_a1, s32 *, 0x1450);
        if (var_a3 >= (var_a2 + temp_a0)) {
            var_a2 = var_a3 - (temp_a0 - 1);
        }
    }
    M2C_FIELD(temp_a1, s32 *, 0x1444) = var_a3;
    M2C_FIELD(temp_a1, s32 *, 0x1448) = var_a2;
}
