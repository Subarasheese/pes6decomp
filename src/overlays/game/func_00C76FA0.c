/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00CCBE04[];

void func_00C76FA0(f32 *arg0, f32 *arg1, f32 *arg2) {
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(*(void **)D_00CCBE04, f32 *, 0xE0);
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(*(void **)D_00CCBE04, f32 *, 0xE4);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(*(void **)D_00CCBE04, f32 *, 0xE8);
    }
}
