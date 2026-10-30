/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001EC4C0(void *, s32, s32);
void func_001F3C00(void *arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 != NULL) && (arg1 != 0)) {
        temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_v1 != NULL) {
            func_001EC4C0(temp_v1, (s32) arg0, arg1);
        }
    }
}
