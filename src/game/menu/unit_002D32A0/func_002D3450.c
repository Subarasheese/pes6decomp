/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0026DA40(s32);

u32 func_002D3450(void) {
    int value;
    u32 value2;

    value = func_0026DA40(1);
    if (value == 0) {
        value = func_0026DA40(3);
        if (value != 0) {
            value2 = 0;
        } else {
            value2 = 1;
        }
    } else {
        value2 = 0;
    }
    return value2;
}
