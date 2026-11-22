/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00873EE0(s32 *, void *, s32);
extern s32 func_00874460(s32 *);
extern void func_00874470(void *);

s32 func_008760B0(s32 *arg0, s32 arg1, s32 arg2) {
    if (!((arg0 != 0) && (arg1 != 0) && (arg2 != 0))) {
        return -0x18;
    }
    if (*arg0 != 0x811B) {
        return 0x8159;
    }
    func_00874470(arg0);
    func_00873EE0(arg0, (void *)arg2, 0x300);
    func_00874460(arg0);
    return 0;
}
