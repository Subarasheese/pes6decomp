/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00CCCE4C[];

void func_00C8B160(u32 arg0, s32 arg1) {
    u32 value;

    value = arg0;
    if (value >= 0x7FU) {
        value = 0;
    }
    *((s32 *)(((char *)D_00CCCE4C) + (value * 4))) = arg1;
}
