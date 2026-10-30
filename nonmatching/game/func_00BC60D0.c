/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_009B43D0(void);
M2C_UNK func_009E1C90(M2C_UNK);                     /* extern */
void *func_00BC8DB0(s32);                           /* extern */

s32 func_00BC60D0(void **arg0) {
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u8 temp_v0_2;
    u8 temp_v1_2;
    void *temp_v0;

    var_s4 = 0;
    var_s3 = 7;
    func_009E1C90(1);
    var_s2 = 0;
loop_1:
    temp_v0 = func_00BC8DB0(var_s2);
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0);
        var_s1 = 0;
        if ((temp_v1 != 2) && (temp_v1 != 1)) {

        } else {
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 5);
            if (temp_v1_2 != 1) {
                if ((s32) temp_v1_2 <= 0) {
                    goto block_8;
                }
                if ((func_009B43D0() & 0xFF) == 1) {
                    goto block_23;
                }
block_8:
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 5);
                if ((s32) temp_v0_2 > 0) {
                    M2C_FIELD(temp_v0, u8 *, 5) = (u8) (temp_v0_2 - 1);
                }
            } else {
block_23:
                var_s1 = 1;
            }
        }
        if (var_s1 != 0) {
            temp_v1_3 = M2C_FIELD(temp_v0, s32 *, 0);
            switch (temp_v1_3) {                    /* irregular */
            case 1:
                var_s3 = 5;
                break;
            case 2:
                var_s3 = 6;
                break;
            }
            M2C_FIELD(temp_v0, u8 *, 5) = 0U;
            var_s4 = 1;
        }
        if (var_s4 != 0) {
            *arg0 = temp_v0;
        } else {
            goto block_24;
        }
    } else {
block_24:
        var_s2 += 1;
        if (var_s2 >= 6) {

        } else {
            goto loop_1;
        }
    }
    return var_s3;
}
