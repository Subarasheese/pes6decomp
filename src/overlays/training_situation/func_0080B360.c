/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080B360(void *arg0) {
    s8 *entry;
    s32 value;
    float value2;
    value2 = 0.0f;
    value = 0;
    entry = (s8 *)arg0;
    if ((((*((f32 *)(((s8 *)arg0) + 0x4C))) != value2) || ((*((f32 *)(entry + 0x50))) != value2)) ||
        ((*((f32 *)(0x54 + ((s8 *)arg0)))) != value2)) {
        value = 1;
    }
    return value;
}
