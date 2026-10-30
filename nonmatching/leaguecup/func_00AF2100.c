/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002EC8A0(s32, s32);                    /* extern */
M2C_UNK func_002ECB10(s32, s32, M2C_UNK);           /* extern */
s32 func_00AEE7D0(s32);                             /* extern */
s32 func_00AEEBE0(s32);                             /* extern */
s32 func_00AEEC80(s32);                             /* extern */
s32 func_00AEECE0();                                /* extern */
s32 func_00AEEE00(s32, s32);                        /* extern */
void *func_00AEFF50();                              /* extern */

void func_00AF2100(s32 arg0) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s3;
    s32 var_s4;
    void *temp_v0;

    temp_v0 = func_00AEFF50();
    if (temp_v0 != NULL) {
        temp_a1 = arg0 & 0xFF;
        if (temp_a1 < (s32) M2C_FIELD(temp_v0, u8 *, 0x231C)) {
            func_002EC8A0(M2C_FIELD(temp_v0, s32 *, 4), temp_a1);
            temp_s1 = func_00AEE7D0(arg0) & 0xFF;
            var_s4 = 0;
            if (temp_s1 > 0) {
                do {
                    temp_s3 = func_00AEEE00(arg0, var_s4) & 0xFFFF;
                    if (func_00AEEBE0(temp_s3) == 0) {
                        func_002ECB10(M2C_FIELD(temp_v0, s32 *, 4), temp_s3, 1);
                    } else if ((temp_s3 & 0xFFFF) == (func_00AEECE0() & 0xFFFF)) {
                        func_002ECB10(M2C_FIELD(temp_v0, s32 *, 4), temp_s3, 1);
                    } else if (func_00AEEC80(temp_s3) == 1) {
                        func_002ECB10(M2C_FIELD(temp_v0, s32 *, 4), temp_s3, 1);
                    } else {
                        func_002ECB10(M2C_FIELD(temp_v0, s32 *, 4), temp_s3, 0);
                    }
                    var_s4 = (var_s4 + 1) & 0xFF;
                } while (var_s4 < temp_s1);
            }
        }
    }
}
