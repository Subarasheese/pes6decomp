/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080B3C0(void *arg0) {
    float value;
    s32 value2;
    value = 0.0f;
    value2 = 0;
    if ((((*((f32 *)(((s8 *)arg0) + 0x48))) != value) &&
         ((*((f32 *)(((s8 *)arg0) + 0x4C))) != value)) ||
        ((*((f32 *)(((s8 *)arg0) + 0x50))) != value)) {
        value2 = 1;
    }
    return value2;
}
