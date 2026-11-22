/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *Pes6Ball_Current;
extern char D_00591E19[];

s32 func_0080B6C0(void *arg0) {
    s32 value;
    float value2;
    f32 *value3;
    value = 0;
    value2 = 0.0f;
    if (((*((f32 *)(((s8 *)arg0) + 0x48))) != value2) ||
        ((*((f32 *)(((s8 *)arg0) + 0x54))) != value2)) {
        value = 1;
    }
    value3 = (f32 *)(((s8 *)Pes6Ball_Current) + 0x10);
    if ((!((*value3) <= (-7241.0f))) && ((*((u8 *)D_00591E19)) == 1)) {
        value = 1;
    }
    return value;
}
