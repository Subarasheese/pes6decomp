/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CB2418[];

void func_00BD4730(void **arg0) {
    s32 var_v0;

    var_v0 = 0;
loop_1:
    if ((s32) *(((u8 *)D_00CB2418) + ((var_v0 & 0xFF) * 2)) < M2C_FIELD(*arg0, s32 *, 0x1C)) {
        var_v0 += 1;
        if (var_v0 < 6) {
            goto loop_1;
        }
    }
}
