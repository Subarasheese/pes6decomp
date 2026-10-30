/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A2638(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_001A2B18(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_005B3700[];
extern char D_005FCD48[];
extern char D_005FCD50[];
extern char D_005FCD58[];
extern char D_011E37A0[];

void func_00156E10(void) {
    s32 temp_v0;

    temp_v0 = func_001A2B18(((void *)D_005FCD48), 0x4807, 0, 0, 0, 0);
    M2C_FIELD(((void *)D_011E37A0), s32 *, 0) = temp_v0;
    if (temp_v0 == 0) {
        if (func_001A2638(((void *)D_005FCD50), ((void *)D_005FCD58), 0, 0, 0) < 0) {
            M2C_FIELD(((void *)D_011E37A0), s32 *, 0) = 1;
        }
    }
    if (M2C_FIELD(((void *)D_011E37A0), u32 *, 0x37A0) < 2U) {
        (*(s32 *)D_005B3700) |= 4;
    }
    if (M2C_FIELD(((void *)D_011E37A0), u32 *, 0x37A0) == -0x13U) {
        M2C_FIELD(((void *)D_011E37A0), u32 *, 0x37A0) = 3U;
    }
}
