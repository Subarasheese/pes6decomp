/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 *func_00229DF0(void);

int func_00B535B0(void) {
    u8 *entry;
    int value;

    entry = func_00229DF0();
    if (entry == (u8 *)0x0) {
        value = -1;
        return value;
    }
    if (entry[7] == 0) {
        value = 1;
    } else if (entry[7] == '\x01') {
        value = 2;
    } else {
        value = -1;
    }
    return value;
}
