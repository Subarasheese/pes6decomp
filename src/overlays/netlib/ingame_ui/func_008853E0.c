/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00885060(s32, s32, s32, s32);
extern s32 func_00885430(s32, s32, s32, s32);
extern u8 D_008B2552[];

s32 func_008853E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_008B2552[0] == 0) {
        func_00885430(arg0, arg1, arg2, arg3);
    } else {
        if (D_008B2552[0] == 1) {
            func_00885060(arg0, arg1, arg2, arg3);
        }
    }
    return 0;
}
