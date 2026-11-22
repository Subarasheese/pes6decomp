/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00994760(void);

u8 func_00B56850(void) {
    u8 value;
    int *entry;

    entry = func_00994760();
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0x186b1;
    if (entry == (int *)0x0) {
        value = 0;
    } else {
        value = (u8)entry[8];
    }
    return value;
}
