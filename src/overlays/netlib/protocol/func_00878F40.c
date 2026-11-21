/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00873FD0(s32 *, s32 *);
extern s32 func_00874460(s32 *);
extern void func_00874470(void *);

s32 func_00878F40(s32 *arg0, s32 *arg1, s8 *arg2) {
    if (!((arg0 != 0) && (arg1 != 0) && (arg2 != 0))) {
        return -0x18;
    } else {
        if (*arg0 != 0x50A6) {
            return -0x46;
        }
        func_00874470(arg0);
        func_00873FD0(arg0, arg1);
        func_00874460(arg0);
        if (*arg1 == 0) {
            *arg2 = 1;
        }
        return 0;
    }
}
