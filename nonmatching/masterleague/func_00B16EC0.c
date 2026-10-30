/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
M2C_UNK func_00B22310(s32);                         /* extern */
M2C_UNK func_00B223A0(s32);                         /* extern */
M2C_UNK func_00B22420(s32, s32);                    /* extern */

void func_00B16EC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_s5;

    temp_s0 = arg2 & 0xFFFF;
    temp_s3 = func_00225820() & 0xFF;
    if (temp_s0 != 0) {
        func_00B22420(arg0, -temp_s0);
        temp_s3_2 = temp_s3 & 0xFF;
        temp_s4 = arg0 & 0xFF;
        if (temp_s3_2 == temp_s4) {
            func_00B223A0(temp_s0);
        }
        temp_s5 = arg3 & 0xFFFF;
        if (temp_s5 != 0) {
            if (temp_s3_2 == temp_s4) {
                func_00B22420(arg0, temp_s5);
                func_00B22310(temp_s5);
            }
            if (temp_s3_2 == (arg1 & 0xFF)) {
                func_00B22420(arg1, temp_s5);
                func_00B22310(temp_s5);
            }
        }
        func_00B22420(arg1, temp_s0);
        if (temp_s3_2 == (arg1 & 0xFF)) {
            func_00B22310(temp_s0);
        }
    }
}
