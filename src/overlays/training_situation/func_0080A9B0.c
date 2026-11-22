/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080A9B0(void *arg0) {
    s32 value;
    float value2;
    s8 *entry;

    float value3;
    s8 *entry2;
    entry = (s8 *)arg0;
    ;
    value = 0;
    entry2 = (s8 *)arg0;
    value2 = (value3 = 0.0f);
    if ((((*((f32 *)(entry + 0x48))) != value2) &&
         ((*((f32 *)(((s8 *)arg0) - -0x4C))) != value3)) &&
        ((*((f32 *)(((s8 *)arg0) + 0x50))) == value2)) {
        value = 0x3E8;
    };
    return value;
}
