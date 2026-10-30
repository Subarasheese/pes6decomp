/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0014AD10(int, int, int, void *);
M2C_UNK func_0017F4D0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0017F560(M2C_UNK, u32);                /* extern */
M2C_UNK func_001C4730(s32, void *, u32);            /* extern */

void func_00180040(void *arg0) {
    s64 sp48;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = M2C_FIELD(arg0, void **, 0x60);
    temp_s1 = temp_s0 + 0x20;
    if (M2C_FIELD(temp_s0, u8 *, 2) != 1) {
        func_0017F560(1, M2C_FIELD(temp_s0, u32 *, 4));
        func_001C4730(M2C_FIELD(arg0, s32 *, 0x64), temp_s1, M2C_FIELD(temp_s0, u32 *, 4));
    } else {
        func_0017F560(1, M2C_FIELD(temp_s0, u32 *, 8));
        sp48 = (s64) M2C_FIELD(temp_s0, u32 *, 8);
        func_0014AD10((s32) temp_s1, M2C_FIELD(arg0, s32 *, 0x64), (s32) M2C_FIELD(temp_s0, u32 *, 4), &sp48);
    }
    func_0017F4D0(arg0, 0);
}
