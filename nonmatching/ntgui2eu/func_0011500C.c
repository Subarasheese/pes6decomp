/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B130(s32);                         /* extern */
extern s32 D_006024AC;
extern char D_011C79B0[];

void func_0011500C(void *arg0) {
    s32 temp_v0;

    temp_v0 = D_006024AC;
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(), 8)();
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        M2C_FIELD(((void *)D_011C79B0), s32 *, 4) = (s32) (M2C_FIELD(((void *)D_011C79B0), s32 *, 4) - 1);
    }
    if (temp_v0 != 0) {
        func_0019B130(temp_v0);
        D_006024AC = 0;
    }
}
