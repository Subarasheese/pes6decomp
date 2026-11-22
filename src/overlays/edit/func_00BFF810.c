/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00CBED80[];

u32 func_00BFF810(int arg0) {
    u32 value;
    int *entry;

    value = 0;
    entry = (int *)D_00CBED80;
    do {
        if (arg0 == *entry) {
            return value;
        }
        value = value + 1;
        entry = entry + 1;
    } while (value < 0xf);
    return 0xf;
}
