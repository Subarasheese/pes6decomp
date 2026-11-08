/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "pes6/m2c.h"

extern void *func_002E4EA0(void *, s32);
extern void func_002E56A0(void *, s32, s32);
extern void *D_003EAFC0;

void func_00BCF890(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    if (D_003EAFC0 != NULL) {
        if ((temp_v0 = func_002E4EA0(D_003EAFC0, arg0)) != NULL) {
            func_002E56A0(temp_v0, arg1, arg2);
        }
    }
}
