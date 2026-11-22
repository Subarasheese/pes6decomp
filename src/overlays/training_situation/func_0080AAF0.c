/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080AAF0(void *arg0) {
    s32 value;
    float value2;
    value2 = 0.0f;
    value = 0;
    if ((((*((f32 *)(((s8 *)arg0) + 0x48))) != value2) &&
         ((*((f32 *)(((s8 *)arg0) + 0x4C))) != value2)) &&
        ((*((f32 *)(((s8 *)arg0) + 0x50))) == value2)) {
        value = 0x3E8;
    }
    return value;
}
