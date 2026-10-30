/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32 *, s32, M2C_UNK);         /* extern */
s32 func_00221500(s32);                             /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91890(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B92210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s8 func_00BC57E0(s32, s32, M2C_UNK);                /* extern */
M2C_UNK func_00BC8D40(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC91D0(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_00BC93A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC9B60(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BEC780();                                /* extern */
M2C_UNK func_00BF3BF0(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_00BF4060(M2C_UNK, s32);                /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
s32 func_00BF4450(M2C_UNK);                         /* extern */
s32 func_00BF4480(M2C_UNK);                         /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF47D0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF59A0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF5CF0(M2C_UNK);                     /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern M2C_UNK func_00BDDD30;

void func_00BDDBA0(s32 *arg0) {
    s32 sp30;
    s8 sp9F;
    M2C_UNK var_a0;
    s32 *var_a0_2;
    s32 *var_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_v1;

    var_s0 = arg0;
    temp_s1 = func_00C1B460(0) & 0xFFFF;
    if (temp_s1 != 0xFFFF) {
        func_00BF45D0(0, temp_s1, 0, 2, 0);
    } else {
        func_00BF47D0(0);
    }
    func_00BF4060(0, temp_s1);
    func_00BF4370(0);
    func_00B91590(9, 1);
    func_00BF59A0(0);
    func_00BF3BF0(0, &func_00BDDD30);
    func_00BF4060(0, func_00C1B460(0) & 0xFFFF);
    func_001C4730(var_s0, func_00BF4450(0), 0x7C);
    var_a0 = 1;
    if (func_00BEC780() != 1) {
        var_a0 = 0;
    }
    func_00B91890(var_a0, 0);
    func_00BF5CF0(1);
    func_00B92210(1, 0, 0);
    temp_s1_2 = func_00BF4480(0) & 0xFFFF;
    if (func_00221500(temp_s1_2) == 0) {
        var_a0_2 = &sp30;
        var_v1 = 0x1F;
        do {
            var_v1 -= 1;
            *var_a0_2 = *var_s0;
            var_s0 += 4;
            var_a0_2 += 4;
        } while (var_v1 > 0);
        sp9F = func_00BC57E0(temp_s1_2, func_00C1B460(0) & 0xFFFF, 0);
        func_00BC91D0(0, &sp30);
    }
    func_00BC9B60(0, 0xC);
    func_00BC93A0(0, 1);
    func_00BC8D40(0, 8);
}
