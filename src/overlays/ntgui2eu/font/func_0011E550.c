/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
M2C_UNK func_0011E9C8(s32);
extern char D_011C8A40[];
s32 func_0011E550(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p = (u8 *)D_011C8A40;
    s32 i = 0;
    do {
        if (M2C_FIELD(p, s32 *, 0) == arg0 && i != arg1 && (arg2 != 0 || M2C_FIELD(p, s32 *, 0x18) >= M2C_FIELD(p, s32 *, 8))) {
            if (M2C_FIELD(p, s32 *, 0x10) < arg3) {
                return 0;
            }
            func_0011E9C8(i);
        }
        i++;
        p += 0xB4;
    } while (i < 0x100);
    return 1;
}
