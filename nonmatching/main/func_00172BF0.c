/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void LSC_CallStatFunc(void);
M2C_UNK func_00172060(void *, s32, s32, s32, s32);  /* extern */

void func_00172BF0(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    void *temp_v0;

    var_s2 = 0;
    var_s3 = 0;
    var_s4 = 0;
    var_s5 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        if (M2C_FIELD(arg0, s8 *, 3) == 1) {
            temp_v0 = arg0 + (M2C_FIELD(arg0, s32 *, 0x20) << 5) + 0x38;
            var_s5 = M2C_FIELD(temp_v0, s32 *, 0x14);
            var_s4 = M2C_FIELD(temp_v0, s32 *, 0x10);
            var_s3 = M2C_FIELD(temp_v0, s32 *, 4);
            var_s2 = M2C_FIELD(temp_v0, s32 *, 0xC);
        }
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x20) + 1;
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
        M2C_FIELD(arg0, s32 *, 0x24) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_a0 - (((s32) ((temp_a0 < 0) ? (M2C_FIELD(arg0, s32 *, 0x20) + 0x10) : temp_a0) >> 4) * 0x10));
        if (temp_v1 <= 0) {
            LSC_CallStatFunc();
            M2C_FIELD(arg0, s8 *, 1) = 1;
        }
        if ((s8) (u8) M2C_FIELD(arg0, s8 *, 3) == 1) {
            func_00172060(arg0, var_s3, var_s2, var_s4, var_s5);
        }
    }
}
