/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_003119B0(void *, s32);
extern s32 func_0030D990(s32);
s32 func_00341B10(void *arg0, s32 arg1) {
    u8 sp3F;
    s32 temp_v0;
    s32 var_a4;
    s32 var_s0;
    u8 a;
    u8 b;

    M2C_FIELD(arg0, u8 *, 1) = 0U;
    M2C_FIELD(arg0, u8 *, 2) = 0U;
    func_003119B0(&sp3F, arg1);
    var_s0 = 0;
    do {
        temp_v0 = func_0030D990((s32) sp3F);
        if (temp_v0 == 2) {
            M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) + 1);
        } else if (temp_v0 == 1) {
            M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) + 1);
        }
        var_s0 += 1;
        sp3F += 1;
    } while (var_s0 < 0xB);
    M2C_FIELD(arg0, u8 *, 0) = (u8) ((0xA - M2C_FIELD(arg0, u8 *, 1)) - M2C_FIELD(arg0, u8 *, 2));
    b = M2C_FIELD(arg0, u8 *, 2);
    var_a4 = 0;
    if (b == 2) {
        var_a4 = 1;
    } else if (b == 3) {
        a = M2C_FIELD(arg0, u8 *, 1);
        if (a == 3) {
            var_a4 = 1;
        } else if (a == 4) {
            var_a4 = 2;
        } else if (a == 5) {
            var_a4 = 3;
        } else if (a == 6) {
            var_a4 = 4;
        }
    } else if (b == 4) {
        a = M2C_FIELD(arg0, u8 *, 1);
        if (a == 2) {
            var_a4 = 5;
        } else if (a == 3) {
            var_a4 = 6;
        } else if (a == 4) {
            var_a4 = 7;
        } else if (a == 5) {
            var_a4 = 8;
        }
    } else if (b == 5) {
        a = M2C_FIELD(arg0, u8 *, 1);
        if (a == 2) {
            var_a4 = 9;
        } else if (a == 3) {
            var_a4 = 0xA;
        } else if (a == 4) {
            var_a4 = 0xB;
        }
    }
    M2C_FIELD(arg0, s32 *, 4) = var_a4;
    return 1;
}
