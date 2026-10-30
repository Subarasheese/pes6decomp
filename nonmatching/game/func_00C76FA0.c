/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00CCBE04;

void func_00C76FA0(f32 *arg0, f32 *arg1, f32 *arg2) {
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(D_00CCBE04, f32 *, 0xE0);
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(D_00CCBE04, f32 *, 0xE4);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(D_00CCBE04, f32 *, 0xE8);
    }
}
