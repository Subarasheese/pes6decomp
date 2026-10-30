/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
s32 func_00236BA0(s32, u8);                         /* extern */
extern s32 D_003E77B4;

void func_0098D520(s32 arg0) {
    s32 var_v1;
    u8 temp_a1;
    void *temp_a0;

    if ((func_00226710() & 0xFF) != 6) {
        var_v1 = func_00236BA0(arg0, M2C_FIELD((((arg0 & 0xFF) * 0xC) + D_003E77B4), u8 *, 0x4AB6)) & 0xFF;
    } else {
        var_v1 = 1;
    }
    temp_a0 = ((arg0 & 0xFF) * 0xC) + D_003E77B4;
    temp_a1 = M2C_FIELD(temp_a0, u8 *, 0x4AB6);
    if (((s32) temp_a1 < (s32) M2C_FIELD(temp_a0, u8 *, 0x4ABA)) && ((var_v1 & 0xFF & 0xFF) == 1)) {
        M2C_FIELD(temp_a0, u8 *, 0x4AB6) = (u8) (temp_a1 + 1);
    }
}
