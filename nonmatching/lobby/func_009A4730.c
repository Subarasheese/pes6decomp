/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099A2F0(s32);                         /* extern */
M2C_UNK func_0099D280(s32);                         /* extern */

void func_009A4730(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s1;
    void *var_s0;

    if (arg0 != NULL) {
        var_s1 = 0;
        if (arg1 > 0) {
            var_s0 = arg0;
            do {
                M2C_FIELD(var_s0, s32 *, 0) = 0;
                M2C_FIELD(var_s0, s32 *, 8) = 0;
                M2C_FIELD(var_s0, s32 *, 0xC) = 0;
                M2C_FIELD(var_s0, s32 *, 0x10) = 0;
                temp_a0 = M2C_FIELD(var_s0, s32 *, 0x14);
                if (temp_a0 != 0) {
                    func_0099A2F0(temp_a0);
                    M2C_FIELD(var_s0, s32 *, 0x14) = 0;
                }
                M2C_FIELD(var_s0, s32 *, 0x18) = 0;
                M2C_FIELD(var_s0, s32 *, 0x1C) = 0;
                temp_a0_2 = M2C_FIELD(var_s0, s32 *, 0x20);
                if (temp_a0_2 != 0) {
                    func_0099A2F0(temp_a0_2);
                    M2C_FIELD(var_s0, s32 *, 0x20) = 0;
                }
                M2C_FIELD(var_s0, s32 *, 0x24) = 0;
                M2C_FIELD(var_s0, s32 *, 0x28) = 0;
                temp_a0_3 = M2C_FIELD(var_s0, s32 *, 0x2C);
                if (temp_a0_3 != 0) {
                    func_0099D280(temp_a0_3);
                    M2C_FIELD(var_s0, s32 *, 0x2C) = 0;
                }
                var_s1 += 1;
                M2C_FIELD(var_s0, s32 *, 0x30) = 0;
                var_s0 += 0x34;
            } while (var_s1 < arg1);
        }
    }
}
