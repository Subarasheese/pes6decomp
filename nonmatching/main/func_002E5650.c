/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002E5A90(s32);                         /* extern */

void func_002E5650(s32 **arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;

    if ((arg0 != NULL) && ((temp_a3 = **arg0, (temp_a3 != 2)) || (arg1 != 1))) {
        M2C_FIELD(((arg1 * 0x10) + arg0), s32 *, 0x30) = arg2;
        func_002E5A90(temp_a3);
    }
}
