/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080B530(void *arg0) {
    s32 value;
    float value2;
    s8 *entry;
    value = 0;
    entry = (s8 *)arg0;
    entry = entry - -0x48;
    value = 0.0f;
    if (((*((f32 *)entry)) != value) || ((*((f32 *)(((s8 *)arg0) + 0x50))) != (value2 = 0.0f))) {
        value = 1;
    }
    return value;
}
