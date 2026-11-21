/* compiler: mwcc-3.0.1b210 */
#include "types.h"

u32 func_00C88B50(int *param_1) {
    int value;
    u32 value2;
    int value3;

    value3 = *param_1;
    value2 = 1;
    switch (value3) {
    case 0:
        value3 = value3 + 1;
    case 1:
        value = param_1[1];
        param_1[1] = value + 1;
        if (8 < value + 1) {
            value3 = value3 + 1;
        }
        break;
    case 2:
        param_1[1] = 0;
        value3 = value3 + 1;
    case 3:
        value = param_1[1];
        param_1[1] = value + 1;
        if (0x80 < value + 1) {
            value3 = value3 + 1;
            param_1[1] = 8;
        }
        break;
    case 4:
        value = param_1[1];
        param_1[1] = value + -1;
        if (value + -1 < 1) {
            param_1[1] = 0;
            value3 = value3 + 1;
        }
        break;
    case 5:
        value2 = 0;
    }
    *param_1 = value3;
    return value2;
}
