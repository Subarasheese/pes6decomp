/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00154060(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_001BB710(s32);                         /* extern */
s32 func_001BB730();                                /* extern */

void *func_00256F40(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s3;
    void *var_s0;

    var_s0 = arg0;
    var_s3 = 0;
    if (var_s0 == NULL) {
        var_s0 = func_00154060(1, 0x10);
        var_s3 = 1;
    }
    if (var_s0 != NULL) {
        temp_s2 = func_001BB730();
        temp_s1 = func_001BB730();
        if ((temp_s2 != 0) && (temp_s1 != 0)) {
            M2C_FIELD(var_s0, s32 *, 0) = temp_s2;
            M2C_FIELD(var_s0, s32 *, 4) = temp_s1;
            M2C_FIELD(var_s0, s32 *, 8) = 0;
            M2C_FIELD(var_s0, u8 *, 0xC) = (u8) ((M2C_FIELD(var_s0, u8 *, 0xC) & ~1) | (var_s3 & 1));
        } else {
            func_001BB710(temp_s2);
            func_001BB710(temp_s1);
        }
    }
    return var_s0;
}
