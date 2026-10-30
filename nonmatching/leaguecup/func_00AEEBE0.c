/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD44;

s32 func_00AEEBE0(s32 arg0) {
    s32 var_a0;
    void *var_a1;

    var_a1 = D_003EAD44;
    if (var_a1 != NULL) {
        var_a0 = 0;
loop_5:
        if ((arg0 & 0xFFFF) != M2C_FIELD(var_a1, u16 *, 0x218C)) {
            var_a0 += 1;
            var_a1 += 2;
            if (var_a0 >= 0x20) {
                return 1;
            }
            goto loop_5;
        }
        return 0;
    }
    return 0;
}
