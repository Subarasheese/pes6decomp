/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_002DF8E0(void *, s8);                  /* extern */
M2C_UNK func_002E4400(void *, s8);                  /* extern */

void func_00C75070(void *arg0, s8 arg1) {
    s32 temp_s3;
    s32 var_s3;
    s32 var_s5;
    s8 *var_s0;
    s8 temp_a1;
    s8 temp_a1_2;
    s8 temp_s4;
    void **var_s1;
    void *temp_a0;
    void *temp_a0_2;

    var_s5 = 0;
    var_s1 = arg0 + 4;
    temp_a1 = M2C_FIELD(arg0, s8 *, 0);
    temp_s4 = M2C_FIELD(arg0, s8 *, 1);
    temp_s3 = temp_a1 - temp_s4;
    var_s0 = arg0 + (temp_a1 * 4) + 4;
    if (temp_s3 > 0) {
        do {
            temp_a0 = *var_s1;
            var_s1 += 4;
            func_001D7D60(temp_a0, arg1);
            var_s5 += 1;
        } while (var_s5 < temp_s3);
    }
    var_s3 = 0;
    if (temp_s4 > 0) {
        do {
            temp_a0_2 = *var_s1;
            temp_a1_2 = *var_s0;
            var_s1 += 4;
            var_s0 += 1;
            switch (temp_a1_2) {                    /* irregular */
            case 1:
                func_002DF8E0(temp_a0_2, arg1);
                break;
            case 2:
                func_002E4400(temp_a0_2, arg1);
                break;
            }
            var_s3 += 1;
        } while (var_s3 < temp_s4);
    }
}
