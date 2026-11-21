/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00591F14[];
extern char D_00CBCDE8[];

s32 func_0080B2D0(void *arg0) {
    s32 value;
    value = 0;
    value = 0.0f;
    if (((*((f32 *)(((s8 *)arg0) + 0x48))) != value) || (((s32)(*((u16 *)D_00CBCDE8))) > 0)) {
        value = 1;
    }
    if ((*((u8 *)D_00591F14)) != 0) {
        value = 1;
    }
    return value;
}
