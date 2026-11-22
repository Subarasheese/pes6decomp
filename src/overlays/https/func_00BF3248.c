/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_00BE4900(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_00BE6610(void *);
extern s32 func_00BE6648(s32);

s32 func_00BF3248(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 var_v0;

    var_v0 = func_00BE6610((void *)arg0);
    if (var_v0 == 0) {
        var_v0 = func_00BE6648(arg6);
        if (var_v0 == 0) {
            return func_00BE4900(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        }
        return var_v0;
    }
    return var_v0;
}
