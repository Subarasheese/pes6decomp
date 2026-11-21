/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void *func_0016AB80(void *, s16);

s32 func_0016A698(void *arg0, s32 arg1, s32 arg2) {
    void *value1;
    value1 = func_0016AB80(arg0, 0xC);
    if (value1 != 0) {
        ((s32 *)(value1))[6] = arg2;
        ((s32 *)(value1))[5] = arg1;
    }
    return value1;
}
