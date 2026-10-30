/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_00994C60(s32, s32);                      /* extern */

void func_00AFA770(void) {
    s32 var_s2;
    s32 var_s3;
    void *temp_v0;

    var_s3 = 0;
    do {
        var_s2 = 0;
loop_2:
        temp_v0 = func_00994C60(var_s3 & 0xFF, var_s2 & 0xFF);
        if (temp_v0 != NULL) {
            func_001C48E8(temp_v0, 0, 0x10);
            M2C_FIELD(temp_v0, s16 *, 4) = 0;
        }
        var_s2 += 1;
        if (var_s2 < 0x25) {
            goto loop_2;
        }
        var_s3 += 1;
    } while (var_s3 < 0x48);
}
