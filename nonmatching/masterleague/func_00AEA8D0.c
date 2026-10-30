/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
M2C_UNK func_00AEA9D0(M2C_UNK);                     /* extern */
M2C_UNK func_00AEAAC0(M2C_UNK);                     /* extern */

s32 func_00AEA8D0(void) {
    s32 temp_v1;
    u32 temp_v0;

    if (func_00AE3240() == 0) {

    } else {
        temp_v0 = func_00AE3240();
        if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, u8 *, 0x3DB5) == 0)) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x59F0);
            switch (temp_v1) {                      /* irregular */
            case 4:
                func_00AEAAC0(1);
                break;
            case 1:
                func_00AEA9D0(1);
                break;
            }
        }
    }
    return 0;
}
