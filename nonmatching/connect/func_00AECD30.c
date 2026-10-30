/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4CE0(void *, s8);
void func_00AECD30(void *arg0, s8 arg1) {
    if ((arg0 != NULL) && (arg1 < M2C_FIELD(arg0, s32 *, 8))) {
        func_002F4CE0(M2C_FIELD(arg0, void **, 0), arg1);
    }
}
