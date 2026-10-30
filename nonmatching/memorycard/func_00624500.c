/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(s32, void *);                     /* extern */
extern char D_003DF3A0[];
extern char D_00530C78[];

void func_00624500(s32 arg0) {
    s32 temp_s2;
    s32 var_a0;
    s32 var_s4;
    void *temp_s1;
    void *var_a1;
    void *var_s3;

    var_s3 = NULL;
    temp_s2 = arg0 & 0xFFFF;
    if ((temp_s2 >= 0x40) && (temp_s2 < 0xCC)) {
        var_s3 = (*(s32 *)D_00530C78) + ((temp_s2 - 0x40) * 0x58);
    }
    if (var_s3 != NULL) {
        M2C_FIELD(var_s3, s8 *, 0x38) = 0;
        var_s4 = 0;
        temp_s1 = ((void *)D_003DF3A0) + ((arg0 & 0xFFFF) * 0x10);
loop_5:
        if ((temp_s2 >= 0x40) && (temp_s2 < 0xCC)) {
            if (var_s4 != 1) {
                var_a0 = M2C_FIELD(temp_s1, s32 *, 0);
            } else {
                var_a0 = M2C_FIELD(temp_s1, s32 *, 4);
            }
        } else {
            var_a0 = 0;
        }
        if (var_s3 == NULL) {
            var_a1 = NULL;
        } else if (var_s4 != 1) {
            var_a1 = var_s3;
        } else {
            var_a1 = var_s3 + 0x31;
        }
        if ((var_a0 != 0) && (var_a1 != NULL) && (func_001C7E10(var_a0, var_a1) != 0)) {
            M2C_FIELD(var_s3, s8 *, 0x38) = 1;
            return;
        }
        var_s4 += 1;
        if (var_s4 >= 2) {

        } else {
            goto loop_5;
        }
    }
}
