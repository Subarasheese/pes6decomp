/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
extern f32 D_003E9CA0;
extern char D_00591E4C[];
extern char D_005926E2[];
extern char D_0059273C[];

void func_00AB3390(void) {
    f32 temp_f0;

    (*(s8 *)D_00591E4C) = 0;
    temp_f0 = (f32) func_002AE670(0x3C);
    (*(s32 *)D_0059273C) = (s32) (*(u8 *)D_005926E2);
    D_003E9CA0 = temp_f0;
}
