/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165AE0(s32);                         /* extern */
extern char D_011E6B70[];
extern char D_011E6B80[];
extern char D_011E6B90[];

void func_0015DF20(void) {
    s32 *var_s1;
    s32 *var_s2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_s0;

    var_s2 = ((void *)D_011E6B80);
    var_s1 = ((void *)D_011E6B70);
    var_s0 = 3;
    do {
        temp_a0 = *var_s1;
        if (temp_a0 != 0) {
            func_00165AE0(temp_a0);
        }
        temp_a0_2 = *var_s2;
        var_s2 += 4;
        if (temp_a0_2 != 0) {
            func_00165AE0(temp_a0_2);
        }
        var_s0 -= 1;
        var_s1 += 4;
    } while (var_s0 >= 0);
    if ((*(s32 *)D_011E6B90) != 0) {
        func_00165AE0((*(s32 *)D_011E6B90));
    }
    temp_a0_3 = *(s32 *)0x011E6B94;
    if (temp_a0_3 != 0) {
        func_00165AE0(temp_a0_3);
    }
    temp_a0_4 = *(s32 *)0x011E6B68;
    if (temp_a0_4 != 0) {
        func_00165AE0(temp_a0_4);
    }
    temp_a0_5 = *(s32 *)0x011E6B64;
    if (temp_a0_5 != 0) {
        func_00165AE0(temp_a0_5);
    }
}
