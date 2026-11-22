/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00936B90(void);

int func_009610D0(void) {
    int *entry;
    int value;

    entry = func_00936B90();
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0xfdb0;
    value = (entry == (int *)0x0) ? 0 : entry[1];
    return value;
}
