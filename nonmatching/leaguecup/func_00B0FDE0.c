/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002EC8A0(s32, s32);                    /* extern */
M2C_UNK func_002ECB10(s32, s32, M2C_UNK);           /* extern */
s32 func_00B0C370(s32);                             /* extern */
s32 func_00B0C3D0(s32);                             /* extern */
s32 func_00B0C430(s32, s32);                        /* extern */
s32 func_00B0C770();                                /* extern */
void *func_00B0CD50();                              /* extern */

void func_00B0FDE0(s32 arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s3;
    void *temp_v0;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != NULL) {
        temp_a1 = arg0 & 0xFF;
        if (temp_a1 < (s32) M2C_FIELD(temp_v0, u8 *, 0xDF8)) {
            func_002EC8A0(M2C_FIELD(temp_v0, s32 *, 8), temp_a1);
            temp_s0 = func_00B0C3D0(arg0) & 0xFF;
            var_s3 = 0;
            if (temp_s0 > 0) {
                do {
                    temp_s2 = func_00B0C430(arg0, var_s3) & 0xFFFF;
                    if (temp_s2 == (func_00B0C770() & 0xFFFF)) {
                        func_002ECB10(M2C_FIELD(temp_v0, s32 *, 8), temp_s2, 1);
                    } else if ((M2C_FIELD(temp_v0, s32 *, 0x141C) != 0) && (func_00B0C370(temp_s2) == 1)) {
                        func_002ECB10(M2C_FIELD(temp_v0, s32 *, 8), temp_s2, 1);
                    } else {
                        func_002ECB10(M2C_FIELD(temp_v0, s32 *, 8), temp_s2, 0);
                    }
                    var_s3 = (var_s3 + 1) & 0xFF;
                } while (var_s3 < temp_s0);
            }
        }
    }
}
