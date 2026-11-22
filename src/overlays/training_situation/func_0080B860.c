/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0080B860(void *arg0) {
    s32 value;
    value = 0;
    value = 0.0f;
    if ((((*((f32 *)(((s8 *)arg0) + 0x4C))) != value) ||
         ((*((f32 *)(((s8 *)arg0) + 0x50))) != value)) ||
        ((*((f32 *)(((s8 *)arg0) + 0x54))) != value)) {
        value = 1;
    }
    return value;
}
