/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001236B8(s32, s32, M2C_UNK);           /* extern */
s32 func_001378E8();                                /* extern */
s32 func_001AD6F8(s32, s32 *);                      /* extern */
extern char D_005B58F0[];
extern s32 *D_011D9600;

void func_0013ADD0(void) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    if ((*(s32 *)D_005B58F0) != 0) {
        func_001236B8((*(s32 *)D_005B58F0), func_001378E8() == 0, 0x40);
    }
    var_s0 = 0;
loop_3:
    if (var_s0 < 4) {
        var_s0 += 1;
        if (func_001AD6F8(*D_011D9600 + (var_s0 * 0x258), D_011D9600) != 0) {
            var_s1 = 1;
        } else {
            goto loop_3;
        }
    }
    temp_a0 = *(s32 *)0x5B58F8;
    if (temp_a0 != 0) {
        func_001236B8(temp_a0, var_s1, 0x40);
    }
}
