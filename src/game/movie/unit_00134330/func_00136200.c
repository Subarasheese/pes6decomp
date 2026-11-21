/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_001360F0(s32, s32, s32);

int func_00136200(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
    int value;

    if (arg1 + arg3 < arg5 + arg7) {
        value = (arg5 + arg7) - (arg1 + arg3);
        if (!(value < arg7)) {
            arg5 = arg5 - (value - arg7);
            arg7 = 0;
        } else {
            arg7 = arg7 - value;
        }
    }
    if (arg5 < arg1) {
        value = arg1 - arg5;
        if (!(arg7 < value)) {
            func_001360F0(arg0, arg4, arg5);
            func_001360F0(arg0 + arg5, arg6, value);
            func_001360F0(arg2, (arg6 + arg1) - arg5, arg7 - value);
        } else {
            func_001360F0(arg0, arg4, arg5);
            func_001360F0(arg0 + arg5, arg6, arg7);
        }
    } else {
        func_001360F0(arg0, arg4, arg1);
        func_001360F0(arg2, arg4 + arg1, arg5 - arg1);
        func_001360F0((arg2 + arg5) - arg1, arg6, arg7);
    }
    return arg5 + arg7;
}
