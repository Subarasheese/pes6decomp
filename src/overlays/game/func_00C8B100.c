/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00CCD054[];

int func_00C8B100(int arg0) {
    int value;

    if (arg0 < 0) {
        value = 0;
    } else if (arg0 < 3) {
        value = *(int *)(arg0 * 4 + (u32)D_00CCD054);
        return value;
    }
    value = 0;
    return value;
}
