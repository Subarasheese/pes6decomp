/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017FFA0(int);
extern void func_0017FC80(s32);
extern void func_0017FD00(s32);
extern u32 func_0017ECA0(s32);
M2C_UNK func_0017EDD0(u32, M2C_UNK);                /* extern */

void func_00180120(void) {
    u32 temp_v0;

loop_1:
    temp_v0 = func_0017ECA0(1);
    if (temp_v0 != 0) {
        func_0017EDD0(temp_v0, 2);
        if (M2C_FIELD(temp_v0, u8 *, 0x86) == 0) {
            do {
                M2C_FIELD(temp_v0, M2C_UNK (**)(u32), 0x78)(temp_v0);
            } while (M2C_FIELD(temp_v0, u8 *, 0x85) == 2);
        }
        if (M2C_FIELD(temp_v0, u8 *, 0x85) == 1) {
            func_0017EDD0(temp_v0, 0);
        } else {
            func_0017EDD0(temp_v0, 3);
        }
        func_0017FFA0(1);
        func_0017FC80(1);
        func_0017FD00(0);
        goto loop_1;
    }
    func_0017FFA0(1);
    func_0017FC80(1);
    func_0017FD00(0);
    goto loop_1;
}
