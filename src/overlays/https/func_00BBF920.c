/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00BC7200(void);

s32 func_00BBA190(M2C_UNK, s32, s32, s32, s32, s32);

s32 func_00BBF920(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_00BBA190(0, func_00BC7200(), arg0, arg1, arg2, arg3);
}
