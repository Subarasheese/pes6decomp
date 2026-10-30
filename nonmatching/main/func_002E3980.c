/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0020A2A0(s32, s32, s32);
extern void func_001EF900(void *, s8);
s32 func_002E3CD0(void *, s32, s32);                /* extern */

void func_002E3980(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_s1;
    s8 temp_s1_2;
    void *temp_v0;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 *, 0x10) = 1U;
        temp_a2 = M2C_FIELD(arg0, s32 *, 0xC);
        if (arg1 != temp_a2) {
            temp_v0 = M2C_FIELD(arg0, void **, 0);
            func_0020A2A0(M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v0, s32 *, 8), temp_a2);
            temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 8);
            if (func_002E3CD0(arg0, temp_s1, arg1) == 0) {
                func_002E3CD0(arg0, temp_s1, 0x6A);
            }
        } else {
            temp_s1_2 = M2C_FIELD(arg0, u8 *, 0x10) & M2C_FIELD(arg0, u8 *, 0x11) & 0xFF;
            func_001EF900(M2C_FIELD(arg0, void **, 4), temp_s1_2);
            func_001EF900(M2C_FIELD(arg0, void **, 8), temp_s1_2 & 0xFF & M2C_FIELD(arg0, u8 *, 0x12) & 0xFF);
        }
    }
}
