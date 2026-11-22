/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080B320(void *arg0) {
    f32 *value;
    f32 *value2;
    void *entry;
    f32 *value3;
    s32 value4;
    float value5;
    int value6;
    value3 = &(*((f32 *)(((s8 *)arg0) - -0x4C)));
    value2 = value3;
    value = &(*value2);
    value6 = 0.0f;
    ;
    value4 = 0;
    value5 = .0f;
    value3 = arg0;
    entry = value3;
    if (((*(&(*value2))) != value6) || ((*((f32 *)(0x48 + ((s8 *)entry)))) != value5)) {
        value4 = 1;
    }
    return value4;
}
