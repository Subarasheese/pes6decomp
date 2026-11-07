/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

f32 func_0011D138(f32);
extern f32 D_003E755C;
extern f32 D_003E9CB8;
extern char D_0059FBD0[];
extern char D_0059FBD4[];
extern char D_0059FBD8[];
extern char D_0059FBDC[];
extern char D_0059FBE0[];

void func_0027A810(void) {
    (*(s32 *)D_0059FBD0) = 0;
    if ((*(s32 *)D_0059FBD0) != 0) {
        (*(s32 *)D_0059FBD4) = 1;
        (*(s32 *)D_0059FBD8) = 1;
        (*(s32 *)D_0059FBDC) = 8;
    }
    (*(s32 *)D_0059FBE0) = 0;
    D_003E9CB8 = func_0011D138(D_003E755C);
}
