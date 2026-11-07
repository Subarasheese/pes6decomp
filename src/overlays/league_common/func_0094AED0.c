/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002260A0();                                /* extern */
s32 func_00230100();                                /* extern */
s32 func_0094B600(s32, s32);                        /* extern */

struct B {
    u8 a : 1;
    u8 b : 3;
    u8 c : 4;
};

s32 func_0094AED0(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_00230100();
    temp_v0 = func_002260A0();
    if (temp_v0 == 0) {
        return 0;
    }
    {
        temp_a1 = func_0094B600(arg1, arg2) & 0xFFFF;
        if (temp_a1 <= 0x3FF) {
        switch (arg3 & 0xFF) {
        case 0:
            return M2C_FIELD((temp_v0 + (temp_a1 * 0x1A) + (temp_s1 * 4)), struct B *, 0x19B2A).c & 0xFF;
        case 1:
            return M2C_FIELD((temp_v0 + (temp_a1 * 0x1A) + (temp_s1 * 4)), struct B *, 0x19B2A).b & 0xFF;
        case 2:
            return M2C_FIELD((temp_v0 + (temp_a1 * 0x1A) + (temp_s1 * 4)), struct B *, 0x19B2A).a;
        default:
            return 0;
        }
        }
        return 0;
    }
}
