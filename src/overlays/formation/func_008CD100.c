/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_008D0900(void *, s32, s32);

s32 func_008CD100(s8 *arg0, s32 arg1, s32 arg2) {
    s32 value1;
    value1 = func_008D0900(((arg0) + 0x480), arg1, (((arg2 & 0xFF) + 1) & 0xFF));
    ((s8 *)(arg0))[0x15] = ((arg2 & 0xFF) + 1);
    return value1;
}
