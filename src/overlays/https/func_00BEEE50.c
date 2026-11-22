/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern s32 func_00BED658(s32, s32);
extern s32 func_00BEE318(s32, s32);
extern void func_00BEEED8(s32, s32, s32, s32);
extern void func_00BEF798(s32, s32, s32, s32);

void func_00BEEE50(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg4 < 2) {
        if (*M2C_FIELD(arg1, s64 **, 8) == 0) {
            func_00BEE318(1, arg3);
            return;
        }
        func_00BED658(arg0, arg3);
        return;
    }
    if (*M2C_FIELD(arg1, s64 **, 8) == 3) {
        func_00BEEED8(arg0, arg2, arg3, arg5);
        return;
    }
    func_00BEF798(arg0, arg0, arg2, arg3);
}
