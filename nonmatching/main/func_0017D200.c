/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001454C0();                                /* extern */
M2C_UNK func_0014F8F0(s32, s8 *, s32, M2C_UNK);     /* extern */
void *func_00151440(s32, s32);                      /* extern */

void func_0017D200(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 sp5C;
    s8 sp5D;
    s8 sp5E;
    s8 sp5F;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v0;
    void *temp_s0;
    void *temp_v0_2;

    temp_v0 = func_001454C0();
    temp_s0 = func_00151440(temp_v0, arg2);
    temp_v0_2 = func_00151440(temp_v0, arg3);
    temp_v1 = 0x100 - arg4;
    temp_a1 = (M2C_FIELD(temp_v0_2, u8 *, 0) * temp_v1) + (M2C_FIELD(temp_s0, u8 *, 0) * arg4);
    var_a0 = temp_a1 >> 8;
    if (temp_a1 < 0) {
        var_a0 = (s32) (temp_a1 + 0xFF) >> 8;
    }
    sp5C = (s8) var_a0;
    temp_a1_2 = (M2C_FIELD(temp_v0_2, u8 *, 1) * temp_v1) + (M2C_FIELD(temp_s0, u8 *, 1) * arg4);
    var_a0_2 = temp_a1_2 >> 8;
    if (temp_a1_2 < 0) {
        var_a0_2 = (s32) (temp_a1_2 + 0xFF) >> 8;
    }
    sp5D = (s8) var_a0_2;
    temp_a1_3 = (M2C_FIELD(temp_v0_2, u8 *, 2) * temp_v1) + (M2C_FIELD(temp_s0, u8 *, 2) * arg4);
    var_a0_3 = temp_a1_3 >> 8;
    if (temp_a1_3 < 0) {
        var_a0_3 = (s32) (temp_a1_3 + 0xFF) >> 8;
    }
    sp5E = (s8) var_a0_3;
    temp_v1_2 = (M2C_FIELD(temp_v0_2, u8 *, 3) * temp_v1) + (M2C_FIELD(temp_s0, u8 *, 3) * arg4);
    var_v0 = temp_v1_2 >> 8;
    if (temp_v1_2 < 0) {
        var_v0 = (s32) (temp_v1_2 + 0xFF) >> 8;
    }
    sp5F = (s8) var_v0;
    func_0014F8F0(temp_v0, &sp5C, arg1, 1);
}
