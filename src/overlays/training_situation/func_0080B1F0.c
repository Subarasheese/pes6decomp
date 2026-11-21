/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080B1F0(void *arg0) {
    float value;
    s32 value2;
    s8 *entry;
    float value3;
    float value4;
    value3 = 0.0f;
    value2 = 0;
    value4 = .0f;
    entry = (s8 *)arg0;
    if ((((value = value3) != (*((f32 *)(((s8 *)arg0) + 0x48)))) &&
         ((*((f32 *)(entry + 0x4C))) != value3)) &&
        ((*((f32 *)(((s8 *)arg0) + 0x50))) != value4)) {
        value2 = 0x3E8;
    }
    return value2;
}
