/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
s32 func_00154060(M2C_UNK, M2C_UNK);                /* extern */
s8 func_008FA280(s32, s32);                         /* extern */
s8 func_008FA290(s32);                              /* extern */
M2C_UNK func_00909780();                            /* extern */
extern char D_00921D44[];
extern char D_00923FC8[];

s32 func_009044B0(void) {
    s32 var_s2;
    s32 var_s3;
    s8 temp_s1;

    switch ((*(s32 *)D_00921D44)) {                           /* irregular */
    case 0:
        var_s2 = 0;
        (*(s32 *)D_00923FC8) = func_00154060(1, 0xB7C);
        if (0 < 2) {
            do {
                M2C_FIELD(((*(s32 *)D_00923FC8) + var_s2), s8 *, 0x28) = func_008FA290(var_s2 & 0xFF);
                temp_s1 = M2C_FIELD(((*(s32 *)D_00923FC8) + var_s2), s8 *, 0x28);
                var_s3 = 0;
                if (temp_s1 > 0) {
                    do {
                        M2C_FIELD(((var_s2 * 0x12) + (*(s32 *)D_00923FC8) + var_s3), s8 *, 4) = func_008FA280(var_s2 & 0xFF, var_s3 & 0xFF);
                        var_s3 += 1;
                    } while (var_s3 < temp_s1);
                }
                var_s2 += 1;
            } while (var_s2 < 2);
        }
        func_00909780();
        (*(s32 *)D_00921D44) += 1;
    case 1:
    default:
        return 0;
    case 2:
        (*(s32 *)D_00921D44) = 0;
        func_00153FA0((*(s32 *)D_00923FC8));
        (*(s32 *)D_00923FC8) = 0;
        return 1;
    }
}
