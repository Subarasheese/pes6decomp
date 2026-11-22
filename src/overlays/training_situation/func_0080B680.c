/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080B680(void *arg0) {
    float value;
    float value2;
    s32 value3;
    value = 0.0f;
    value3 = 0;
    value2 = value;
    if (((*((f32 *)(((s8 *)arg0) + 0x48))) != value) ||
        ((*((f32 *)(((s8 *)arg0) + 0x4C))) != value2)) {
        value3 = 1;
    }
    return value3;
}
