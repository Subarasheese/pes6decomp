/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

s32 func_001928D8(s32);
extern char D_011FC830[];

void func_0018F5A0(s32 arg0) {
    s32 value;

    void *entry;
    ;
    entry = (void *)D_011FC830;
    if (0 != (*((s32 *)(((s8 *)(entry - (-(arg0 * 0x28)))) + 0xC)))) {
        func_001928D8(value = *((s32 *)(((s8 *)(entry - (-(arg0 * 0x28)))) + 0xC)));
    }
}
