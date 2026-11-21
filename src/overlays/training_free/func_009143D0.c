/* compiler: mwcc-3.0.1b151 */
#include "types.h"

void func_009143D0(void *arg0, s32 arg1, s32 arg2) {
    s32 *entry;
    int value;
    if ((((0 <= arg1) && (arg1 < 4)) && (0 <= arg2)) && (arg2 < 2)) {
        value = 0x208;
        entry = (s32 *)(((s8 *)arg0) - (-value));
        *entry = (s32)((*entry) & (~(1 << arg1)));
        *entry = (s32)((arg2 << arg1) | (*entry));
    }
}
