/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CA8020[];
extern char D_00CA8024[];
extern char D_00CA8028[];
extern char D_00CA802C[];
extern char D_00CA8030[];
extern char D_00CA8034[];
extern char D_00CA8038[];
extern char D_00CA803C[];
extern char D_00CCB8F0[];

s32 func_00C39160(void) {
    f32 v[8];
    v[0] = *(f32 *)D_00CA8020;
    v[1] = *(f32 *)D_00CA8024;
    v[2] = *(f32 *)D_00CA8028;
    v[3] = *(f32 *)D_00CA802C;
    v[4] = *(f32 *)D_00CA8030;
    v[5] = *(f32 *)D_00CA8034;
    v[6] = *(f32 *)D_00CA8038;
    v[7] = *(f32 *)D_00CA803C;
    return ((s32 *)v)[*(s32 *)D_00CCB8F0];
}
