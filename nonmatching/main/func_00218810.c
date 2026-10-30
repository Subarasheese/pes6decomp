/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E9A04;
extern char D_00537B50[];
extern char D_00537B54[];
extern M2C_UNK func_00219D30;

s32 func_00218810(void *arg0) {
    s32 *var_a2;
    s32 *var_a3;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a4;
    s32 var_a5;
    s32 var_v0;

    var_a3 = M2C_FIELD(arg0, s32 **, 0xA8);
    var_a5 = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xAC);
    temp_a1 = *var_a3;
    var_a4 = 0;
    if (temp_a1 != temp_v1) {
        var_a2 = var_a3;
        do {
            var_a2 += 4;
            var_a5 += 1;
        } while (*var_a2 != temp_v1);
    }
    if (temp_a1 != &func_00219D30) {
        do {
            var_a3 += 4;
            var_a4 += 1;
        } while (*var_a3 != &func_00219D30);
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0xBC);
    var_v0 = var_a4 - var_a5;
    var_a2_2 = 0;
    var_a1 = 0;
    if (temp_v1_2 != 0) {
        if (temp_v1_2 >= 4) {
            var_a1 = 2;
        } else {
            var_a1 = 1;
        }
    }
    switch (var_a1) {                               /* irregular */
    case 1:
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) + 1);
        D_003E9A04 += 1;
        M2C_FIELD(arg0, s32 *, 0xBC) = 0;
        break;
    case 2:
        var_a2_2 = -0x7A;
        break;
    }
    if (var_a2_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = var_a2_2;
        var_v0 = -0x7E;
        if ((*(s32 *)D_00537B50) == 0) {
            (*(s32 *)D_00537B50) = 1;
            (*(s32 *)D_00537B54) = var_a2_2;
            return -0x7E;
        }
    }
    return var_v0;
}
