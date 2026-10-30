/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017FD00(s32);
extern u32 func_0017ECA0(s32);
M2C_UNK func_0017EDD0(u32, M2C_UNK);                /* extern */

void func_001812D0(void) {
    u32 temp_v0;

loop_1:
    temp_v0 = func_0017ECA0(4);
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, M2C_UNK (**)(s32), 0x80) != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x48) = (s32) M2C_FIELD(temp_v0, s32 *, 0x54);
            M2C_FIELD(temp_v0, s32 *, 0x4C) = (s32) M2C_FIELD(temp_v0, s32 *, 0x64);
            M2C_FIELD(temp_v0, s32 *, 0x50) = (s32) M2C_FIELD(temp_v0, s32 *, 0x6C);
            M2C_FIELD(temp_v0, M2C_UNK (**)(s32), 0x80)(temp_v0 + 8);
        }
        func_0017EDD0(temp_v0, 0);
        func_0017FD00(2);
        goto loop_1;
    }
    func_0017FD00(2);
    goto loop_1;
}
