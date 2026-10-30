/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B695D0(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00972D60(s32, M2C_UNK, s8);            /* extern */
M2C_UNK func_009737C0(s32, s8);                     /* extern */

void func_00B6A950(s8 arg0) {
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_00B695D0();
    var_s0 = temp_v0;
    if (temp_v0 != 0) {
        var_s1 = 0;
        do {
            func_00972D60(M2C_FIELD(var_s0, s32 *, 0x3318), 0, arg0);
            func_009737C0(M2C_FIELD(var_s0, s32 *, 0x331C), arg0);
            func_009737C0(M2C_FIELD(var_s0, s32 *, 0x3320), arg0);
            func_001D7D60(M2C_FIELD(var_s0, void **, 0x3324), arg0);
            func_001D7D60(M2C_FIELD(var_s0, void **, 0x3328), arg0);
            var_s1 += 1;
            var_s0 += 0x24;
        } while (var_s1 < 0x17);
    }
}
