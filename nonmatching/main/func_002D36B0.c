/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0017A670(s32);
char *func_00256140();
void func_0026E0E0(s32);
extern char D_003B2090[];
extern char D_003B2094[];
extern char D_003B2098[];
extern char D_003B209C[];
extern s32 D_003E9D78;

void func_002D36B0(void) {
    s32 v[4];
    s32 var_a0;

    v[0] = *(s32 *)D_003B2090;
    v[1] = *(s32 *)D_003B2094;
    v[2] = *(s32 *)D_003B2098;
    v[3] = *(s32 *)D_003B209C;
    if (func_0017A670(0) != 0xD) {
        var_a0 = v[*(u8 *)(func_00256140() + 0x622)];
    } else {
        var_a0 = v[3];
    }
    if (D_003E9D78 != var_a0) {
        D_003E9D78 = var_a0;
        func_0026E0E0(var_a0);
    }
}
