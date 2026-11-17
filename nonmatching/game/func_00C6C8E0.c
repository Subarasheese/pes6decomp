/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00151EA0(s32);
s32 func_002D33E0(s32, s32, s32, s32);
void func_0026E840(s32);
void func_00C6C880(void);
extern char D_00CA8160[];
extern char D_00CA8164[];
extern char D_00CA8168[];
extern char D_00CA816C[];
extern char D_00CCBB40[];

void func_00C6C8E0(void) {
    f32 t[4];
    t[0] = *(f32 *)D_00CA8160;
    t[1] = *(f32 *)D_00CA8164;
    t[2] = *(f32 *)D_00CA8168;
    t[3] = *(f32 *)D_00CA816C;
    if (func_002D33E0(((s32 *)t)[(u16)func_00151EA0(4)], 1, 1, 0) != 0) {
        func_0026E840(0x82000019);
        *(void **)(D_00CCBB40 + 4) = (void *)func_00C6C880;
    }
}
