/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_00BAD1A0(void);
extern void func_00BB3380(s32, s32, s32, s32, s32);

s32 func_00BB2088(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*temp_v0)(s32, s32, s32, s32);

    temp_v0 = M2C_FIELD(func_00BAD1A0(), s32(**)(s32, s32, s32, s32), 0x2C);
    if (temp_v0 == NULL) {
        func_00BB3380(0xA, 0x6A, 0xE, 0, 0);
        return -1;
    }
    return temp_v0(arg0, arg1, arg2, arg3);
}
