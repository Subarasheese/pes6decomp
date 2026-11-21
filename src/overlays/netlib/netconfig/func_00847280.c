/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008B09E0[];

short *func_00847280(s64 arg0) {
    short *entry;
    int value;

    entry = (short *)D_008B09E0;
    value = 0;
    do {
        if (*entry == (short)arg0) {
            return entry;
        }
        value = value + 1;
        entry = entry + 0x44;
    } while (value < 8);
    return (short *)0x0;
}
