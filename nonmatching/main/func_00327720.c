/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00333710(void *, s32);
s16 func_0030DAF0(M2C_UNK);                         /* extern */
M2C_UNK func_00325100(s32, void *, s32, s32);       /* extern */
extern char D_005922E8[];

s32 func_00327720(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_v0;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = arg0 + ((arg3 & 0xFF) * 0x3C);
    temp_s0 = temp_v0 + 0x50;
    M2C_FIELD(temp_s0, s16 *, 0x24) = func_0030DAF0(0);
    temp_s1 = arg3 & 0xFF;
    M2C_FIELD(temp_s0, s16 *, 0x26) = func_0030DAF0(1);
    temp_v0_2 = func_00333710(arg1, temp_s1);
    if ((*(u8 *)D_005922E8) == 0) {
        if (temp_v0_2 < 0xE) {
            if (temp_v0_2 != 0xD) {
                var_v0 = 2;
            } else {
                var_v0 = 3;
            }
        } else {
            var_v0 = 1;
        }
    } else {
        var_v0 = 4;
    }
    M2C_FIELD(temp_v0, s32 *, 0x50) = var_v0;
    M2C_FIELD(temp_s0, u8 *, 0x28) = (u8) M2C_FIELD(temp_s0, u8 *, 0x29);
    func_00325100(arg0, arg1, arg2, temp_s1);
    return 1;
}
