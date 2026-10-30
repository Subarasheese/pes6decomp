/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017BE40(void *, s32);
extern void func_0017BEF0(void *, s32);
extern void func_00153FA0(void *);
M2C_UNK func_0017BF30(void *, s32);                 /* extern */
M2C_UNK func_0017C030(void *, s32);                 /* extern */
M2C_UNK func_0017C840(void *);                      /* extern */
M2C_UNK func_0017D0A0(void *, s32);                 /* extern */

void func_0017C3B0(void *arg0) {
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;

    var_s1 = 0;
    if (M2C_FIELD(arg0, s8 *, 4) > 0) {
        do {
            func_0017BE40(arg0, var_s1);
            var_s1 += 1;
        } while (var_s1 < M2C_FIELD(arg0, s8 *, 4));
    }
    func_0017C840(arg0);
    var_s1_2 = 0;
    if (M2C_FIELD(arg0, s8 *, 6) > 0) {
        do {
            func_0017C030(arg0, var_s1_2);
            var_s1_2 += 1;
        } while (var_s1_2 < M2C_FIELD(arg0, s8 *, 6));
    }
    var_s1_3 = 0;
    if (M2C_FIELD(arg0, s8 *, 5) > 0) {
        do {
            func_0017D0A0(arg0, var_s1_3);
            var_s1_3 += 1;
        } while (var_s1_3 < M2C_FIELD(arg0, s8 *, 5));
    }
    var_s1_4 = 0;
    if (M2C_FIELD(arg0, s8 *, 7) > 0) {
        do {
            func_0017BF30(arg0, var_s1_4);
            func_0017BEF0(arg0, var_s1_4);
            var_s1_4 += 1;
        } while (var_s1_4 < M2C_FIELD(arg0, s8 *, 7));
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    func_00153FA0(arg0);
}
