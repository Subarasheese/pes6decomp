/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_005E3BA4[];

int func_002CBB90(int arg0) {
    int value;
    char value2;

    value2 = (char)arg0;
    if ((value2 == -1) || ('\x1b' < value2)) {
        value = 0;
        return value;
    }
    value = *(int *)(value2 * 8 + (u32)D_005E3BA4);
    return value;
}
