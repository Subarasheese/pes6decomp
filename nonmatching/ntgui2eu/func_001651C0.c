/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00165B00(s32);                           /* extern */

void func_001651C0(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00165B00(arg1);
    if (temp_v0 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x4C), M2C_UNK (**)(void *, s32), 0x148)(temp_v0, M2C_FIELD(arg0, s32 *, 0x4D0));
    }
}
