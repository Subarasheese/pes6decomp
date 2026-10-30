/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_001BB370();                              /* extern */
extern char D_0058D440[];
extern char D_0058D444[];
extern void *D_0058D448;

s32 func_00266240(void) {
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    temp_v0 = func_001BB370();
    if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s32 *, 0x20) == (*(s32 *)D_0058D440)) && (M2C_FIELD(temp_v0, s32 *, 0x24) == (*(s32 *)D_0058D444))) {
        var_s0 = 1;
        D_0058D448 = temp_v0;
    }
    return var_s0;
}
