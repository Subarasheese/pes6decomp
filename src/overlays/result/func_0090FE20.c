/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_0090FE20(int arg0) {
    u32 value;

    value = arg0 & 0xffffff7f;
    if ((arg0 & 0x80U) != 0) {
        value = value - 0xe;
    }
    return (int)value / 0xf;
}
