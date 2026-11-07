/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern float func_001E5410(void);
extern char D_003F7794[];
extern f32 D_00CCCDC0[];
extern f32 D_00CCCDC4[];
extern s32 D_00CCCDC8[];
extern s32 D_00CCCDCC[];
extern s32 D_00CCCDD0[];

void func_00C87680(void) {
    f32 temp_f1;
    s32 var_a0;

    var_a0 = (s16) (*(s16 *)D_003F7794) >> 1;
    if ((*(s16 *)D_003F7794) < 0) {
        var_a0 = (s32) ((*(s16 *)D_003F7794) + 1) >> 1;
    }
    D_00CCCDC0[0] = (f32) (0xFE - var_a0);
    temp_f1 = func_001E5410() / 2.0f;
    D_00CCCDC4[0] = 28.0f - temp_f1;
    D_00CCCDC8[0] = -1;
    D_00CCCDCC[0] = -1;
    D_00CCCDD0[0] = 0;
}
