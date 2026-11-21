/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00873FD0(s32 *, s32 *);
extern s32 func_00874460(s32 *);
extern void func_00874470(void *);

s32 func_0086FFE0(s32 *arg0, s32 arg1) {
    if (!((arg0 != 0) && (arg1 != 0))) {
        return -0x18;
    }
    if (*arg0 != 0x4111) {
        return -0x46;
    }
    func_00874470(arg0);
    func_00873FD0(arg0, (s32 *)arg1);
    func_00874460(arg0);
    return 0x4103;
}
