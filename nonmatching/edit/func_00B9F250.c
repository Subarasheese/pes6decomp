/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002374A0(M2C_UNK, u16);                /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
void *func_00B9C490();                              /* extern */
s32 func_00B9F3E0();                                /* extern */
M2C_UNK func_00B9F590(M2C_UNK);                     /* extern */
s32 func_00BF70A0();                                /* extern */
s32 func_00BF73D0();                                /* extern */
M2C_UNK func_00BF7670(M2C_UNK);                     /* extern */
s32 func_00BF7950();                                /* extern */

s32 func_00B9F250(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;
    u16 temp_a0;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s1 = func_00B9C490();
    var_s3 = 0;
    var_s2 = 0;
    temp_s0 = func_00BF7950() & 0xFFFF;
    temp_v0 = func_00BF70A0();
    if (temp_v0 != 2) {
        if (temp_v0 != 1) {
            if (func_00BF73D0() != 0) {
                var_s2 = func_00B9F3E0();
                func_00B91490(0xF);
                if (M2C_FIELD(temp_s1, s32 *, 0x14) == 0) {
                    func_00BF7670(1);
                }
            } else {
                func_00B91440(0xF);
                if (M2C_FIELD(temp_s1, s32 *, 0x14) == 0) {
                    func_00BF7670(0);
                }
            }
            temp_a0 = func_00BF7950() & 0xFFFF;
            if ((var_s2 == 1) || ((temp_v1 = temp_a0 & 0xFFFF, (temp_v1 != 0xFFFF)) && (temp_v1 != (temp_s0 & 0xFFFF)))) {
                M2C_FIELD(temp_s1, u16 *, 0x3A) = temp_a0;
                func_002374A0(0x126, M2C_FIELD(temp_s1, u16 *, 0x3A));
                func_00B9F590(1);
            }
        } else {
            temp_v0_2 = func_00B9C490();
            if (M2C_FIELD(temp_v0_2, s32 *, 0x14) != 0) {
                M2C_FIELD(temp_v0_2, s32 *, 0x18) = 0;
                M2C_FIELD(temp_v0_2, s32 *, 8) = 4;
                var_s3 = 1;
                M2C_FIELD(temp_v0_2, s32 *, 0x28) = 0x80;
            }
        }
    } else {
        temp_v0_3 = func_00B9C490();
        if (M2C_FIELD(temp_v0_3, s32 *, 0x14) == 0) {
            var_v1 = 5;
        } else {
            var_v1 = 2;
        }
        M2C_FIELD(temp_v0_3, s32 *, 8) = var_v1;
        M2C_FIELD(temp_v0_3, s32 *, 0x28) = 0x10;
        func_00B91440(0xF);
        var_s3 = 1;
    }
    return var_s3;
}
