/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AEE570(s32);                         /* extern */

void func_00AEDFC0(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_a0 != 0) {
            func_00AEE570(temp_a0);
        }
    }
}
