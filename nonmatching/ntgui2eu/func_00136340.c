/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001656D0(void *);
extern void func_00165740(void *);
M2C_UNK func_00136100(void *, void *);              /* extern */
M2C_UNK func_00165AE0(s32);                         /* extern */
extern char D_011D7480[];

void func_00136340(void *arg0, void *arg1) {
    s32 sp0;
    s32 sp4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s4;
    s32 temp_s5;
    s32 var_s0;
    s32 var_v1;

    var_v1 = 0;
    var_s0 = 0;
    temp_s4 = M2C_FIELD(arg1, s32 *, 0xC);
    temp_s5 = M2C_FIELD(arg1, s32 *, 0x1C);
    temp_s2 = M2C_FIELD(arg1, s32 *, 0x20);
    temp_s1 = M2C_FIELD(arg1, s32 *, 0x34);
    if (temp_s4 > 0) {
        do {
            var_s0 = var_s0 + 1 + var_v1;
            var_v1 += 1;
        } while (var_v1 < temp_s4);
    }
    if (temp_s5 == temp_s4) {
        sp0 = temp_s1;
        sp4 = M2C_FIELD(arg1, s32 *, 0x38);
    } else {
        func_00165740(arg0);
        if (temp_s2 != temp_s1) {
            sp0 += (s32) ((temp_s4 - temp_s5) * (temp_s1 - temp_s2)) / var_s0;
        }
        temp_s2_2 = M2C_FIELD(arg1, s32 *, 0x24);
        temp_s1_2 = M2C_FIELD(arg1, s32 *, 0x38);
        if (temp_s2_2 != temp_s1_2) {
            sp4 += (s32) ((temp_s4 - temp_s5) * (temp_s1_2 - temp_s2_2)) / var_s0;
        }
    }
    func_001656D0(arg0);
    func_00136100(arg0, arg1);
    if (temp_s5 == 0) {
        if ((*(s32 *)D_011D7480) != 0) {
            func_00165AE0((*(s32 *)D_011D7480));
        }
    }
}
