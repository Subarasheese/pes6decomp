/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_009ABE20(s32, s32);
extern s32 func_009ABFA0(s32, s32);

s32 func_009ADF20(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 == 0) {
        return func_009ABE20(arg1, arg2);
    }
    if (temp_v1 == 1) {
        return func_009ABFA0(arg1, arg2);
    }
    return 0;
}
