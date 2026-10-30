/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
s32 func_001C83D8(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_002DA018(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_00843DA0(s32, s32, s32, s32);          /* extern */
s32 func_00843EF0(s32 *);                           /* extern */
s32 func_00AEEB80(M2C_UNK, M2C_UNK);                /* extern */

s32 func_00AE9050(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8C;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s0;
    s32 var_s1;

    temp_s3 = func_00AEEB80(0x40, 0x4380);
    temp_s2 = func_00AEEB80(0x40, 0x1340);
    if ((temp_s3 != 0) && (temp_s2 != 0)) {
        func_002DA018(arg0, arg1, temp_s3, 0x1E);
        do {

        } while (func_00843EF0(&sp8C) == 0);
        if (sp8C > 0) {
            var_s1 = 0;
            if (sp8C > 0) {
                var_s0 = temp_s3;
loop_7:
                if (func_001C83D8(var_s0 + 8, arg2, 0x100) != 0) {
                    var_s1 += 1;
                    var_s0 += 0x240;
                    if (var_s1 >= sp8C) {
                        goto block_15;
                    }
                    goto loop_7;
                }
                func_00843DA0(arg0, arg1, temp_s3 + (var_s1 * 0x240) + 0x108, temp_s2);
                do {

                } while (func_00843EF0(&sp8C) == 0);
                if (sp8C >= 0) {
                    func_00153FA0(temp_s3);
                    func_00153FA0(temp_s2);
                    return 1;
                }
                goto block_15;
            }
        }
        goto block_15;
    }
block_15:
    func_00153FA0(temp_s3);
    func_00153FA0(temp_s2);
    return 0;
}
