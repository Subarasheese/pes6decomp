/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
s32 func_00B6B880(s32);                             /* extern */

s32 func_00B6B790(s32 arg0, s64 arg1, s64 arg2, void *arg3) {
    s32 var_s0;
    s64 temp_v0;
    s64 temp_v1;

    var_s0 = 0;
    if ((arg0 & 0xFF) >= 0x20) {
        return 0;
    }
    if (arg3 != NULL) {
        func_001D7D60(arg3, 0);
        if (func_00B6B880(arg0) == 1) {
            temp_v1 = (s64) (arg2 << 0x30) >> 0x30;
            temp_v0 = (s64) (arg1 << 0x30) >> 0x30;
            if (temp_v0 >= temp_v1) {
                if (temp_v1 < temp_v0) {
                    func_001D7D60(arg3, 1);
                    func_001D7D80(arg3, 0);
                    var_s0 = 1;
                }
            } else {
                func_001D7D60(arg3, 1);
                func_001D7D80(arg3, 1);
                var_s0 = -1;
            }
        }
        return var_s0;
    }
    return 0;
}
