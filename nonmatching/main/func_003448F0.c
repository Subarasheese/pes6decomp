/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_0030F240(void *);
extern s32 func_0030DCC0(void *, void *, s32);
extern int func_003387D0(void *, void *, void *);
extern u8 func_0030DBA0(void);
extern int func_00333600(int);
extern s32 func_0030FE30(void *, s32);
extern s32 func_00340C80(f32);
extern s32 func_00338A60(void *, void *);
extern s32 func_0030FC10(s32);
extern s32 func_003389F0(void *, s32, s32);
extern void *func_00338AD0(s32, void *, s32, void *);
extern s32 func_003405E0(f32, f32);
extern s32 func_00340880(f32, f32);
extern s32 func_00340BF0(f32, f32);
extern s32 func_00341090(s32);
extern s32 func_00341910(s32, s32, s32);
extern f32 fabsf(f32);
extern char D_003E61A8[];
extern void func_00344410(void);
extern void func_00344BA0(void);

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
    u8 *p48;
    f32 *temp_v1;

    var_v0 = 0;
    if (func_00333600(4) == 0) {
        if (func_0030F240(&sp6E) != 0) {
            if (func_0030FE30(&sp58, 0) != 0) {
                if (func_00341090(sp58) == 0) {
                    func_0030DCC0(&sp60, &sp5C, sp6E);
                    if (func_00340880(sp60, sp5C) != 0) {
                        if (func_00341910(0, 5, 10) != 0) {
                            var_v0 = func_00340BF0(sp60, sp5C) != 0;
                        } else {
                            var_v0 = 1;
                        }
                    }
                }
            }
        }
    }
    if (var_v0 == 0) {
        func_003387D0(arg0, (void *)func_00344BA0, D_003E61A8);
        return 1;
    }
    func_0030F240(&sp6F);
    func_0030DCC0(&sp68, &sp64, sp6F);
    temp_v1 = *(f32 **)((u8 *)arg0 + 0x48);
    if ((fabsf(temp_v1[0x64 / 4] - sp68) < 2048.0f) && (fabsf(temp_v1[0x68 / 4] - sp64) < 2048.0f)) {
        var_s0 = 1;
        *(s32 *)((u8 *)arg0 + 0x2C) = *(s32 *)((u8 *)arg0 + 0x2C) + 1;
    } else {
        *(s32 *)((u8 *)arg0 + 0x2C) = 0;
        var_s0 = 0;
        temp_v1[0x64 / 4] = sp68;
        temp_v1[0x68 / 4] = sp64;
    }
    if (func_0030FC10(sp6F) != 0) {
        *(s32 *)((u8 *)arg0 + 0x34) = *(s32 *)((u8 *)arg0 + 0x34) + 1;
        var_s1 = 1;
        if (func_003405E0(sp68, sp64) == 0) {
            var_f20 = 4.0f;
        } else {
            var_f20 = 2.0f;
        }
    } else {
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        var_f20 = 5.0f;
        var_s1 = 0;
    }
    if (*(s32 *)((u8 *)arg0 + 0x34) != 0
        && ((var_s0 != 0 && (*(s32 *)((u8 *)arg0 + 0x2C) % func_00340C80(6.0f)) == 0)
            || (var_s1 != 0 && (*(s32 *)((u8 *)arg0 + 0x34) % func_00340C80(var_f20)) == 0))
        && func_0030DBA0() != 0) {
        temp_v0 = func_00338AD0(0x80000016, (void *)func_00344410, *(s32 *)((u8 *)arg0 + 8), D_003E61A8);
        func_003389F0(temp_v0, 0, *(s32 *)((u8 *)arg0 + 0x2C));
        func_00338A60(temp_v0, arg0);
    }
    return 0;
}
