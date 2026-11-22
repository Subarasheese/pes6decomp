/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00213F20(void *, s32 *, s32 *, s8);
extern s32 func_00214540(s32);

extern s32 D_003E9A00;

void *func_00213340(void *arg0, s32 *arg1, s32 *arg2, s8 arg3) {
    s32 temp_v0;

    if (arg0 != NULL) {
        func_00213F20(arg0, arg1, arg2, arg3);
        return arg0;
    }
    if (D_003E9A00 != 0) {
        func_00213F20((void *)D_003E9A00, arg1, arg2, arg3);
    } else {
        temp_v0 = func_00214540(0);
        D_003E9A00 = temp_v0;
        func_00213F20((void *)temp_v0, arg1, arg2, arg3);
    }
    return (void *)D_003E9A00;
}
