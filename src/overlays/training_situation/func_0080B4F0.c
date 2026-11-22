/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080B4F0(void *arg0) {
    float value;
    s32 value2;
    float value3;
    value2 = 0;
    value3 = 0.0f;
    value = value3;
    if (((*((f32 *)(((s8 *)arg0) + 0x4C))) != value) ||
        ((*((f32 *)(((s8 *)arg0) + 0x50))) != value3)) {
        value2 = 1;
    }
    return value2;
}
