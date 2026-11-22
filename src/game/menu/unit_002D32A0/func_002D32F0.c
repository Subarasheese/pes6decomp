/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_0026DA40(s32);
extern void func_0026E4B0(s32, s32);

s32 func_002D32F0(void) {
    if (func_0026DA40(3) != 0) {
        func_0026E4B0(3, 0x1F4);
        return 1;
    }
    return 0;
}
