/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001344D0(s32, s32, s32, s32, u32, s32, void *, s32); /* extern */
M2C_UNK func_00136580(s32, s32);                    /* extern */
M2C_UNK func_00136600(s32, s32 *, s32 *, s32 *, s32 *); /* extern */
extern s32 D_003E97A0;

s32 func_00135ED0(M2C_UNK arg0, void *arg1, void *arg2) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 temp_a0;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s2;
    u32 var_s0;
    void *temp_v1;

    temp_a0 = M2C_FIELD(arg2, s32 *, 0x50008);
    var_s0 = M2C_FIELD(arg1, s32 *, 8) + 4;
    temp_v1 = arg2 + temp_a0;
    if (var_s0 >= (u32) temp_v1) {
        var_s0 -= temp_a0;
    }
    var_s2 = temp_v1 - var_s0;
    temp_s3 = M2C_FIELD(arg1, s32 *, 0xC) - 4;
    if (temp_s3 < var_s2) {
        var_s2 = temp_s3;
    }
    func_00136600(D_003E97A0 + 0x53CE30, &sp5C, &sp54, &sp58, &sp50);
    temp_v0 = func_001344D0(sp5C, sp54, sp58, sp50, var_s0, var_s2, arg2, temp_s3 - var_s2);
    func_00136580(D_003E97A0 + 0x53CE30, temp_v0);
    return temp_v0 > 0;
}
