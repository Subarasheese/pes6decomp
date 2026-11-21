/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern void func_00111074(s32, s32, s32);

void func_00111040(s32 arg0, u16 arg1, s32 arg2, s32 arg3) {
    if (arg0 == 0) {
        func_00111074(arg1 & 0xFFFF, arg2 & 0xFF, arg3);
    }
}
