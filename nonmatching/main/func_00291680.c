/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00291370(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00291A50();                            /* extern */
extern char D_005A2330[];

void func_00291680(void) {
    s32 var_s2;
    s32 var_s3;
    u8 *var_s1;
    u8 *var_v1_2;
    u8 var_v1;

    func_00291A50();
    if (((void *)D_005A2330) != NULL) {
        var_s3 = 0;
        (*(u8 *)D_005A2330) = 1;
        var_s1 = ((void *)D_005A2330);
        do {
            if (((void *)D_005A2330) == NULL) {
                var_v1 = 0;
            } else {
                var_v1 = (*(u8 *)D_005A2330);
            }
            if (var_v1 != 1) {
                var_v1_2 = NULL;
            } else if ((var_s3 >= 0) && (var_s3 < 2)) {
                var_v1_2 = var_s1 + 6;
            } else {
                var_v1_2 = NULL;
            }
            var_s2 = 0;
            *var_v1_2 = 7;
loop_11:
            func_00291370(var_s3, var_s2, 0);
            var_s2 += 1;
            if (var_s2 < 7) {
                goto loop_11;
            }
            var_s3 += 1;
            var_s1 += 0x9C;
        } while (var_s3 < 2);
    }
}
