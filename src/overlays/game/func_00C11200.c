/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_00C11200(int arg0) {
    u8 *entry;
    int value;

    if (arg0 != 0) {
        value = 0;
        do {
            entry = (u8 *)(arg0 + value);
            *entry = 0;
            value = value + 8;
            entry[1] = 0;
            entry[2] = 0;
            entry[3] = 0;
            entry[4] = 0;
            entry[5] = 0;
            entry[6] = 0;
            entry[7] = 0;
        } while (value < 0x18);
    }
}
