/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
s32 func_00228A80();                                /* extern */
s32 func_00229870();                                /* extern */
void *func_00229DF0();                              /* extern */
s32 func_00938F10(u16);                             /* extern */
M2C_UNK func_00939220();                            /* extern */
M2C_UNK func_00939470();                            /* extern */
M2C_UNK func_009614A0(M2C_UNK);                     /* extern */
M2C_UNK func_009762D0();                            /* extern */
M2C_UNK func_00995690();                            /* extern */
M2C_UNK func_00999AE0();                            /* extern */
s32 func_0099B570(M2C_UNK);                         /* extern */
s32 func_0099B6E0(M2C_UNK, u8);                     /* extern */
M2C_UNK func_00AFF3C0();                            /* extern */
M2C_UNK func_00B1B4F0(M2C_UNK, s32, u16, M2C_UNK);  /* extern */
M2C_UNK func_00B1BC00(s32);                         /* extern */
M2C_UNK func_00B1CC10(s32);                         /* extern */
M2C_UNK func_00B1CDD0();                            /* extern */
M2C_UNK func_00B1CF90(M2C_UNK);                     /* extern */
M2C_UNK func_00B1D610();                            /* extern */

void func_00B20840(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_4;
    s32 var_s4;
    u16 var_s0_3;
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        temp_s0 = func_0099B570(4) & 0xFF;
        if (temp_s0 == func_00229870()) {
            func_00995690();
        }
        func_00B1CF90(1);
        func_00B1CDD0();
        var_s0 = 0;
        do {
            func_00B1CC10(var_s0 & 0xFF);
            var_s0 += 1;
        } while (var_s0 < 0x48);
        var_s0_2 = 0;
        do {
            func_00B1BC00(var_s0_2 & 0xFF);
            var_s0_2 += 1;
        } while (var_s0_2 < 0x48);
        func_00B1D610();
        func_00B1CF90(0);
        func_00939470();
        func_00939220();
        temp_s3 = func_00225820() & 0xFF;
        var_s4 = 0;
        temp_s1 = temp_s3 << 5;
        do {
            temp_s0_2 = var_s4 & 0xFF;
            if (temp_s3 >= 0x48) {
                var_s0_3 = 0;
            } else if ((temp_s0_2 & 0xFF) >= 0x10) {
                var_s0_3 = 0;
            } else {
                temp_v0_2 = func_00228A80();
                if (temp_v0_2 == 0) {
                    var_s0_3 = 0;
                } else {
                    var_s0_3 = M2C_FIELD((temp_s1 + temp_v0_2 + ((temp_s0_2 & 0xFF) * 2)), u16 *, 0x325AE);
                }
            }
            if (temp_s3 != (func_00938F10(var_s0_3) & 0xFF)) {
                func_00B1B4F0(0xB, temp_s3, var_s0_3, 0);
            }
            var_s4 += 1;
        } while (var_s4 < 0x10);
        var_s0_4 = 0;
        do {
            func_00B1BC00(var_s0_4 & 0xFF);
            var_s0_4 += 1;
        } while (var_s0_4 < 0x48);
        func_00B1D610();
        func_009762D0();
        if (func_0099B6E0(4, M2C_FIELD(temp_v0, u8 *, 3)) == 1) {
            func_009614A0(1);
        }
        func_00999AE0();
        func_00AFF3C0();
    }
}
