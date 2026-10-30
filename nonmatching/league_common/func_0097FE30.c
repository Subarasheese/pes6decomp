/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F2ED0(s32);                         /* extern */
M2C_UNK func_00960F00();                            /* extern */
extern s32 *D_003EA970;

s32 func_0097FE30(void) {
    s32 *temp_s0;

    temp_s0 = D_003EA970;
    if (temp_s0 != NULL) {
        func_002F2ED0(M2C_FIELD(temp_s0, s32 *, 0));
        if (M2C_FIELD(temp_s0, s32 *, 0x1008) != 1) {
            return 0;
        }
        func_00960F00();
        return 1;
    }
    return 0;
}
