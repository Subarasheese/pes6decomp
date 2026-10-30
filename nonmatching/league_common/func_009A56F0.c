/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A84E0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009A3C80();                            /* extern */
M2C_UNK func_009A4C90(s32);                         /* extern */
s32 func_009A63F0(s32, s32);                        /* extern */

s32 func_009A56F0(void) {
    s32 *var_a0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    u32 temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v0 = func_009A84E0();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, void **, 8);
        if (temp_v1 != NULL) {
            temp_s1 = M2C_FIELD(temp_v1, s32 *, 0x10);
            if ((temp_s1 < 3) && (M2C_FIELD(temp_v1, s32 *, 0x14) == 0)) {

            } else {
                temp_s0 = M2C_FIELD(temp_v1, s32 *, 0x14);
                var_a0 = temp_v1 + 0x14;
                var_v0 = temp_s0;
loop_12:
                if (var_v0 == 0) {
                    *var_a0 = temp_s1 - 1;
                } else {
                    *var_a0 -= 1;
                }
                if (func_009A63F0(M2C_FIELD(temp_v0, s32 *, 0xC), M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14)) == 0) {
                    temp_v0_2 = M2C_FIELD(temp_v0, void **, 8);
                    var_a0 = temp_v0_2 + 0x14;
                    var_v0 = M2C_FIELD(temp_v0_2, s32 *, 0x14);
                    if (temp_s0 == var_v0) {

                    } else {
                        goto loop_12;
                    }
                }
                temp_a0 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14);
                if (temp_s0 != temp_a0) {
                    func_009A4C90(temp_a0);
                    func_0026E840(0x8400F802);
                }
                func_009A3C80();
            }
        }
    }
    return 0;
}
