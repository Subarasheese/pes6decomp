/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00831980();                                /* extern */
s32 func_008319D0();                                /* extern */
u32 func_00831E30();                                /* extern */
u32 func_00832060();                                /* extern */
s32 func_008321E0();                                /* extern */
s32 func_008322C0();                                /* extern */
extern char D_008A4398[];
extern char D_008A5F80[];
extern char D_008A5F84[];
extern char D_008AA118[];
extern char D_008AA120[];

s32 func_00822940(void) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_v1;
    u32 temp_s0;
    u32 temp_s1;
    u32 temp_s5;
    u32 var_s4;
    u32 var_v0;

    temp_v0 = func_008322C0();
    var_s2 = temp_v0;
    if ((*(s32 *)D_008A4398) == 0) {
        return 0;
    }
    if ((*(s32 *)D_008A4398) == 0) {
        var_v1 = 9;
    } else {
        var_v1 = (*(s32 *)D_008A5F84);
    }
    if (var_v1 != 6) {
        goto block_37;
    }
    if ((*(s8 *)D_008AA118) == 0) {
        goto block_37;
    }
    temp_s1 = (*(u32 *)D_008A5F80);
    temp_s5 = func_00832060();
    var_s4 = temp_s5 + (func_008319D0() * 0x3C);
    temp_s0 = func_00831E30();
    var_v0 = temp_s0 - (func_00831980() * 0x3C);
    if (temp_s1 != 0) {
        if (temp_s5 == 0) {
            return 0;
        }
        if ((var_s4 != 0) && (var_v0 != 0)) {
            if (temp_s0 != 0) {
                if (var_v0 < temp_s5) {
                    var_v0 = temp_s5;
                }
                if (var_v0 < var_s4) {
                    var_s4 = var_v0;
                }
                if ((temp_s1 >= temp_s5) && (temp_s1 < var_s4)) {
                    var_s2 = 5;
                } else if ((temp_s1 >= var_s4) && (temp_s1 < var_v0)) {
                    var_s2 = 6;
                } else if ((temp_s1 >= var_v0) && (temp_s1 < temp_s0)) {
                    var_s2 = 7;
                } else if (temp_s1 >= temp_s0) {
                    var_s2 = 8;
                }
                if ((func_008321E0() != 1) && (var_s2 != temp_v0)) {
                    (*(s32 *)D_008AA120) = var_s2;
                }
block_37:
                return 1;
            }
            goto block_18;
        }
        goto block_18;
    }
block_18:
    return 0;
}
