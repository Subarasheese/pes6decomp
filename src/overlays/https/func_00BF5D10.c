/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_00BF5F60(void *, void *, s32);

s32 func_00BF5D10(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0) {
        return 0;
    }
    return func_00BF5F60((void *)arg0, (void *)arg1, arg2);
}
