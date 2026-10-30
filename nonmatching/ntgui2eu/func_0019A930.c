/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0019A5A0(u32);
M2C_UNK func_0019A4A8(void *);                      /* extern */

void func_0019A930(void *arg0, u32 arg1) {
    u32 temp_s1;

    temp_s1 = func_0019A5A0(arg1);
    func_0019A4A8(arg0);
    if (M2C_FIELD(arg0, u32 *, 0x30) != 0xFFFFFFFF) {
        M2C_FIELD(arg0, u32 *, 0x30) = temp_s1;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0xC) | 0x105);
}
