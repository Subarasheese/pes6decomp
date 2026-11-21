/* compiler: mwcc-3.0.1b151 */
#include "types.h"

s32 func_001C48E8(s32, s32, s32);
s32 func_00873EE0(s32 *, s32, s32);
s32 func_00874460(s32 *);
s32 func_00874470(s32 *);

s32 func_00876620(s32 *arg0, s32 arg1, s32 arg2) {
    if (!((arg0 != 0) && (arg1 != 0))) {
        return -0x18;
    } else {
        if (*arg0 == 0x8104) {
            func_001C48E8(arg1, 0, 0x20);
            func_001C48E8(arg2, 0, 0xCA);
            func_00874470(arg0);
            func_00873EE0(arg0, arg1, 0x1B);
            func_00873EE0(arg0, arg2, 0xCA);
            func_00874460(arg0);
            return 0;
        }
        return -0x46;
    }
}
