/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A84E0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0094C7B0();                                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_009A3C80();                            /* extern */
M2C_UNK func_009A4CD0(s32);                         /* extern */
M2C_UNK func_00AE8190(u8);                          /* extern */
M2C_UNK func_00B38AA0(u8);                          /* extern */
extern void *D_003E77B0;
extern void *D_003E7B0C;

s32 func_009A5910(void) {
    s32 temp_v1;
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_009A84E0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x24) != 0) {
            if (M2C_FIELD(temp_v0, s32 *, 8) != 0) {
                if (M2C_FIELD(temp_v0, s32 *, 4) == 0) {
                    return 0;
                }
                if (func_0094C7B0() == 0x12) {
                    temp_v1 = M2C_FIELD(temp_v0, s32 *, 0xC);
                    if ((temp_v1 != 0x15) && (temp_v1 != 0x45) && (temp_v1 != 0x46) && (temp_v1 != 7)) {
                        goto block_19;
                    }
                    if (M2C_FIELD(temp_v0, u8 *, 0) == 0) {

                    } else {
                        goto block_19;
                    }
                } else {
block_19:
                    func_009A4CD0(M2C_FIELD(temp_v0, s32 *, 8));
                    if (M2C_FIELD(temp_v0, s32 *, 0xC) != 0x11) {
                        if (M2C_FIELD(temp_v0, s32 *, 4) != 0) {
                            M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0) * 4) + temp_v0), s32 *, 0x10);
                            M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0) * 4) + temp_v0), s32 *, 0x10) = 0x6B;
                            func_009A3C80();
                        } else {
                            M2C_FIELD(temp_v0, s32 *, 0xC) = 0x6B;
                            if (func_0094C7B0() == 0x38) {
                                if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
                                    func_00958000(0);
                                } else {
                                    func_00958000(2);
                                }
                                func_00B38AA0(M2C_FIELD(D_003E7B0C, u8 *, 0x25));
                            } else if (func_0094C7B0() == 0x36) {
                                if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
                                    func_00958000(0x66);
                                } else {
                                    func_00958000(0x68);
                                }
                                func_00AE8190(M2C_FIELD(D_003E7B0C, u8 *, 0x25));
                            } else if (func_0094C7B0() == 0x37) {
                                if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
                                    func_00958000(0x6E);
                                } else {
                                    func_00958000(0x70);
                                }
                                func_00AE8190(M2C_FIELD(D_003E7B0C, u8 *, 0x25));
                            } else if (func_0094C7B0() == 0x39) {
                                if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
                                    func_00958000(0x77);
                                } else {
                                    func_00958000(0x79);
                                }
                                func_00AE8190(M2C_FIELD(D_003E7B0C, u8 *, 0x25));
                            }
                        }
                        func_0026E840(0x84008401);
                    } else {
                        if (M2C_FIELD(temp_v0, s32 *, 4) != 0) {
                            var_v0 = M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0) * 4) + temp_v0), s32 *, 0x10);
                        } else {
                            var_v0 = 0x6B;
                        }
                        M2C_FIELD(temp_v0, s32 *, 0xC) = var_v0;
                        func_0026E840(0x84008401);
                    }
                }
                goto block_60;
            }
            goto block_60;
        }
        goto block_60;
    }
block_60:
    return 0;
}
