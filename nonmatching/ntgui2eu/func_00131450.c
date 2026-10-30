/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00130AF8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_011D4DD8[];
extern char D_011D6DD8[];
extern char D_011D6DF0[];
extern char D_011D6DF8[];
extern char D_011D6DFC[];

void func_00131450(void) {
    M2C_UNK *temp_a0;
    M2C_UNK *var_s1;
    s32 *var_s2;
    s32 *var_s3;
    s32 *var_v0;
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = 0xFF;
    var_v0 = ((void *)D_011D4DD8) + 0x1FF8;
    do {
        *var_v0 = 0;
        var_s0 -= 1;
        var_v0 -= 0x20;
    } while (var_s0 >= 0);
    var_s3 = ((void *)D_011D6DF0);
    var_s2 = ((void *)D_011D6DF8);
    var_s1 = ((void *)D_011D6DD8);
    var_s0_2 = 0;
    do {
        temp_a0 = var_s1;
        var_s1 += 0x14;
        func_00130AF8(temp_a0, 0xA, 0xA);
        var_s0_2 -= 1;
        *var_s3 = -1;
        *var_s2 = 0;
        var_s3 += 4;
        var_s2 += 4;
    } while (var_s0_2 >= 0);
    (*(s32 *)D_011D6DFC) = 0;
}
