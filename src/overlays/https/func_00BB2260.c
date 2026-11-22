/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_00BAD1A0(void);
extern void func_00BB3380(s32, s32, s32, s32, s32);

void func_00BB2260(s32 arg0) {
    M2C_UNK (*temp_v0)(s32);

    temp_v0 = M2C_FIELD(func_00BAD1A0(), M2C_UNK(**)(s32), 0x24);
    if (temp_v0 == NULL) {
        func_00BB3380(0xA, 0x67, 0xE, 0, 0);
        return;
    }
    temp_v0(arg0);
}
