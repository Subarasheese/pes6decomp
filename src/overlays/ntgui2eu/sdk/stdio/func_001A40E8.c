/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_001A3EC0(s8 *, s32, void *, s32 *, s32);

int func_001A40E8(int arg0, int arg1, int arg2) {
    int value;
    int buffer[4];

    value = func_001A3EC0((s8 *)arg0, arg1, (void *)arg2, buffer, 0);
    return value;
}
