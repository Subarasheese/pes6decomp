/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00936B90(void);

int func_00961230(void) {
    int *entry;

    entry = func_00936B90();
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
        return (int)entry;
    }
    entry = entry + 0xfdb0;
    return (int)entry;
}
