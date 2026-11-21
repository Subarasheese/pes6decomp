/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

s32 func_00C0DD80(s8 *arg0) {
    u8 temp_v1;

    temp_v1 = *arg0;
    return ((temp_v1 >> 4) * 0xA) + (temp_v1 & 0xF);
}
