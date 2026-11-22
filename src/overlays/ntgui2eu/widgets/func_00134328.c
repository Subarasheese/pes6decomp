/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_00134270(void);
extern char D_011D6E00[];

int func_00134328(void) {
    char *entry;
    int value;

    entry = (char *)D_011D6E00;
    value = 0;
    do {
        if (*entry == 0) {
            *entry = '\x01';
            func_00134270();
            return value;
        }
        value = value + 1;
        entry = entry + 1;
    } while (value < 0x100);
    return 0;
}
