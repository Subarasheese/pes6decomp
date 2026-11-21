/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

int func_0010F748(int arg0, int arg1, int arg2) {
    int value;

    value = arg1 * arg2;
    if (value < 0) {
        value = value + 0x3f;
    }
    return value >> 6;
}
