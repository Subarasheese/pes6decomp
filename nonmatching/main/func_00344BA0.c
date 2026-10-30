/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030F240(void *);
extern int func_003387D0(void *, int);
extern int func_00333600(int);
extern int func_003395B0(void *);
extern s32 func_00338A60(void *, void *);
extern s32 func_00340C80(f32);
extern s32 func_0030DCC0(void *, void *, s32);
extern s32 func_0030FE30(void *, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
s32 func_00340880(f32, f32);                        /* extern */
s32 func_00340BF0(f32, f32);                        /* extern */
s32 func_00341090(s32);                             /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00351D70(void *);                      /* extern */
extern char D_003E61A8[];
extern M2C_UNK func_00344410;
extern M2C_UNK func_003448F0;

s32 func_00344BA0(void *arg0) {
    s32 sp60;
    f32 sp64;
    f32 sp68;
    u8 sp6F;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s4;
    s32 var_v0;
    void *temp_s2;

    if (func_00333600(4) == 0) {
        if (func_0030F240(&sp6F) != 0) {
            if (func_0030FE30(&sp60, 0) != 0) {
                if (func_00341090(sp60) == 0) {
                    func_0030DCC0(&sp68, &sp64, (s32) sp6F);
                    if (func_00340880(sp68, sp64) != 0) {
                        if ((func_00341910(0, 5, 0xA) != 0) && (func_00340BF0(sp68, sp64) == 0)) {
                            var_v0 = 0;
                        } else {
                            var_v0 = 1;
                        }
                    } else {
                        var_v0 = 0;
                    }
                } else {
                    var_v0 = 0;
                }
            } else {
                var_v0 = 0;
            }
        } else {
            var_v0 = 0;
        }
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        temp_s2 = M2C_FIELD(arg0, void **, 0x48);
        temp_s1 = func_003395B0(M2C_FIELD(arg0, void **, 0x3C));
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x38);
        temp_s4 = temp_s1 - temp_s0;
        if ((temp_s4 >= func_00340C80(5.0f)) || (temp_s0 == 0x8FFFFFFF)) {
            func_00338A60(func_00338AD0(0x80000016, &func_00344410, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61A8)), arg0);
        }
        func_0030DCC0(temp_s2 + 0x64, temp_s2 + 0x68, (s32) M2C_FIELD(temp_s2, u8 *, 0x78));
        M2C_FIELD(arg0, s32 *, 0x38) = temp_s1;
        func_00351D70(temp_s2);
        func_003387D0(arg0, (s32) &func_003448F0);
        return 1;
    }
    return 0;
}
