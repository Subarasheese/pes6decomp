/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00936B90(void);

int func_0095D730(void) {
    int *entry;
    u32 value;

    entry = func_00936B90();
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0xfc69;
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
    }
    value = (entry == (int *)0x0) ? 0 : (u32)((char)entry[0x20] == 0);
    return value;
}
