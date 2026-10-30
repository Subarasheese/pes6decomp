/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002E4EA0(void *, s32);
M2C_UNK func_002E5650(s32, s32, s32);               /* extern */
extern void *D_003EAFC0;

void func_00BCF620(s32 arg0, s32 arg1, s32 arg2) {
    if (D_003EAFC0 != NULL) {
        func_002E5650(func_002E4EA0(D_003EAFC0, arg0), arg1, arg2);
    }
}
