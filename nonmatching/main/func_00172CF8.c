/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00172A00(void *, s32);                 /* extern */
M2C_UNK func_00172B28(s32, M2C_UNK);                /* extern */
M2C_UNK func_00172BF0(void *, s32);                 /* extern */

void func_00172CF8(void *arg0) {
    s32 temp_a1;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_s2;
    void *temp_s1;

    if ((M2C_FIELD(arg0, s8 *, 4) != 1) && (temp_s2 = M2C_FIELD(arg0, s8 *, 1), (temp_s2 == 2)) && (M2C_FIELD(arg0, s32 *, 0x24) > 0)) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x20);
        temp_s1 = arg0 + 0x10;
        var_v0 = temp_a1 << 5;
        if (M2C_FIELD(((temp_a1 << 5) + temp_s1), s32 *, 0x40) == 1) {
            func_00172B28(temp_a1, 1);
            var_v0 = M2C_FIELD(arg0, s32 *, 0x20) << 5;
        }
        var_v0_2 = M2C_FIELD(arg0, s32 *, 0x20) << 5;
        if (M2C_FIELD((var_v0 + temp_s1), s32 *, 0x40) == temp_s2) {
            func_00172BF0(arg0, M2C_FIELD(arg0, s32 *, 0x20));
            var_v0_2 = M2C_FIELD(arg0, s32 *, 0x20) << 5;
        }
        if (M2C_FIELD((var_v0_2 + temp_s1), s32 *, 0x40) == 0) {
            func_00172A00(arg0, M2C_FIELD(arg0, s32 *, 0x20));
        }
    }
}
