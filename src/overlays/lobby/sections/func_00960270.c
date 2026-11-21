/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00936B90(void);

u16 func_00960270(void) {
    u16 value;
    int *entry;
    u16 *entry2;

    entry = func_00936B90();
    if (entry == (int *)0x0) {
        entry2 = (u16 *)0x0;
    } else {
        entry2 = (u16 *)(entry + 0xf7f4);
    }
    if (entry2 == (u16 *)0x0) {
        value = 0;
    } else {
        value = *entry2;
    }
    return value;
}
