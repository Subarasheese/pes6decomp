/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002DDF30(s32, void *, s32, s32, void *, s32 *);

s32 func_00843D00(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 localValue1;

    localValue1 = arg4;
    return func_002DDF30(arg0, (void *)arg1, arg2, 0, (void *)arg3, &localValue1);
}
