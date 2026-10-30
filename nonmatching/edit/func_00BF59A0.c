/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC5740(u16);                             /* extern */
extern char D_00CE8E20[];

void func_00BF59A0(s32 arg0) {
    s32 var_s1;
    u16 temp_a0;
    void *var_s0;

    var_s1 = 0;
    var_s0 = ((void *)D_00CE8E20) + (arg0 * 0x146C);
    do {
        temp_a0 = M2C_FIELD(var_s0, u16 *, 0x80);
        if (temp_a0 != 0) {
            if (((s32) temp_a0 >= 0xFFFC) && ((s32) temp_a0 < 0x10000)) {
                goto block_5;
            }
            M2C_FIELD(var_s0, s32 *, 0x7C) = (s32) (func_00BC5740(temp_a0) == 0);
        } else {
block_5:
            M2C_FIELD(var_s0, s32 *, 0x7C) = 0;
        }
        var_s1 += 1;
        var_s0 += 0x88;
    } while (var_s1 < 0x25);
}
