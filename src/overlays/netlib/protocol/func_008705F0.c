/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_001C48E8(s32 *, s32, s32);
extern s32 func_00873FD0(s32 *, s32 *);
extern s32 func_00874460(s32 *);
extern void func_00874470(void *);

s32 func_008705F0(s32 *arg0, s32 *arg1, s32 arg2) {
    if (!((arg0 != 0) && (arg1 != 0) && (arg2 != 0))) {
        return -0x18;
    }
    if (*arg0 != 0x4601) {
        return -0x46;
    }
    func_00874470(arg0);
    func_00873FD0(arg0, (s32 *)arg2);
    func_00874460(arg0);
    *arg1 = 0;
    func_001C48E8(arg1, 0, 0x1CEC);
    return 0;
}
