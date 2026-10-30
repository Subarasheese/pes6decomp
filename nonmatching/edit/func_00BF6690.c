/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC44D0(u8);                              /* extern */
s32 func_00BF3870(u8);                              /* extern */
extern char D_003A9C60[];
extern char D_00CEB700[];
extern char D_00CEB704[];
extern char D_00CEB708[];

void func_00BF6690(s32 arg0) {
    M2C_UNK *var_s0;
    s32 temp_s5;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;
    u8 temp_s1;

    var_s3 = 0;
    var_s2 = 0;
    var_s0 = ((void *)D_003A9C60);
loop_1:
    temp_s1 = M2C_FIELD(var_s0, u8 *, 1);
    temp_s5 = (*(s32 *)D_00CEB700);
    if (temp_s1 == 0) {
        var_v1 = 0;
    } else if ((func_00BC44D0(temp_s1) == 0) && (temp_s5 != 0)) {
        var_v1 = 0;
    } else if ((*(s32 *)D_00CEB704) == temp_s1) {
        var_v1 = 1;
    } else {
        var_v1 = func_00BF3870(temp_s1);
    }
    if (var_v1 != 0) {
        if ((arg0 != 0x24) && (arg0 != M2C_FIELD(var_s0, u8 *, 1))) {
            var_s2 += 1;
            goto block_14;
        }
    } else {
block_14:
        var_s3 += 1;
        var_s0 += 0x14;
        if (var_s3 < 0x24) {
            goto loop_1;
        }
    }
    (*(s32 *)D_00CEB708) = var_s2;
}
