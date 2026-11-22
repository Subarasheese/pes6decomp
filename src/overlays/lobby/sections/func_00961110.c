/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00936B90(void);

u16 func_00961110(void) {
    u16 value;
    int *entry;

    entry = func_00936B90();
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0xfdb0;
    if (entry == (int *)0x0) {
        value = 0;
    } else {
        value = *(u16 *)((int)entry + 2);
    }
    return value;
}
