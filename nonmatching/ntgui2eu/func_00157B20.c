/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134FB0(s32);                         /* extern */
extern char D_005BEDA8[];
extern char D_005BEDAC[];

void func_00157B20(void) {
    M2C_UNK *var_s0_2;
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_a0_2;

    if ((*(s32 *)D_005BEDA8) == 0) {
        var_s0 = ((void *)D_005BEDA8);
    } else {
        func_00134FB0((*(s32 *)D_005BEDA8));
        (*(s32 *)D_005BEDA8) = 0;
        var_s0 = (s32 *)0x5C0000;
    }
    temp_a0 = M2C_FIELD(var_s0, s32 *, -0x1254);
    if (temp_a0 == 0) {
        var_s0_2 = ((void *)D_005BEDAC);
    } else {
        func_00134FB0(temp_a0);
        M2C_FIELD(var_s0, s32 *, 0) = 0;
        var_s0_2 = (M2C_UNK *)0x5C0000;
    }
    temp_a0_2 = M2C_FIELD(var_s0_2, s32 *, -0x1250);
    if (temp_a0_2 != 0) {
        func_00134FB0(temp_a0_2);
        M2C_FIELD(var_s0_2, s32 *, -0x1250) = 0;
    }
}
