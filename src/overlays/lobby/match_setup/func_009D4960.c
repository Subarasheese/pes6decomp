/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_009D4960(int arg0) {
    int value;

    if (arg0 < 0) {
        value = 4;
        return value;
    }
    if (arg0 == 0) {
        value = 3;
    } else if (arg0 < 0x32) {
        value = 2;
    } else if (arg0 < 100) {
        value = 1;
    } else {
        value = 0;
    }
    return value;
}
