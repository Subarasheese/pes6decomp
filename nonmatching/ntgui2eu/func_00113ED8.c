/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00113214(s32);                         /* extern */
M2C_UNK func_00113244(s32);                         /* extern */
M2C_UNK func_00113274();                            /* extern */
M2C_UNK func_001132C4();                            /* extern */

void func_00113ED8(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg1 != 0) || (arg2 != 0)) {
        if (arg2 != 0) {
            if (arg2 > 0) {
                func_001132C4();
            } else {
                func_00113274();
            }
        }
        if (arg1 != 0) {
            if (arg1 > 0) {
                func_00113244(arg0);
                return;
            }
            func_00113214(arg0);
        }
    }
}
