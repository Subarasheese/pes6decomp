/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#pragma no_branch_likely on

void func_00873F60(s32 *, s32);
void func_00873FD0(s32 *, s32);
void func_00874460(s32 *);
void func_00874470(void);

s32 func_008685A0(s32 *arg0, s32 arg1, s32 arg2) {
    if ((arg0 != NULL) && (arg2 != 0)) {
        if (*arg0 != 0x2201) {
            return -0x46;
        }
    } else {
        return -0x18;
    }
    func_00874470();
    func_00873FD0(arg0, arg2);
    func_00873F60(arg0, arg1);
    func_00874460(arg0);
    return 0;
}
