/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_002F81E0(int arg0, int arg1) {
    int value;

    if (arg0 == 0) {
        if (arg1 == 0) {
            value = 0;
        } else {
            value = 1;
        }
    } else if (arg1 == 0) {
        value = 2;
    } else {
        value = 3;
    }
    return value;
}
