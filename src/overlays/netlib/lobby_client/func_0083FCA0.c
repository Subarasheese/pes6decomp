/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00D0BAF0(void);

int func_0083FCA0(void) {
    int *entry;
    int value;

    entry = func_00D0BAF0();
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0x3e29;
    value = (entry == (int *)0x0) ? 0 : entry[0x200];
    return value;
}
