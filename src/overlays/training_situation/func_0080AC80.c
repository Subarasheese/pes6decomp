/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080AC80(void *arg0) {
    s32 value;
    float value2;
    f32 *value3;
    s8 *entry;
    float value4;
    f32 *value5;
    f32 value6;
    value3 = (value5 = (f32 *)(((s8 *)arg0) + 0x48));
    value4 = 0.0f;
    value = 0;
    value6 = *value3;
    entry = (s8 *)arg0;
    value2 = 0.0f;
    if ((value6 != value2) && ((*((f32 *)(entry + 0x4C))) != value4)) {
        value = 0x3E8;
    }
    return value;
}
