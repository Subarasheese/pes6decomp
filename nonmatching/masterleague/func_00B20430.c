/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994760();                              /* extern */
void *func_00994C60(s32, s32);                      /* extern */
M2C_UNK func_00AFA850(s32, s32);                    /* extern */

void func_00B20430(void) {
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = func_00994760();
    var_s2 = 0;
    do {
        var_s1 = 0;
loop_2:
        temp_v0 = func_00994C60(var_s2, var_s1);
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 4) != 0)) {
            if (((u64) ((s64) M2C_FIELD(temp_v0, u16 *, 0) << 0x35) >> 0x3C) != 6) {

            } else {
                func_00AFA850(var_s2 & 0xFF, var_s1 & 0xFF);
            }
        }
        var_s1 += 1;
        if (var_s1 < 0x25) {
            goto loop_2;
        }
        var_s2 += 1;
    } while (var_s2 < 0x48);
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0x61AB8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x61ABC) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x61AC0) = 0;
    }
}
