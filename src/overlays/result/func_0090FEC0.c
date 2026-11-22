/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_0090FEC0(int arg0)

{
    int value;

    if ((arg0 & 0x80U) != 0) {
        arg0 = (arg0 & 0xffffff7fU) - 0xe;
    }
    if (arg0 < 0x2d) {
        value = 0;
        return value;
    }
    if (arg0 < 0x5a) {
        value = 1;
    } else if (arg0 < 0x69) {
        value = 2;
    } else {
        value = 3;
    }
    return value;
}
