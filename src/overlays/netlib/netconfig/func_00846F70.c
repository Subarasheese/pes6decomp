/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008B09E0[];

int *func_00846F70(int arg0) {
    int *entry;
    int value;

    value = 0;
    entry = (int *)D_008B09E0;
    do {
        if (entry[2] == arg0) {
            return entry;
        }
        value = value + 1;
        entry = entry + 0x22;
    } while (value < 8);
    return (int *)0x0;
}
