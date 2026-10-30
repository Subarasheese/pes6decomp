/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00BC44D0(u8);                              /* extern */
s32 func_00BF3870(u8);                              /* extern */
s32 func_00BF38D0(s32);                             /* extern */
extern char D_003A9C60[];
extern char D_00CEB700[];
extern char D_00CEB704[];
extern char D_00CEB708[];

void func_00BF6980(s32 arg0, s32 arg1) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 temp_s5;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_s2;
    u8 temp_s3;

    M2C_FIELD(((void *)D_00CEB700), s32 *, 0) = arg0;
    if (func_00BF38D0(arg1) == -1) {
        M2C_FIELD(((void *)D_00CEB700), s32 *, 4) = 0x24;
    } else {
        M2C_FIELD(((void *)D_00CEB700), s32 *, 4) = arg1;
    }
    M2C_FIELD(((void *)D_00CEB700), s32 *, 0xC) = 0;
    var_s4 = 0;
    var_s2 = ((void *)D_003A9C60);
    do {
        temp_s3 = M2C_FIELD(var_s2, u8 *, 1);
        if (temp_s3 == 0) {
            var_v1 = 0;
        } else if ((func_00BC44D0(temp_s3) == 0) && (arg0 != 0)) {
            var_v1 = 0;
        } else if ((*(s32 *)D_00CEB704) == temp_s3) {
            var_v1 = 1;
        } else {
            var_v1 = func_00BF3870(temp_s3);
        }
        if (var_v1 != 0) {
            M2C_FIELD(((void *)D_00CEB700), s32 *, 0xC) = (s32) (M2C_FIELD(((void *)D_00CEB700), s32 *, 0xC) + 1);
        }
        var_s4 += 1;
        var_s2 += 0x14;
    } while (var_s4 < 0x24);
    var_s4_2 = 0;
    var_s3 = 0;
    var_s1 = ((void *)D_003A9C60);
loop_19:
    temp_s2 = M2C_FIELD(var_s1, u8 *, 1);
    temp_s5 = M2C_FIELD(((void *)D_00CEB700), s32 *, 0);
    if (temp_s2 == 0) {
        var_v1_2 = 0;
    } else if ((func_00BC44D0(temp_s2) == 0) && (temp_s5 != 0)) {
        var_v1_2 = 0;
    } else if ((*(s32 *)D_00CEB704) == temp_s2) {
        var_v1_2 = 1;
    } else {
        var_v1_2 = func_00BF3870(temp_s2);
    }
    if (var_v1_2 != 0) {
        if ((arg1 != 0x24) && (arg1 != M2C_FIELD(var_s1, u8 *, 1))) {
            var_s3 += 1;
            goto block_31;
        }
    } else {
block_31:
        var_s4_2 += 1;
        var_s1 += 0x14;
        if (var_s4_2 < 0x24) {
            goto loop_19;
        }
    }
    (*(s32 *)D_00CEB708) = var_s3;
}
