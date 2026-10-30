/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_00224310();                                /* extern */
M2C_UNK func_00224CA0(s32, s32, s32);               /* extern */
M2C_UNK func_00931B90(s32, s32);                    /* extern */
M2C_UNK func_0094CE20(s32, s32);                    /* extern */
M2C_UNK func_0094CF00(s32, s32);                    /* extern */
M2C_UNK func_0094E4A0(s32, s32);                    /* extern */
M2C_UNK func_009782E0(s32);                         /* extern */
M2C_UNK func_00978600(s32);                         /* extern */

void func_00B04550(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = arg0 & 0xFF;
    if (temp_s2 < 0x50) {
        temp_s1 = arg1 & 0xFF;
        if (temp_s1 < 0x20) {
            func_00224CA0(arg0, func_00224310() & 0xFF, arg2);
            temp_s0 = func_00225820() & 0xFF;
            if ((temp_s2 < 0x50) && (temp_s1 < 0x20)) {
                func_009782E0(arg2);
                if (temp_s2 == (temp_s0 & 0xFF)) {
                    func_00978600(arg1);
                }
                func_00931B90(arg0, arg1 & 0xFF);
                func_0094E4A0(arg0, arg1);
                func_0094CF00(arg0, arg1);
                func_0094CE20(arg0, arg1);
            }
        }
    }
}
