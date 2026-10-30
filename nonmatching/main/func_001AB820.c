/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017BE40(void *, s32);
extern void func_0017BEF0(void *, s32);
M2C_UNK func_0017BF30(void *, s32);                 /* extern */
M2C_UNK func_0017C030(void *, s32);                 /* extern */
M2C_UNK func_0017D0A0(void *, s32);                 /* extern */

void func_001AB820(void *arg0) {
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x10);
    var_s1 = 0;
    if (M2C_FIELD(temp_s0, s8 *, 4) > 0) {
        do {
            func_0017BE40(temp_s0, var_s1);
            var_s1 += 1;
        } while (var_s1 < M2C_FIELD(temp_s0, s8 *, 4));
    }
    var_s1_2 = 0;
    if (M2C_FIELD(temp_s0, s8 *, 7) > 0) {
        do {
            func_0017BF30(temp_s0, var_s1_2);
            var_s1_2 += 1;
        } while (var_s1_2 < M2C_FIELD(temp_s0, s8 *, 7));
    }
    var_s1_3 = 0;
    if (M2C_FIELD(temp_s0, s8 *, 7) > 0) {
        do {
            func_0017BEF0(temp_s0, var_s1_3);
            var_s1_3 += 1;
        } while (var_s1_3 < M2C_FIELD(temp_s0, s8 *, 7));
    }
    var_s1_4 = 0;
    if (M2C_FIELD(temp_s0, s8 *, 5) > 0) {
        do {
            func_0017D0A0(temp_s0, var_s1_4);
            var_s1_4 += 1;
        } while (var_s1_4 < M2C_FIELD(temp_s0, s8 *, 5));
    }
    var_s1_5 = 0;
    if (M2C_FIELD(temp_s0, s8 *, 6) > 0) {
        do {
            func_0017C030(temp_s0, var_s1_5);
            var_s1_5 += 1;
        } while (var_s1_5 < M2C_FIELD(temp_s0, s8 *, 6));
    }
}
