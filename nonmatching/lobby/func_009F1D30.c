/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0097B9D0();                            /* extern */
M2C_UNK func_0097B9F0();                            /* extern */
s32 func_0097BA30();                                /* extern */
s32 func_0097F740(u8, void *);                      /* extern */
s32 func_00980430(u8, void *);                      /* extern */
M2C_UNK func_009DEA70(M2C_UNK);                     /* extern */
M2C_UNK func_009DEB80();                            /* extern */
M2C_UNK func_009E0260();                            /* extern */
M2C_UNK func_009E0380(M2C_UNK);                     /* extern */
M2C_UNK func_009F10D0(u8);                          /* extern */
M2C_UNK func_00D0C770(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_00A7E020;

s32 func_009F1D30(void) {
    s32 temp_v0;
    s32 var_v0;
    u8 temp_v1;
    u8 var_a0;

    if (M2C_FIELD(D_00A7E020, u8 *, 6) != 0) {
        func_0097B9D0();
    }
    temp_v0 = func_0097BA30();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        func_0097B9F0();
        func_009E0380(1);
        func_009E0260();
        func_009DEB80();
        func_009DEA70(1);
        func_009F10D0(M2C_FIELD(D_00A7E020, u8 *, 3));
        if (M2C_FIELD(D_00A7E020, u8 *, 6) == 0) {
            if (M2C_FIELD(D_00A7E020, u8 *, 7) == 0) {
                M2C_FIELD(D_00A7E020, s8 *, 1) = 1;
                func_00D0C770(0xC, 0x6C0041);
            } else {
                temp_v1 = M2C_FIELD(D_00A7E020, u8 *, 3);
                if ((s32) temp_v1 < 0) {
                    var_a0 = 0;
                } else if ((s32) temp_v1 < 0x19) {
                    var_a0 = M2C_FIELD((temp_v1 + D_00A7E020), u8 *, 8);
                } else {
                    var_a0 = 0;
                }
                if (M2C_FIELD(D_00A7E020, u8 *, 0) != 0) {
                    var_v0 = func_00980430(var_a0, D_00A7E020);
                } else {
                    var_v0 = func_0097F740(var_a0, D_00A7E020);
                }
                M2C_FIELD(D_00A7E020, s32 *, 0x3C) = var_v0;
                M2C_FIELD(D_00A7E020, s8 *, 1) = 3;
            }
        } else {
            M2C_FIELD(D_00A7E020, s8 *, 1) = 2;
        }
        break;
    case 2:
        func_0097B9F0();
        M2C_FIELD(D_00A7E020, s8 *, 5) = 2;
        M2C_FIELD(D_00A7E020, s8 *, 1) = 9;
        break;
    }
    return 0;
}
