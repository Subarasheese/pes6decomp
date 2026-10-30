/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030F240(void *);
extern s32 func_0030DCC0(void *, void *, s32);
extern int func_003387D0(void *, int);
extern u8 func_0030DBA0(void);
extern int func_00333600(int);
extern s32 func_0030FE30(void *, s32);
extern s32 func_00340C80(f32);
extern s32 func_00338A60(void *, void *);
extern s32 func_0030FC10(s32);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
s32 func_003405E0(f32, f32);                        /* extern */
s32 func_00340880(f32, f32);                        /* extern */
s32 func_00340BF0(f32, f32);                        /* extern */
s32 func_00341090(s32);                             /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern char D_003E61A8[];
extern M2C_UNK func_00344410;
extern M2C_UNK func_00344BA0;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
s32 func_003448F0(void *arg0) {
    s32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    u8 sp6E;
    u8 sp6F;
    f32 var_f20;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    void *temp_v0;
    void *temp_v1;

    if (func_00333600(4) == 0) {
        if (func_0030F240(&sp6E) != 0) {
            if (func_0030FE30(&sp58, 0) != 0) {
                if (func_00341090(sp58) == 0) {
                    func_0030DCC0(&sp60, &sp5C, (s32) sp6E);
                    if (func_00340880(sp60, sp5C) != 0) {
                        if ((func_00341910(0, 5, 0xA) != 0) && (func_00340BF0(sp60, sp5C) == 0)) {
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
        func_0030F240(&sp6F);
        func_0030DCC0(&sp68, &sp64, (s32) sp6F);
        temp_v1 = M2C_FIELD(arg0, void **, 0x48);
        if ((fabsf(M2C_FIELD(temp_v1, f32 *, 0x64) - sp68) < 2048.0f) && (fabsf(M2C_FIELD(temp_v1, f32 *, 0x68) - sp64) < 2048.0f)) {
            var_s0 = 1;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
        } else {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            var_s0 = 0;
            M2C_FIELD(temp_v1, f32 *, 0x64) = sp68;
            M2C_FIELD(temp_v1, f32 *, 0x68) = sp64;
        }
        if (func_0030FC10((s32) sp6F) != 0) {
            M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
            var_s1 = 1;
            if (func_003405E0(sp68, sp64) == 0) {
                var_f20 = 4.0f;
            } else {
                var_f20 = 2.0f;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
            var_f20 = 5.0f;
            var_s1 = 0;
        }
        if ((M2C_FIELD(arg0, s32 *, 0x34) != 0) && (((var_s0 != 0) && (((s32) M2C_FIELD(arg0, s32 *, 0x2C) % func_00340C80(6.0f)) == 0)) || ((var_s1 != 0) && (((s32) M2C_FIELD(arg0, s32 *, 0x34) % func_00340C80(var_f20)) == 0))) && (func_0030DBA0() != 0)) {
            temp_v0 = func_00338AD0(0x80000016, &func_00344410, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61A8));
            func_003389F0(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0x2C));
            func_00338A60(temp_v0, arg0);
        }
        return 0;
    }
    func_003387D0(arg0, (s32) &func_00344BA0);
    return 1;
}
