/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009342C0(s32, s32);
extern s32 func_001F08B0(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
u8 func_00933050();                                 /* extern */
s32 func_00936250();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009C14D0(void *, s32);                 /* extern */
M2C_UNK func_009E0260();                            /* extern */
M2C_UNK func_009E0370(u8, M2C_UNK);                 /* extern */
M2C_UNK func_009E0380(M2C_UNK);                     /* extern */
extern void *D_00A68D90;

s32 func_0097B2B0(void) {
    s32 temp_v0;
    s32 var_a0;
    u8 temp_v0_2;

    func_0099D030(1);
    temp_v0 = func_009342C0((s32) M2C_FIELD(D_00A68D90, s8 *, 0x34), (s32) D_00A68D90);
    switch (temp_v0) {                              /* irregular */
    case 4:
        func_0099D030(0);
        M2C_FIELD(D_00A68D90, u8 *, 0x3C) = func_00933050();
block_7:
        temp_v0_2 = M2C_FIELD(D_00A68D90, u8 *, 0x3C);
        if (temp_v0_2 != 0) {
            if ((s32) temp_v0_2 < 0x33) {
                M2C_FIELD(D_00A68D90, s8 *, 0x39) = 3;
            } else {
                func_0026E840(0x8C008005);
                M2C_FIELD(D_00A68D90, u8 *, 0x3C) = 0U;
                M2C_FIELD(D_00A68D90, s8 *, 0x39) = 4;
                M2C_FIELD(D_00A68D90, s32 *, 0x40) = 0x01FB0008;
            }
        } else {
            func_0026E840(0x8C008005);
            M2C_FIELD(D_00A68D90, s8 *, 0x39) = 4;
            M2C_FIELD(D_00A68D90, s32 *, 0x40) = 0x01FB0009;
        }
        func_009E0370(M2C_FIELD(D_00A68D90, u8 *, 0x3C), 0);
        func_009E0380(1);
        func_009E0260();
        if ((s32) M2C_FIELD(D_00A68D90, s8 *, 0x34) != 1) {
            var_a0 = 0x01F70044;
        } else {
            var_a0 = 0x01F70088;
        }
        func_009C14D0(D_00A68D90, func_001F08B0(var_a0));
    case 0:
        return 0;
    default:
        func_0099D030(0);
        if (func_00936250() == -0x262) {
            M2C_FIELD(D_00A68D90, u8 *, 0x3C) = 0x33U;
            goto block_7;
        }
        M2C_FIELD(D_00A68D90, s8 *, 0x39) = 7;
        M2C_FIELD(D_00A68D90, s8 *, 0x3B) = 3;
        return 0;
    }
}
