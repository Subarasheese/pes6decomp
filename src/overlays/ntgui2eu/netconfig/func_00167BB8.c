/* compiler: ee-gcc-2.9 */
#include "types.h"

s32 func_00163C30(s32, s32);
s32 func_0016A788(s32, s32, s32, s32, s32);
extern char D_005BFCA8[];

s32 func_00167BB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 value;

    value = 0;
    if (arg0 == 0) {
        return value;
    } else {
        if (func_00163C30(arg0, (*(s32 *)D_005BFCA8)) == 0) {
            return 0;
        }
        value = func_0016A788(arg0 + 0x9D0, arg1, arg0, arg2, arg3);

        return value;
    }
}
