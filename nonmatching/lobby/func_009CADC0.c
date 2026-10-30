/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EA00();                                /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
M2C_UNK func_009D2300(M2C_UNK);                     /* extern */
M2C_UNK func_009D2360(M2C_UNK);                     /* extern */
M2C_UNK func_009D23B0(M2C_UNK);                     /* extern */
extern void *D_00A7DDA0;

s32 func_009CADC0(void) {
    if (M2C_FIELD(D_00A7DDA0, u8 *, 0xB) == 0) {
        if (func_0081EC20(0x20) == 0) {
            if (func_0081EC20(0x80) == 0) {
                if (func_0081EC20(0x40) == 0) {
                    if (func_0081EC20(0x10) == 0) {
                        if (func_0081EC20(0x4000) == 0) {
                            if ((func_0081EC20(0x1000) != 0) && (M2C_FIELD(D_00A7DDA0, u8 *, 0xA) == 0)) {
                                func_0026E840(0x84008401);
                                M2C_FIELD(D_00A7DDA0, u8 *, 0xA) = 1U;
                                func_009D23B0(1);
                            }
                            goto block_39;
                        }
                        if (M2C_FIELD(D_00A7DDA0, u8 *, 0xA) == 0) {
                            func_0026E840(0x84028400);
                            M2C_FIELD(D_00A7DDA0, u8 *, 0xA) = 1U;
                            func_009D23B0(1);
                            goto block_39;
                        }
                        func_0026E840(0x84028400);
                        M2C_FIELD(D_00A7DDA0, s8 *, 6) = 1;
                        func_009D2360(0);
                        func_009D2300(0);
                        return 1;
                    }
                    if (M2C_FIELD(D_00A7DDA0, u8 *, 0xA) == 0) {
                        func_0026E840(0x8400F802);
                        M2C_FIELD(D_00A7DDA0, u8 *, 0xA) = 1U;
                        func_009D23B0(1);
                    }
                    goto block_39;
                }
                if (M2C_FIELD(D_00A7DDA0, u8 *, 0xA) != 0) {
                    func_0026E840(0x8400F802);
                    M2C_FIELD(D_00A7DDA0, u8 *, 0xA) = 0U;
                    func_009D23B0(0);
                }
                goto block_39;
            }
            if ((M2C_FIELD(D_00A7DDA0, u8 *, 0xA) == 0) && (M2C_FIELD(D_00A7DDA0, u8 *, 7) == 1) && (M2C_FIELD(D_00A7DDA0, u8 *, 3) != 0)) {
                func_0026E840(0x8400F802);
                M2C_FIELD(D_00A7DDA0, u8 *, 7) = 0U;
                return 2;
            }
            goto block_39;
        }
        if ((M2C_FIELD(D_00A7DDA0, u8 *, 0xA) == 0) && (M2C_FIELD(D_00A7DDA0, u8 *, 7) == 0) && (M2C_FIELD(D_00A7DDA0, u8 *, 3) != 0)) {
            func_0026E840(0x8400F802);
            M2C_FIELD(D_00A7DDA0, u8 *, 7) = 1U;
            return 2;
        }
block_39:
        if (func_0081EA00() == 0) {
            return 0;
        }
        func_0026E840(0x8C008004);
        M2C_FIELD(D_00A7DDA0, u8 *, 9) = (u8) (M2C_FIELD(D_00A7DDA0, u8 *, 9) == 0);
        return 4;
    }
    M2C_FIELD(D_00A7DDA0, u8 *, 0xA) = 1U;
    func_009D23B0(1);
    M2C_FIELD(D_00A7DDA0, s8 *, 6) = 1;
    func_009D2360(0);
    func_009D2300(0);
    return 1;
}
