/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002B3650(M2C_UNK *, s32, s32, s32, f32, f32); /* extern */
M2C_UNK func_002B4BF0();                            /* extern */
M2C_UNK func_002B4CB0(void *, M2C_UNK *, f32, f32, f32); /* extern */
extern f32 *D_003E74CC;
extern char Pes6MatchPlayers[];
extern char D_005E26F0[];
extern char D_005E27C0[];

void func_002B3220(void *arg0, f32 (*arg1)(s16, s8), s32 arg2) {
    M2C_UNK *var_s0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f24;
    s16 temp_a3;
    s32 var_s1;
    s8 temp_a1;
    u16 temp_v1_2;
    u8 temp_a1_2;
    void *temp_s3;
    void *temp_s5;
    void *temp_v0;
    void *temp_v1;
    void *var_s4;

    var_s4 = arg0;
    var_s1 = 0;
    var_s0 = ((void *)Pes6MatchPlayers);
    temp_f22 = *D_003E74CC;
    do {
        temp_s3 = arg0 + var_s1;
        temp_a1 = M2C_FIELD(temp_s3, s8 *, 0xD0);
        temp_f24 = ((256.0f * (f32) M2C_FIELD(temp_s3, s8 *, 0xB9)) / 4.0f) / 100.0f;
        temp_a1_2 = M2C_FIELD(temp_s3, u8 *, 0xA2);
        temp_f20 = arg1(M2C_FIELD(var_s4, s16 *, 0x46), temp_a1);
        temp_f23 = arg1(M2C_FIELD(var_s4, s16 *, 0x74), (s8) temp_a1_2);
        temp_f12 = temp_f23;
        temp_s5 = ((void *)D_005E27C0) + (M2C_FIELD(var_s0, u8 *, 0) * 0x30);
        M2C_FIELD(var_s0, f32 *, 0xF0) = temp_f24;
        M2C_FIELD(var_s0, f32 *, 0xF8) = (f32) (((256.0f * (f32) temp_a1) / 4.0f) / 100.0f);
        func_002B4CB0(temp_s5, var_s0, temp_f12, -((256.0f * (f32) temp_a1_2) / 100.0f), temp_f20);
        temp_v0 = ((void *)D_005E26F0) + (M2C_FIELD(var_s0, u8 *, 0) * 8);
        M2C_FIELD(temp_v0, f32 *, 0x10) = (f32) (temp_f23 - M2C_FIELD(temp_s5, f32 *, 0));
        M2C_FIELD(temp_v0, f32 *, 0x14) = (f32) (temp_f20 - M2C_FIELD(temp_s5, f32 *, 8));
        if (arg2 == 0) {

        } else {
            M2C_FIELD(var_s0, f32 *, 0xE0) = (f32) M2C_FIELD(temp_s5, f32 *, 0xC);
            M2C_FIELD(var_s0, f32 *, 0xE4) = (f32) M2C_FIELD(temp_s5, f32 *, 0x10);
            M2C_FIELD(var_s0, f32 *, 0xE8) = (f32) M2C_FIELD(temp_s5, f32 *, 0x14);
            M2C_FIELD(var_s0, u16 *, 0x26) = (u16) M2C_FIELD(temp_s5, u16 *, 0x24);
        }
        temp_a3 = M2C_FIELD(temp_s3, u8 *, 0xE7) << 8;
        temp_v1 = ((void *)D_005E27C0) + (M2C_FIELD(var_s0, u8 *, 0) * 0x30);
        M2C_FIELD(temp_v1, u16 *, 0x26) = (u16) M2C_FIELD(var_s0, u16 *, 0x26);
        M2C_FIELD(temp_v1, s16 *, 0x24) = temp_a3;
        if (arg2 != 0) {
            M2C_FIELD(var_s0, u16 *, 0x26) = (u16) (temp_a3 & 0xFFFF);
        }
        temp_v1_2 = M2C_FIELD(var_s4, u16 *, 0);
        func_002B3650(var_s0, temp_v1_2 & 0x7FFF, (temp_v1_2 >> 0xF) & 0xFF, arg2, (f32) M2C_FIELD(temp_s3, u8 *, 0x2E), temp_f22);
        var_s1 += 1;
        var_s4 += 2;
        var_s0 += 0x240;
    } while (var_s1 < 0x17);
    func_002B4BF0();
}
