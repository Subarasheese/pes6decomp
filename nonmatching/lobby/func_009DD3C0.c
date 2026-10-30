/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
extern void func_001D7D60(void *, s8);
extern s32 func_002DB870(void *);
extern void func_001B9A50(void *, s32);
M2C_UNK func_002DB580(void *, u8);                  /* extern */
M2C_UNK func_002DF8E0(s32, s32);                    /* extern */
M2C_UNK func_009DB480(void *, M2C_UNK);             /* extern */
M2C_UNK func_009DC640(void *, s32);                 /* extern */
extern void *D_00A7DEB8;

s32 func_009DD3C0(u8 arg0) {
    s32 temp_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    void *temp_s1;
    void *temp_v0;

    if (D_00A7DEB8 == NULL) {
        return 0;
    }
    temp_s0 = arg0 & 0xFF;
    if (temp_s0 != M2C_FIELD(D_00A7DEB8, u8 *, 0x650)) {
        M2C_FIELD(D_00A7DEB8, u8 *, 0x650) = arg0;
        if (M2C_FIELD(D_00A7DEB8, u8 *, 0x651) != 0) {
            func_001D7D60(M2C_FIELD(D_00A7DEB8, void **, 0x5D8), (s8) arg0);
        }
        func_001B9A50(M2C_FIELD(D_00A7DEB8, void **, 4), (s32) arg0);
        func_002DB580(M2C_FIELD(D_00A7DEB8, void **, 8), arg0);
        if (temp_s0 == 0) {
            var_s4 = 0;
            do {
                temp_v0 = D_00A7DEB8 + (var_s4 * 0x128);
                temp_s1 = temp_v0 + 0x10;
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x10), 0);
                func_001D7D60(M2C_FIELD(temp_s1, void **, 4), 0);
                func_001D7D60(M2C_FIELD(temp_s1, void **, 8), 0);
                func_001D7D60(M2C_FIELD(temp_s1, void **, 0xC), 0);
                var_s3 = 0;
loop_11:
                var_s2 = 0;
loop_12:
                func_009DB480(temp_s1 + (var_s3 * 0x50) + (var_s2 * 0x14) + 0x18, 0);
                var_s2 += 1;
                if (var_s2 < 4) {
                    goto loop_12;
                }
                var_s3 += 1;
                if (var_s3 < 2) {
                    goto loop_11;
                }
                var_s4 += 1;
            } while (var_s4 < 5);
            func_002DF8E0(M2C_FIELD(D_00A7DEB8, s32 *, 0xC), 0);
        } else {
            func_002DF8E0(M2C_FIELD(D_00A7DEB8, s32 *, 0xC), func_002DB870(M2C_FIELD(D_00A7DEB8, void **, 8)));
            func_009DC640(D_00A7DEB8, func_002DB830(M2C_FIELD(D_00A7DEB8, void **, 8)));
        }
    }
    return 1;
}
