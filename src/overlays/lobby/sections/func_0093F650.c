/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0082C2A0(void);
extern s32 *func_00936B90(void);

int func_0093F650(void) {
    int value;
    int *entry;

    value = func_0082C2A0();
    entry = func_00936B90();
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
    } else
        entry = (value == 0) ? (int *)0x0 : entry + 0xcc96;
    value = (entry == (int *)0x0) ? 0 : *entry;
    return value;
}
