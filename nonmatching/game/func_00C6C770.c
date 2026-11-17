/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CA8148[];
extern char D_00CA814C[];
extern char D_00CA8150[];
extern s32 D_003EA808;
extern s32 func_0026E840(s32 a);
s32 func_00C6C770(void) {
    s32 t[3];
    s32 r;
    *(f32 *)&t[0] = *(f32 *)D_00CA8148;
    *(f32 *)&t[1] = *(f32 *)D_00CA814C;
    *(f32 *)&t[2] = *(f32 *)D_00CA8150;
    r = func_0026E840(t[D_003EA808]);
    D_003EA808 = (D_003EA808 + 1) % 3;
    return r;
}
