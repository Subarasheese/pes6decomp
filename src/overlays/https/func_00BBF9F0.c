/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00BC71E0(void);

s32 func_00BBA0A0(M2C_UNK, s32, s32, s32, s32, s32);

s32 func_00BBF9F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_00BBA0A0(0, func_00BC71E0(), arg0, arg1, arg2, arg3);
}
