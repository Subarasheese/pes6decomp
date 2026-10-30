/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(s32, u16);                        /* extern */
extern char D_005922D6[];

s32 func_0099E300(void *arg0, s32 arg1) {
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x101);
    if ((temp_v0 != 0) && ((temp_v0 & 0xFF) >= (s32) (*(u8 *)D_005922D6)) && ((func_009B30B0(arg1, M2C_FIELD(arg0, u16 *, 0xFE)) & 0xFFFF) < 0x20)) {
        (*(u8 *)D_005922D6) = M2C_FIELD(arg0, u8 *, 0x101);
        return 1;
    }
    return 0;
}
