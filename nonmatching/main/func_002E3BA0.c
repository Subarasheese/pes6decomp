/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0020A2A0(s32, s32, s32);
extern void func_001EF900(void *, s8);
extern int func_00209C10(int, int);
s32 func_002E3CD0(void *, s32, s32);                /* extern */

void func_002E3BA0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s3;
    s8 temp_s0_2;
    s8 temp_s0_3;
    void *temp_v0;
    void *temp_v0_2;

    if (arg0 != NULL) {
        if (arg1 != 0xFFFF) {
            M2C_FIELD(arg0, u8 *, 0x10) = 1U;
            temp_v0 = M2C_FIELD(arg0, void **, 0);
            temp_s0 = M2C_FIELD(temp_v0, s32 *, 8);
            temp_s3 = func_00209C10(M2C_FIELD(temp_v0, s32 *, 4), arg1);
            if ((arg2 == 0) && (temp_s3 == M2C_FIELD(arg0, s32 *, 0xC))) {
                temp_s0_2 = M2C_FIELD(arg0, u8 *, 0x10) & M2C_FIELD(arg0, u8 *, 0x11) & 0xFF;
                func_001EF900(M2C_FIELD(arg0, void **, 4), temp_s0_2);
                func_001EF900(M2C_FIELD(arg0, void **, 8), temp_s0_2 & 0xFF & M2C_FIELD(arg0, u8 *, 0x12) & 0xFF);
                return;
            }
            temp_v0_2 = M2C_FIELD(arg0, void **, 0);
            func_0020A2A0(M2C_FIELD(temp_v0_2, s32 *, 4), M2C_FIELD(temp_v0_2, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
            if (func_002E3CD0(arg0, temp_s0, temp_s3) == 0) {
                func_002E3CD0(arg0, temp_s0, 0x6A);
            }
        } else {
            M2C_FIELD(arg0, u8 *, 0x10) = 0U;
            temp_s0_3 = M2C_FIELD(arg0, u8 *, 0x10) & M2C_FIELD(arg0, u8 *, 0x11) & 0xFF;
            func_001EF900(M2C_FIELD(arg0, void **, 4), temp_s0_3);
            func_001EF900(M2C_FIELD(arg0, void **, 8), temp_s0_3 & 0xFF & M2C_FIELD(arg0, u8 *, 0x12) & 0xFF);
        }
    }
}
