/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00CDCD70(void);
s32 func_00CDCCB0();                                /* extern */

s32 func_00CDD170(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_00CDCCB0();
    switch (temp_v0) {                              /* irregular */
    case 2:
        break;
    case 0:
        if ((s32) M2C_FIELD(func_00CDCD70(), u8 *, 0x20) < 4) {
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
