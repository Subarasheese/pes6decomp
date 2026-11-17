/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(f32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_002C3260(s32 *, s32, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_002C3580(f32 *, s32, s32, s32);        /* extern */
s32 func_00C13230(s32, u8 *, s32 *, f32 *, f32 *, u8 *, s32 *, f32 *); /* extern */
s32 func_00C137D0(s32);                             /* extern */
s32 func_00C137F0();                                /* extern */
extern char D_005E3420[];
extern char D_005E3600[];

void func_002C2FA0(M2C_UNK arg0, u8 *arg1) {
    s32 sp120[48];
    f32 sp60[48];
    f32 *var_a3;
    f32 *var_a4;
    u8 *var_a5;
    f32 *var_a7;
    u8 *var_s0;
    f32 *var_s1;
    f32 *var_t0;
    s32 *var_a2;
    s32 *var_a6;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s2;
    s32 var_t1;
    s32 var_t2;
    u8 *temp_a0;

    if (*arg1 == 0) {
        func_001C48E8(((void *)D_005E3420), 0, 0x1E4);
    }
    if (((s32) (*arg1 & 0x7F) % 3) == 0) {
        temp_s4 = func_00C137D0((*(s32 *)D_005E3600));
        temp_s3 = func_00C137F0();
        var_s1 = (f32 *)D_005E3420;
        var_s2 = 0;
        var_s0 = (u8 *)D_005E3420;
        do {
            func_002C3580(sp60, temp_s4, temp_s3, var_s2 & 0xFF);
            func_002C3260(sp120, temp_s4, temp_s3, var_s2 & 0xFF, 0xFF);
            var_t2 = 0;
            var_t0 = sp60;
            var_a7 = var_s1;
            var_a6 = sp120;
            var_a5 = var_s0;
            do {
                var_t1 = 0;
                var_a4 = var_t0;
                var_a3 = var_a7;
                var_a2 = var_a6;
                do {
                    temp_a0 = var_a5 + var_t1;
                    *var_a3 += *var_a4;
                    temp_v0 = temp_a0[0x180] + *var_a2;
                    temp_a0[0x180] = (temp_v0 >= 0xFF) ? 0xFF : temp_v0;
                    var_t1 += 1;
                    var_a4 += 1;
                    var_a3 += 1;
                    var_a2 += 1;
                } while (var_t1 < 6);
                var_t2 += 1;
                var_t0 += 6;
                var_a7 += 6;
                var_a6 += 6;
                var_a5 += 6;
            } while (var_t2 < 8);
            var_s2 += 1;
            var_s1 += 48;
            var_s0 += 0x30;
        } while (var_s2 < 2);
        (*(s32 *)D_005E3600) = func_00C13230(temp_s3, temp_a0 + 0x180, var_a2, var_a3, var_a4, var_a5, var_a6, var_a7);
    }
}
