/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0083FB70(s32, void *);                     /* extern */
s32 func_0083FBE0();                                /* extern */
s64 func_00840EC0();                                /* extern */
s32 func_00841540(s32);                             /* extern */
s32 func_00841D30();                                /* extern */
s32 func_00842640();                                /* extern */
M2C_UNK func_008429F0(M2C_UNK);                     /* extern */
extern void *D_008A4398;
extern char D_008A43E0[];

s32 func_00827690(void) {
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s0;
    void *temp_s1;
    void *temp_v1;
    void *var_s3;

    temp_s1 = D_008A4398;
    if (temp_s1 != NULL) {
        if (M2C_FIELD(temp_s1, s32 *, 0x100A8) != 1) {
            return 1;
        }
        if ((func_00841D30() != 1) && (((s64) (func_00840EC0() << 0x38) >> 0x38) == 2)) {
            temp_v0 = func_0083FBE0();
            if ((temp_v0 >= 0) && (temp_v0 < 4)) {
                if (D_008A4398 != NULL) {
                    var_s0 = M2C_FIELD(D_008A4398, s32 *, 0x49E8);
                } else {
                    var_s0 = 0;
                }
                if (var_s0 != 0) {
                    var_s3 = NULL;
                    temp_s2 = func_00842640();
                    var_a0 = 0;
                    do {
                        temp_v1 = temp_s1 + (var_a0 * 0x10);
                        if (M2C_FIELD(temp_v1, s32 *, 0x10064) == var_s0) {
                            var_s3 = temp_v1 + 0x10064;
                        }
                        var_a0 += 1;
                    } while (var_a0 < 4);
                    if ((var_s3 != NULL) && (temp_s2 != 0) && (func_0083FB70(temp_s2, var_s3) != 0)) {
                        temp_v1_2 = (*(s32 *)D_008A43E0) + 1;
                        (*(s32 *)D_008A43E0) = temp_v1_2;
                        if (temp_v1_2 >= 0x50) {
                            (*(s32 *)D_008A43E0) = 0;
                            temp_v0_2 = func_00841540(temp_s2);
                            switch (temp_v0_2) {    /* irregular */
                            case 3:
                            case 2:
                            case 1:
                            case 0:
                                break;
                            case 4:
                                func_008429F0(1);
                                break;
                            }
                        }
                    }
                }
            }
        }
        goto block_32;
    }
block_32:
    return 1;
}
