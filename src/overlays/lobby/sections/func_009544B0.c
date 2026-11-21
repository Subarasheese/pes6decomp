/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0082C2A0(void);
extern s32 *func_00936B90(void);

u16 func_009544B0(void) {
    u16 value;
    int value2;
    int *entry;
    u16 *entry2;

    value2 = func_0082C2A0();
    entry = func_00936B90();
    if (entry == (int *)0x0) {
        entry2 = (u16 *)0x0;
    } else if (value2 == 0) {
        entry2 = (u16 *)0x0;
    } else {
        entry2 = (u16 *)(entry + 0x37);
    }
    if (entry2 == (u16 *)0x0) {
        value = 0;
    } else {
        value = *entry2;
    }
    return value;
}
