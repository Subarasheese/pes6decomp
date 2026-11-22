/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002F2C70(char *, s32, s32);

void func_002F4D20(char *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_002F2C70(arg0 + (M2C_FIELD(arg0, s8 *, 8) * 0x4A4) + 0xB4, arg1, (s32) M2C_FIELD(arg0, u8 *, 5));
    }
}
