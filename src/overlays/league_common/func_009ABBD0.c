/* compiler: mwcc-3.0.1b210 */
#include "types.h"
float func_009ABBD0(u8 visible, u8 count, s16 current, s16 height, u8 first, s32 direction) {
    if (current > 0)
        return (float)((s32)(u8)first * height + current * direction) /
               (float)(height * ((s32)(u8)count - (s32)(u8)visible));
    return (float)first / (float)((s32)(u8)count - (s32)(u8)visible);
}
