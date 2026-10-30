/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
s32 func_00BD95C0();                                /* extern */
extern M2C_UNK func_00304650;
extern M2C_UNK func_003052D0;

s32 func_00304930(void *arg0) {
    s32 var_a1;
    void *temp_a0;
    void *var_v1;

    if (func_00BD95C0() == 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(temp_a0, s32 *, 0x48) = 0;
        M2C_FIELD(temp_a0, s32 *, 8) = 0;
        M2C_FIELD(temp_a0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_a0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_a0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_a0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_a0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_a0, s32 *, 0x20) = 0;
        M2C_FIELD(temp_a0, s32 *, 0x24) = 0;
        M2C_FIELD(temp_a0, s32 *, 0) = 0;
        if (0 < 8) {
            var_a1 = 0;
            var_v1 = temp_a0;
loop_6:
            if (M2C_FIELD(var_v1, s32 *, 8) != 0) {
                var_a1 += 1;
                var_v1 += 4;
                if (var_a1 >= 8) {

                } else {
                    goto loop_6;
                }
            } else {
                M2C_FIELD(((var_a1 * 4) + temp_a0), M2C_UNK **, 8) = &func_00304650;
                M2C_FIELD(temp_a0, s32 *, 0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0) + 1);
            }
        }
        func_00305E60(arg0, (s32) &func_003052D0);
        return 1;
    }
    return 0;
}
