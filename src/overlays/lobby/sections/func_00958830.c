/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00936B90(void);

short func_00958830(void) {
    short value;
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
        value = 0;
    } else {
        value = (short)entry[0x10];
    }
    return value;
}
