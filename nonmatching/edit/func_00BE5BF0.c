/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BC5FA0(s32);
extern void func_00222E80(int, int, u16);
s32 func_00BC5660(u16, s32, M2C_UNK);               /* extern */
M2C_UNK func_00BC5750(u16, s32, s32);               /* extern */
s32 func_00BC5ED0(u16);                             /* extern */
s32 func_00BC6100(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00BE6270(u16, s32);                    /* extern */
s32 func_00BF4480(M2C_UNK);                         /* extern */
s32 func_00BF5890(M2C_UNK);                         /* extern */
M2C_UNK func_00C04330();                            /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */
extern M2C_UNK func_00BE68F0;
extern M2C_UNK func_00BE6CA0;

s32 func_00BE5BF0(void *arg0) {
    M2C_UNK *var_v0;
    s32 temp_s0;
    s32 temp_s3;
    s32 var_s1;
    u16 temp_s2;
    u16 temp_s4;

    temp_s4 = func_00BF4480(0) & 0xFFFF;
    temp_s2 = M2C_FIELD(arg0, u16 *, 0xA);
    temp_s3 = func_00BF5890(0);
    temp_s0 = func_00BC5FA0((s32) temp_s2) & 0xFF;
    var_s1 = 0;
loop_1:
    if (func_00BC5660(temp_s2, var_s1 & 0xFF, 0) == 0) {
        var_s1 += 1;
        if (var_s1 >= 0x20) {
            var_s1 = -1;
        } else {
            goto loop_1;
        }
    }
    func_00222E80((s32) temp_s2, var_s1 & 0xFF, temp_s4);
    func_00BC5750(temp_s2, var_s1 & 0xFF, temp_s0 & 0xFF);
    func_00C04330();
    func_00C1B380(7);
    func_00C1B380(6);
    if (func_00BC5ED0(M2C_FIELD(arg0, u16 *, 8)) != 0) {
        func_00222E80((s32) M2C_FIELD(arg0, u16 *, 8), temp_s3 & 0xFF, 0U);
        func_00BC5750(M2C_FIELD(arg0, u16 *, 8), temp_s3 & 0xFF, 0xFF);
    }
    func_00BE6270(M2C_FIELD(arg0, u16 *, 8), temp_s3);
    if (func_00BC6100(M2C_FIELD(arg0, u16 *, 8), 0) < 0x11) {
        var_v0 = &func_00BE6CA0;
    } else {
        var_v0 = &func_00BE68F0;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = var_v0;
    return 0;
}
