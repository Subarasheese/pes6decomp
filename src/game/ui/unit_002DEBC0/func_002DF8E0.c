/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002E1C50(u8 *, s32);
extern void func_002DF730(u8 *, s32);

void func_002DF8E0(u8 *a0, s32 a1) {
    if (a0 != NULL) {
        s32 i = 0;
        u8 *p = a0;
        for (; i < 2; i++) {
            func_002E1C50(p + 0x28, a1);
            p += 0x24;
        }
        func_002DF730(a0, M2C_FIELD(a0, s32 *, 4));
        a0[0xB] = a1;
    }
}
