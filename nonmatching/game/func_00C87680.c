/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_001E5410(void);
extern char D_003F7794[];
extern char D_00CCCDC0[];
extern char D_00CCCDC4[];
extern char D_00CCCDC8[];
extern char D_00CCCDCC[];
extern char D_00CCCDD0[];

void func_00C87680(void) {
    f32 temp_f1;
    s32 var_a0;

    var_a0 = (s16) (*(s16 *)D_003F7794) >> 1;
    if ((*(s16 *)D_003F7794) < 0) {
        var_a0 = (s32) ((*(s16 *)D_003F7794) + 1) >> 1;
    }
    (*(f32 *)D_00CCCDC0) = (f32) (0xFE - var_a0);
    temp_f1 = func_001E5410() / 2.0f;
    (*(s32 *)D_00CCCDC8) = -1;
    (*(s32 *)D_00CCCDCC) = -1;
    (*(s32 *)D_00CCCDD0) = 0;
    (*(f32 *)D_00CCCDC4) = 28.0f - temp_f1;
}
