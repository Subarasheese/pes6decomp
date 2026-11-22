/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_009F06D0(s32, s32, s32, s32, s32, s32, s32, s32);

void func_009F0420(void *arg0, s32 arg1, s32 arg2) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;
    s32 value5;
    s32 value6;
    value = *((s32 *)(((s8 *)arg0) + 0xC));
    if (value > 0) {
        value4 = *((s32 *)(((s8 *)arg0) + 4));
        value2 = *((s32 *)(((s8 *)arg0) + 8));
        value5 = *(*((s32 **)(((s8 *)arg0) + 0)));
        value3 = value4;
        if (arg1 < 0) {
            value6 = -1;
        } else {
            value6 = ((arg1 & 0xFF) << 8) + (arg2 & 0xFF);
        }
        func_009F06D0(value3, value5, value2, value, value6, value2, value3, value5);
    }
}
