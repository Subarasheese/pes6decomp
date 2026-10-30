/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B6FA0(s32);                         /* extern */

void func_00C74D20(void **arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 != NULL) && (arg1 != 0)) {
        temp_v1 = *arg0;
        if (temp_v1 != NULL) {
            func_001B6FA0(M2C_FIELD(temp_v1, s32 *, 0xC));
        }
    }
}
