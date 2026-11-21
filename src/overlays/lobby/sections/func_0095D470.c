/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00936B90(void);

s8 func_0095D470(void) {
    s8 value;
    int *entry;

    entry = func_00936B90();
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0xfc69;
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
    }
    if (entry == (int *)0x0) {
        value = 0;
    } else {
        value = *(s8 *)((int)entry + 0x18e);
    }
    return value;
}
