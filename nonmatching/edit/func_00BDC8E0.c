/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BC9EE0(s32);
extern s16 func_00BF3FB0(s32);
extern void func_00B91590(s32, s8);
extern s32 func_00BC57E0(s32, s32, s32);
extern u8 func_00BEC780(void);
extern u16 func_00BF4480(s32);
extern s32 func_00BF5890(s32);
extern u16 func_00BF44B0(s32, s32);
extern void func_00BF3BF0(s32, s32);
extern s32 func_00BC5F40(s32);
M2C_UNK func_00B91890(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B92210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00BC5740(u16);                             /* extern */
M2C_UNK func_00BC7390(M2C_UNK);                     /* extern */
M2C_UNK func_00BC8A60(u16, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00BC8D40(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC91D0(M2C_UNK, void *);             /* extern */
M2C_UNK func_00BC93A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC9B60(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BF3FD0(M2C_UNK, void *);             /* extern */
M2C_UNK func_00BF4060(M2C_UNK, u16);                /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, u16, s64, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF47D0(s64, u16);                    /* extern */
M2C_UNK func_00BF5CF0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF7300();                            /* extern */
M2C_UNK func_00BF7CF0(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */
extern void *D_003E7DC0;
extern M2C_UNK func_00BDCB70;

void func_00BDC8E0(void) {
    M2C_UNK var_a0;
    s32 temp_v0;
    s32 var_v0;
    s64 temp_s0;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_a1_2;
    void *temp_v1;

    temp_a0 = M2C_FIELD(D_003E7DC0, u16 *, 0xF8);
    temp_s0 = (s64) (func_00BF3FB0(0) << 0x30) >> 0x30;
    if (temp_a0 == 0xFFFF) {
        if (func_00BEC780() != 1) {
            M2C_FIELD(D_003E7DC0, s32 *, 0xF4) = 0;
        } else {
            M2C_FIELD(D_003E7DC0, s32 *, 0xF4) = 3;
        }
    } else {
        M2C_FIELD(D_003E7DC0, s32 *, 0xF4) = func_00BC5F40((s32) temp_a0);
    }
    temp_a1 = M2C_FIELD(D_003E7DC0, u16 *, 0xF8);
    if (temp_a1 != 0xFFFF) {
        func_00BF45D0(0, temp_a1, (s64) (temp_s0 << 0x30) >> 0x30, 2, 0);
    } else {
        func_00BF47D0(temp_s0, temp_a1);
    }
    func_00BF4370(0);
    M2C_FIELD(D_003E7DC0, u16 *, 0xFA) = func_00BF4480(0);
    func_00B91590(9, 1);
    func_00BF4060(0, M2C_FIELD(D_003E7DC0, u16 *, 0xF8));
    func_00BF4370(0);
    func_00C1B420(0);
    M2C_FIELD(D_003E7DC0, u16 *, 0xFA) = func_00BF4480(0);
    func_00BF7300();
    func_00BC7390(0xF);
    var_a0 = 1;
    if (func_00BEC780() != 1) {
        var_a0 = 0;
    }
    func_00B91890(var_a0, 0);
    func_00BF5CF0(1);
    func_00BF7CF0(0);
    func_00B92210(1, 0, 0);
    func_00BF3BF0(0, (s32) &func_00BDCB70);
    M2C_FIELD(D_003E7DC0, u16 *, 0xFA) = func_00BF44B0(0, func_00BF5890(0));
    func_00BF3FD0(0, M2C_FIELD(D_003E7DC0, void **, 0x70));
    temp_v1 = D_003E7DC0;
    temp_a1_2 = M2C_FIELD(temp_v1, u16 *, 0xF8);
    if ((temp_a1_2 != 0xFFFF) && (temp_a1_2 != 0x11D) && (temp_a1_2 != 0x11C)) {
        var_v0 = func_00BC57E0((s32) M2C_FIELD(temp_v1, u16 *, 0xFA), (s32) temp_a1_2, 0);
    } else {
        var_v0 = 0xFE;
    }
    M2C_FIELD(temp_v1, s8 *, 0x10C) = (s8) var_v0;
    M2C_FIELD(M2C_FIELD(D_003E7DC0, void **, 0x70), u8 *, 0x6F) = (u8) M2C_FIELD(D_003E7DC0, u8 *, 0x10C);
    func_00B91590(0x19, 1);
    M2C_FIELD(D_003E7DC0, s32 *, 0x104) = 1;
    func_00BC8A60(M2C_FIELD(D_003E7DC0, u16 *, 0xF8), 0, 0);
    if (func_00BC5740(M2C_FIELD(D_003E7DC0, u16 *, 0xFA)) == 0) {
        M2C_FIELD(M2C_FIELD(D_003E7DC0, void **, 0x70), u8 *, 0x6F) = (u8) M2C_FIELD(D_003E7DC0, u8 *, 0x10C);
        func_00BC91D0(0, M2C_FIELD(D_003E7DC0, void **, 0x70));
        func_00BC8D40(0, 8);
        temp_v0 = func_00BC9EE0(0);
        if ((temp_v0 != 1) && (temp_v0 != 0xC)) {
            func_00BC9B60(0, 0xC);
            func_00BC93A0(0, 1);
        }
    }
}
