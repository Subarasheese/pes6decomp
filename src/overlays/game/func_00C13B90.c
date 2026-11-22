/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "pes6/m2c.h"

extern void func_00C13AA0(void);

void *func_00C13B90(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, void (**)(void), 4) = func_00C13AA0;
        M2C_FIELD(arg0, void **, 8) = arg0;
    }
    return arg0;
}
