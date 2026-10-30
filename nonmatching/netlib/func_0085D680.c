/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00844100();                            /* extern */
void *func_00847280(s16);                           /* extern */

s32 func_0085D680(M2C_UNK arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = func_00847280(M2C_FIELD(arg1, s16 *, 4));
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x52) = (s8) M2C_FIELD(arg1, u16 *, 2);
        func_00844100();
        return 0;
    }
    return -1;
}
