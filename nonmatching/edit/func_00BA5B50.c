/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
extern void func_002E9370(int);
extern s32 func_0021F170(s32);
extern s32 func_002371A0(s32);
extern u8 func_002374D0(void);
s32 func_0021F710(s32);                             /* extern */
s32 func_0021FA50(s32);                             /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */

s32 func_00BA5B50(s32 arg0) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0;
    void *temp_v0_2;

    var_v0 = 0;
    if ((arg0 >= 0) && (arg0 < 0x1CA)) {
        temp_s2 = func_00C1B460(0) & 0xFFFF;
        temp_s1 = func_0021FA50(temp_s2);
        temp_v0 = func_0021F170(func_00C1B460(0));
        M2C_FIELD(temp_v0, s32 *, 0x3C) = arg0;
        if (func_0017A670(0) == 6) {
            var_v0_2 = func_00C1B460(0);
            goto block_11;
        }
        if (func_002374D0() == 0) {
            var_v0_2 = func_002371A0(0x126);
block_11:
            var_v1 = var_v0_2 & 0xFFFF;
        } else {
            var_v1 = 0x1CA;
        }
        if (M2C_FIELD(temp_v0, s32 *, 0x3C) != var_v1) {
            M2C_FIELD(temp_v0, s8 *, 0x44) = 1;
        } else {
            M2C_FIELD(temp_v0, s8 *, 0x44) = 0;
        }
        if (((temp_s2 & 0xFFFF) != 0x126) && (temp_s1 != M2C_FIELD(temp_v0, s32 *, 0x3C))) {
            func_002E9370(0x40000);
        }
        temp_s2_2 = func_00C1B460(0) & 0xFFFF;
        temp_s1_2 = func_0021F710(temp_s2_2);
        temp_v0_2 = func_0021F170(temp_s2_2);
        M2C_FIELD(temp_v0_2, s32 *, 0x40) = arg0;
        if (func_0017A670(0) == 6) {
            var_v0_3 = func_00C1B460(0) & 0xFFFF;
            goto block_29;
        }
        if (func_002374D0() == 0) {
            var_v0_3 = func_002371A0(0x126) & 0xFFFF;
block_29:
            var_v1_2 = var_v0_3 + 0x33;
        } else {
            var_v1_2 = 0xFF;
        }
        if (M2C_FIELD(temp_v0_2, s32 *, 0x40) != var_v1_2) {
            M2C_FIELD(temp_v0_2, s8 *, 0x45) = 1;
        } else {
            M2C_FIELD(temp_v0_2, s8 *, 0x45) = 0;
        }
        if (((temp_s2_2 & 0xFFFF) != 0x126) && (temp_s1_2 != M2C_FIELD(temp_v0_2, s32 *, 0x40))) {
            func_002E9370(0x40000);
        }
        var_v0 = 1;
    }
    return var_v0;
}
