/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F82B0(s32, s32);
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
u8 func_00BC4110(u8, M2C_UNK, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BC91D0(M2C_UNK, s32);                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00C1B400(M2C_UNK);                         /* extern */
extern s32 D_003EB1A4;
extern u8 D_003EB1A8;

s32 func_00C0C8B0(void *arg0) {
    s32 temp_v0_2;
    s32 var_s0;
    u8 temp_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (D_003EB1A4 == 0) {
        D_003EB1A8 = M2C_FIELD(temp_v1, u8 *, 0x34);
        func_00B912F0(0x21, 0x1C);
        func_00BC3FB0(0x20000);
        func_001B66C0(0xF10028);
        D_003EB1A4 = 1;
    }
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            temp_v0 = func_00BC4110(M2C_FIELD(temp_v1, u8 *, 0x34), 0, 2, 1);
            if (temp_v0 != M2C_FIELD(temp_v1, u8 *, 0x34)) {
                M2C_FIELD(temp_v1, u8 *, 0x34) = temp_v0;
                func_00BC91D0(0, func_00C1B400(0));
                func_0026E840(0x8400F803);
            }
            return 0;
        }
        func_0026E840(0x84008401);
        D_003EB1A4 = 0;
        M2C_FIELD(temp_v1, u8 *, 0x34) = (u8) D_003EB1A8;
        func_00BC91D0(0, func_00C1B400(0));
        return 2;
    }
    var_s0 = 0;
    D_003EB1A8 = M2C_FIELD(temp_v1, u8 *, 0x34);
    do {
        temp_v0_2 = func_002F82B0((s32) M2C_FIELD(arg0, u16 *, 0x2E0), var_s0);
        var_s0 += 1;
        M2C_FIELD(temp_v0_2, u8 *, 0x34) = (u8) D_003EB1A8;
    } while (var_s0 < 4);
    D_003EB1A4 = 0;
    func_0026E840(0x84028400);
    return 1;
}
