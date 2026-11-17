/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_0027B5C0(s32);
extern void func_0027C230(s32, s32);
extern s32 func_00C22960(void);
extern char D_00C9F330[];
extern char D_00C9F334[];
extern char D_00C9F338[];
extern char D_00C9F33C[];
extern char D_00C9F340[];
extern char D_00C9F344[];
extern char D_00C9F348[];
extern char D_00C9F34C[];
extern char D_00C9F350[];
extern char D_00C9F234[];
extern char D_00C9F240[];
s32 func_00C229A0(void) {
    f32 t[9];
    t[0] = *(f32 *)D_00C9F330;
    t[1] = *(f32 *)D_00C9F334;
    t[2] = *(f32 *)D_00C9F338;
    t[3] = *(f32 *)D_00C9F33C;
    t[4] = *(f32 *)D_00C9F340;
    t[5] = *(f32 *)D_00C9F344;
    t[6] = *(f32 *)D_00C9F348;
    t[7] = *(f32 *)D_00C9F34C;
    t[8] = *(f32 *)D_00C9F350;
    func_0027C230(func_0027B5C0(((s32 *)t)[*(s32 *)D_00C9F234]), 5);
    *(s32 *)D_00C9F240 = (s32)func_00C22960;
    return 1;
}
