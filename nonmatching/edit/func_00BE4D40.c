/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00222E80(int, int, u16);
s32 func_00BC59F0(u16, s32, M2C_UNK);               /* extern */
s32 func_00BC5DF0(u16, s32, M2C_UNK);               /* extern */
s32 func_00BE4E10(u16, s32, s32, s32);              /* extern */
s32 func_00BF4480(M2C_UNK);                         /* extern */
s32 func_00BF5890(M2C_UNK);                         /* extern */
M2C_UNK func_00C04330();                            /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */
extern M2C_UNK func_00BE55D0;

s32 func_00BE4D40(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    u16 temp_s1;
    u16 temp_s3;

    temp_s3 = func_00BF4480(1) & 0xFFFF;
    temp_v0 = func_00BF5890(0);
    temp_s1 = M2C_FIELD(arg0, u16 *, 8);
    temp_s0 = func_00BC5DF0(temp_s1, temp_v0 & 0xFF, 0) & 0xFFFF;
    if (func_00BE4E10(temp_s3, temp_s0, func_00BC59F0(temp_s1, temp_v0 & 0xFF, 0) & 0xFF, temp_v0) == 0) {
        func_00222E80((s32) temp_s1, temp_v0 & 0xFF, temp_s3);
    }
    func_00C04330();
    func_00C1B380(7);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE55D0;
    return 0;
}
