/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A5A08(s32);                             /* extern */
extern char D_012073C0[];

s32 func_001A6680(u32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;

    temp_s0 = (arg0 >> 8) * 0x10;
    if (((s32) arg0 < 0) || ((arg0 ^ M2C_FIELD(temp_s0, s32 *, 4)) & 0xFF)) {
        return 0x80008002;
    }
    temp_v0 = func_001A5A08(M2C_FIELD(temp_s0, s32 *, 4));
    if (temp_v0 == 0) {
        temp_v1 = (*(s32 *)D_012073C0);
        (*(s32 *)D_012073C0) = temp_s0;
        M2C_FIELD(temp_s0, s32 *, 0) = temp_v1;
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
    }
    return temp_v0;
}
