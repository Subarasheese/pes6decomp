/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_001B3320(void *, void *);

s32 func_001B0D98(s32 arg0, void *arg1) {
    s32 value;
    if ((*((s32 *)(((s8 *)arg1) + 8))) == 0) {
        *((s32 *)(((s8 *)arg1) + 4)) = 0;
        return 0;
    }
    value = func_001B3320((void *)arg0, arg1);
    *((s32 *)(((s8 *)arg1) + 4)) = (*((s32 *)(((s8 *)arg1) + 8)) = 0);
    return value;
}
