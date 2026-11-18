/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CA8040[];
extern char D_00CA8044[];
extern char D_00CA8048[];
extern char D_00CA804C[];
extern char D_00CA8050[];
extern char D_00CA8054[];
extern char D_00CA8058[];
extern char D_00CA805C[];
extern char D_00CCB8F0[];

s32 func_00C390E0(void) {
    f32 v[8];
    v[0] = *(f32 *)D_00CA8040;
    v[1] = *(f32 *)D_00CA8044;
    v[2] = *(f32 *)D_00CA8048;
    v[3] = *(f32 *)D_00CA804C;
    v[4] = *(f32 *)D_00CA8050;
    v[5] = *(f32 *)D_00CA8054;
    v[6] = *(f32 *)D_00CA8058;
    v[7] = *(f32 *)D_00CA805C;
    return ((s32 *)v)[*(s32 *)D_00CCB8F0];
}
