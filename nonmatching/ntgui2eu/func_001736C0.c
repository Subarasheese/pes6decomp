/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00165B00(s64);                             /* extern */
s32 func_00167BB8(s32, u32, s64, void (*)(s64));    /* extern */
M2C_UNK func_00173718(s64, M2C_UNK);                /* extern */

void func_001736C0(M2C_UNK arg0, s64 arg1) {
    s64 temp_s0;

    temp_s0 = (s64) (arg1 << 0x20) >> 0x20;
    func_00173718(temp_s0, 1);
    M2C_FIELD(temp_s0, s32 *, 0xC90) = func_00167BB8(func_00165B00(temp_s0), M2C_FIELD(temp_s0, u32 *, 0x604), temp_s0, func_001736C0);
}
