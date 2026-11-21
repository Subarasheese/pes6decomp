/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern char D_00B8C760[];

int func_00B26EF0(int arg0) {
    int value;
    u16 *entry;

    if ((arg0 & 0xffffU) == 0) {
        return -1;
    }
    value = 0;
    entry = (u16 *)D_00B8C760;
    do {
        if ((arg0 & 0xffffU) == (u32)*entry) {
            return value;
        }
        value = value + 1;
        entry = entry + 1;
    } while (value < 0x138a);
    return -1;
}
