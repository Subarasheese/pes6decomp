/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00253F60(s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_002FC6D0(s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_002FC6E0(s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 D_003E9C78;

void func_0026E1A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (arg1 == 0) {
        func_002FC6D0(D_003E9C78, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    } else {
        func_002FC6E0(D_003E9C78, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    }
    func_00253F60(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
