/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00C036F0(void *, s32, s32, s32);

s32 func_00C03470(void *arg0) {
    u16 *p;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        p = (u16 *)((u8 *)M2C_FIELD(arg0, void **, 0xC) + 0x18);
        if (*p == 0) {
            if ((func_00C036F0(arg0, 0x154, 0x1CA, 2) & 0xFF) == 1) {
                p = (u16 *)((u8 *)M2C_FIELD(arg0, void **, 0xC) + 0x18);
                *p = *p + 1;
                return 1;
            }
        }
    }
    return 0;
}
