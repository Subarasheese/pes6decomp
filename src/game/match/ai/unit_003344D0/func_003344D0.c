/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_003344D0(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 == 0xCDCD) {
        return -1;
    }
    return (temp_v1 & 0xFFFF) + 0x20000;
}
