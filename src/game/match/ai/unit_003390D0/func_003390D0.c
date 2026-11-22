/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_003390D0(float arg0) {
    int value;

    if (arg0 > 7961.0f) {
        value = 1;
    } else if (arg0 > 2560.0f) {
        value = 2;
    } else if (arg0 > -5452.5f) {
        value = 3;
    } else if (arg0 > -10265.0f) {
        value = 4;
    } else {
        value = 5;
    }
    return value;
}
