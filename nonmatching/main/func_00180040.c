/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern int func_0014AD10(void *, s32, u32, void *);
M2C_UNK func_0017F4D0(void *, M2C_UNK);
M2C_UNK func_0017F560(void *, s32, u32);
M2C_UNK func_001C4730(s32, void *, u32);

void func_00180040(void *arg0) {
    u64 sp48;
    u8 *s0;
    u8 *s1;

    s0 = M2C_FIELD(arg0, u8 **, 0x60);
    s1 = s0 + 0x20;
    if (M2C_FIELD(s0, u8 *, 2) != 1) {
        func_0017F560(arg0, 1, M2C_FIELD(s0, u32 *, 4));
        func_001C4730(M2C_FIELD(arg0, s32 *, 0x64), s1, M2C_FIELD(s0, u32 *, 4));
    } else {
        func_0017F560(arg0, 1, M2C_FIELD(s0, u32 *, 8));
        sp48 = M2C_FIELD(s0, u32 *, 8);
        func_0014AD10(s1, M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(s0, u32 *, 4), &sp48);
    }
    func_0017F4D0(arg0, 0);
}
