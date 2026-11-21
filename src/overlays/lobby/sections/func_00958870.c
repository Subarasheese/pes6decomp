/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00936B90(void);

s8 func_00958870(void) {
    s8 value;
    int *entry;

    entry = func_00936B90();
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
    } else {
        entry = entry + 0x1e;
    }
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
    }
    if (entry == (int *)0x0) {
        value = '\x05';
    } else {
        value = *(s8 *)((int)entry + 0x25);
    }
    return value;
}
