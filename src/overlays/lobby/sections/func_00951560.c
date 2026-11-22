/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00936B90(void);

int func_00951560(void) {
    int *entry;
    int value;

    entry = func_00936B90();
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
    } else {
        entry = entry + 0xe21;
    }
    if (entry == (int *)0x0) {
        value = 0;
    } else {
        value = *entry;
    }
    return value;
}
