/* compiler: mwcc-3.0.1b151 */
#include "types.h"

u8 func_00292F00(u8 value) {
    if (value < 1)
        return 0;
    if (value <= 9)
        return 1;
    if (value <= 28)
        return 2;
    return 3;
}
