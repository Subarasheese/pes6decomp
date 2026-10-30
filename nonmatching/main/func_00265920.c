/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_001BB370();                              /* extern */
s32 func_00265C70(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
extern char D_0058D418[];
extern void *D_0058D41C;

s32 func_00265920(void) {
    s32 temp_s0;
    s32 var_s2;
    void *temp_v0;

    var_s2 = 0;
    temp_v0 = func_001BB370();
    temp_s0 = (*(s32 *)D_0058D418);
    if (temp_s0 == func_00265C70(M2C_FIELD(temp_v0, s32 *, 0x18), 0, 0, 0)) {
        var_s2 = 1;
        D_0058D41C = temp_v0;
    }
    return var_s2;
}
