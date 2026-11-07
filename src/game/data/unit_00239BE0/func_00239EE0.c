/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_0022C1E0(s32);
s32 func_00231240(void);

void func_00239EE0(s32 id, s32 i, u8 v) {
    u8 *p = func_0022C1E0(id);

    if (func_00231240() == 1) {
        return;
    }
    if (p != NULL && (u8)i < 0x60) {
        p[(u8)i + 0xC4] = v;
    }
}
