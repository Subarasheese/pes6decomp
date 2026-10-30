/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u64 func_00102CD0(M2C_UNK);                         /* extern */
s32 func_00109CA8();                                /* extern */
M2C_UNK func_00109D28(u64);                         /* extern */
extern s32 D_006020D4;

void func_001039C8(s32 *arg0) {
    s64 var_s1;
    u64 temp_s0;

    var_s1 = 0;
    temp_s0 = func_00102CD0(0);
    if (func_00109CA8() != 0) {
        func_00109D28(temp_s0);
        D_006020D4 = 1;
    } else {
        var_s1 = (s64) (((temp_s0 >> 0x10) & 0xFFFF) << 0x20) >> 0x20;
        if (D_006020D4 != 0) {
            if (var_s1 == 0) {
                D_006020D4 = 0;
            } else {
                var_s1 = 0;
            }
        }
    }
    *arg0 = (s32) var_s1;
}
