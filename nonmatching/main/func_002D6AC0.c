/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0018A480(s32, u8);                     /* extern */
M2C_UNK func_002D6B70(s32);                         /* extern */
extern s32 D_003E9DA4;
extern char D_0051FF4D[];
extern char D_005E5E20[];

void func_002D6AC0(void) {
    M2C_UNK *var_s1;
    s32 var_s0;
    s32 var_s0_2;

    if ((*(u8 *)D_0051FF4D) != 0) {
        var_s0 = 0;
        do {
            func_002D6B70(var_s0);
            var_s0 += 1;
        } while (var_s0 < 4);
        var_s0_2 = 0;
        var_s1 = ((void *)D_005E5E20);
        do {
            if (D_003E9DA4 == 1) {
                func_0018A480(var_s0_2, 0U);
            } else {
                func_0018A480(var_s0_2, M2C_FIELD(var_s1, u8 *, 5));
            }
            var_s0_2 += 1;
            M2C_FIELD(var_s1, u8 *, 7) = (u8) (M2C_FIELD(var_s1, u8 *, 7) + 1);
            var_s1 += 0xC;
        } while (var_s0_2 < 4);
    }
}
