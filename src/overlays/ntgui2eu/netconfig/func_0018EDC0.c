/* compiler: ee-gcc-2.9 */
#include "types.h"

extern char D_011FC830[];

s16 func_0018EDC0(s32 arg0) {
    int value;
    value = 0x14;
    if (arg0 == 0xFFFF) {
        return -1;
    }
    return *((s16 *)(((s8 *)((arg0 * 0x28) + ((void *)D_011FC830))) + value));
}
