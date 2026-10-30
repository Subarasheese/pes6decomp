/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00163618(int, int);
extern int func_00163470(int);
extern void func_00159E88(void);
extern int func_001634B0(int, int);
extern int func_00164420(int, int);
extern int func_00163740(int);
extern int func_00163820(int, int);
extern int func_00164110(int, int);
extern void func_00159EA0(void);
extern int func_00164240(int, int);
s32 func_0015D228(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    if (func_00163470(M2C_FIELD(arg0, s32 *, 4)) != 1) {
        func_00163740(M2C_FIELD(arg0, s32 *, 4));
    }
    func_00159E88();
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC) - temp_a2;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    temp_v0_2 = (arg1 < temp_v0) ? arg1 : temp_v0;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + temp_a2);
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0_2;
    if (temp_v0_2 == 0) {
        M2C_FIELD(arg0, s8 *, 1) = 3;
        var_s0 = 0;
    } else {
        func_00163820(M2C_FIELD(arg0, s32 *, 4), -1);
        func_00164420(M2C_FIELD(arg0, s32 *, 4), arg2);
        func_00164110(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x2C));
        M2C_FIELD(arg0, s8 *, 1) = 2;
        M2C_FIELD(arg0, s8 *, 3) = 0;
        func_00164240(M2C_FIELD(arg0, s32 *, 4), 0);
        func_001634B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x14));
        func_00163618(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x1C));
        var_s0 = M2C_FIELD(arg0, s32 *, 0x1C);
    }
    func_00159EA0();
    return var_s0;
}
