/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0011087C(void);
M2C_UNK func_001AE624(s32, s32, s32, s32, s32);     /* extern */
extern char D_0044AA50[];
extern void *D_0060245C;

void func_001107C0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_v0;

    temp_a3 = (arg0 + 1) * 4;
    temp_a4 = arg0 * 4;
    temp_v0 = M2C_FIELD(((void *)D_0044AA50), s32 *, 0x10) - arg0;
    if (temp_v0 > 0) {
        temp_a0 = M2C_FIELD(D_0060245C, s32 *, 0x54);
        func_001AE624(temp_a4 + temp_a0, temp_a3 + temp_a0, (temp_v0 - 1) * 4, temp_a3, temp_a4);
        M2C_FIELD(((void *)D_0044AA50), s32 *, 0x10) = (s32) (M2C_FIELD(((void *)D_0044AA50), s32 *, 0x10) - 1);
        func_0011087C();
        return;
    }
    func_0011087C();
}
