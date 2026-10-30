/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
M2C_UNK func_003044E0(void *);                      /* extern */
s32 func_00BDA160();                                /* extern */
s32 func_00BDA260();                                /* extern */
extern M2C_UNK func_00304650;
extern M2C_UNK func_003052D0;

s32 func_00304810(void *arg0) {
    s32 var_a0;
    void *temp_s0;
    void *var_v1;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    if (func_00BDA160() != 0) {
        func_00305E60(arg0, (s32) &func_003052D0);
        M2C_FIELD(temp_s0, s32 *, 0x48) = 0;
        M2C_FIELD(temp_s0, s32 *, 8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x20) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x24) = 0;
        M2C_FIELD(temp_s0, s32 *, 0) = 0;
        if (0 < 8) {
            var_a0 = 0;
            var_v1 = temp_s0;
loop_3:
            if (M2C_FIELD(var_v1, s32 *, 8) != 0) {
                var_a0 += 1;
                var_v1 += 4;
                if (var_a0 >= 8) {

                } else {
                    goto loop_3;
                }
            } else {
                M2C_FIELD(((var_a0 * 4) + temp_s0), M2C_UNK **, 8) = &func_00304650;
                M2C_FIELD(temp_s0, s32 *, 0) = (s32) (M2C_FIELD(temp_s0, s32 *, 0) + 1);
            }
        }
    } else if (func_00BDA260() != 0) {
        M2C_FIELD(temp_s0, s32 *, 8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x20) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x24) = 0;
        M2C_FIELD(temp_s0, s32 *, 0) = 0;
        func_003044E0(temp_s0);
        func_00305E60(arg0, (s32) &func_003052D0);
    }
    return 0;
}
