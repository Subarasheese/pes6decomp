/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017FD00(s32);
extern u32 func_0017ECA0(s32);
extern void func_0017FC80(s32);
M2C_UNK func_0017EDD0(u32, M2C_UNK);                /* extern */
extern s32 D_003E9870;

void func_0017FEF0(void) {
    u32 temp_v0;

loop_1:
    temp_v0 = func_0017ECA0(3);
    if (temp_v0 != 0) {
        D_003E9870 = 1;
        M2C_FIELD(temp_v0, M2C_UNK (**)(u32), 0x7C)(temp_v0);
        D_003E9870 = 0;
        if (M2C_FIELD(temp_v0, s32 *, 0x80) != 0) {
            func_0017EDD0(temp_v0, 4);
            D_003E9870 = 0;
            func_0017FC80(2);
            func_0017FD00(1);
        } else {
            func_0017EDD0(temp_v0, 0);
            D_003E9870 = 0;
            func_0017FD00(1);
        }
        goto loop_1;
    }
    D_003E9870 = 0;
    func_0017FC80(2);
    func_0017FD00(1);
    goto loop_1;
}
