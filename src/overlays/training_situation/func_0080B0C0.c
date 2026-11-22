/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080B0C0(void *arg0) {
    float value;
    s32 value2;
    value2 = 0;
    value = 0.0f;
    if ((((((*((f32 *)(((s8 *)arg0) + 0x48))) != value) &&
           ((*((f32 *)(((s8 *)arg0) + 0x4C))) != value)) &&
          ((*((f32 *)(((s8 *)arg0) + 0x50))) != value)) &&
         ((*((f32 *)(((s8 *)arg0) + 0x54))) == value)) &&
        ((*((f32 *)(((s8 *)arg0) + 0x60))) != value)) {
        value2 = 0x3E8;
    }
    return value2;
}
