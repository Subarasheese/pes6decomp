/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00D0BAF0(void);

int func_0083D4F0(void) {
    int *entry;

    entry = func_00D0BAF0();
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0x3e29;
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0x21d;
    return (int)entry;
}
