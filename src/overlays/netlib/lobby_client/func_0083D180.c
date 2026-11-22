/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00D0BAF0(void);

s8 func_0083D180(void) {
    s8 value;
    int *entry;

    entry = func_00D0BAF0();
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0x3e29;
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
    } else {
        entry = entry + 0x21d;
    }
    if (entry == (int *)0x0) {
        value = 0;
    } else {
        value = *(s8 *)((int)entry + 0xe);
    }
    return value;
}
