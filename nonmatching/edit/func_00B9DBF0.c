/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00B9C490();                              /* extern */
s32 func_00BF44E0(M2C_UNK, s32);                    /* extern */
s32 func_00BF5890(M2C_UNK);                         /* extern */
s16 func_00BF7950();                                /* extern */
extern char D_00CE40D8[];

s32 func_00B9DBF0(void) {
    s32 temp_s2;
    s32 var_s1;
    s32 var_v1;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = func_00B9C490();
    var_s1 = 0;
    temp_v0 = func_00B9C490();
    if ((M2C_FIELD(temp_v0, s32 *, 0x14) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x20) == 2)) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 1) {
        temp_s2 = func_00BF5890(0) & 0xFF;
        if ((*(s32 *)D_00CE40D8) != 1) {
            if (func_00BF44E0(0, temp_s2 & 0xFF) != 0) {
                var_s1 = 1;
                M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
            }
        } else {
            var_s1 = 1;
            M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
        }
        if (var_s1 != 0) {
            M2C_FIELD(temp_s0, s16 *, 0x3A) = func_00BF7950();
            M2C_FIELD(temp_s0, s32 *, 0x3C) = (s32) (temp_s2 & 0xFF);
            M2C_FIELD(temp_s0, s32 *, 8) = 4;
            M2C_FIELD(temp_s0, s32 *, 0x28) = 0x10;
        }
    }
    return var_s1;
}
