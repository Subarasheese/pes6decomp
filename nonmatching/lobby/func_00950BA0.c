/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

u8 func_00950BA0(void) {
    u8 var_v0;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v0 = M2C_FIELD(temp_v0, u8 *, 0x37DC);
        if ((s32) var_v0 < 8) {
            if ((s32) var_v0 < 5) {
                var_v0 = 4;
            }
            return var_v0;
        }
        return 8U;
    }
    return 4U;
}
