/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_001AB4A0(s64, s64);                        /* extern */
s64 func_001AB560(s64, s64);                        /* extern */
s64 func_001AB978(s64);                             /* extern */
M2C_UNK func_001ABA60(s64);                         /* extern */

void func_001AAD50(s64 arg0) {
    s64 temp_s0;
    s64 temp_s0_2;
    s64 temp_s2;
    s64 var_s1;
    s64 var_v0;

    var_s1 = arg0;
    if (((u64) ((u64) (-1 << 0xB) >> 0xA) < (u32) (var_s1 + (-1U >> 0xB))) && (var_s1 & 0x7FF)) {
        var_s1 |= 0x800;
    }
    temp_s0 = 0x81E0 << 0x2F;
    temp_s0_2 = (s64) ((var_s1 & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20;
    temp_s2 = func_001AB560(func_001AB560(func_001AB978(var_s1 >> 0x20), temp_s0), temp_s0);
    var_v0 = func_001AB978(temp_s0_2);
    if (temp_s0_2 < 0) {
        var_v0 = func_001AB4A0(var_v0, 0x83E0 << 0x2F);
    }
    func_001ABA60(func_001AB4A0(temp_s2, var_v0));
}
