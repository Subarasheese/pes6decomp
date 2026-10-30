/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE64[];
extern char D_00CBBE68[];
extern char D_00CBBE6C[];

void func_00B26CA0(void *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 >= 0x81) {
        var_a1 = 0x80;
    }
    (*(u8 *)D_00CBBE64) = ((*(u8 *)D_00CBBE64) & ~2) | 2;
    (*(u8 *)D_00CBBE64) = ((*(u8 *)D_00CBBE64) & ~4) | 4;
    (*(s32 *)D_00CBBE6C) = (s32) M2C_FIELD(arg0, u8 *, 0x12);
    (*(f32 *)D_00CBBE68) = (f32) var_a1 / 128.0f;
}
