/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EAE0();                                /* extern */
s32 func_0081EB20();                                /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_0093AE20(s32);                             /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009AFC00(M2C_UNK);                     /* extern */
s32 func_009AFF10();                                /* extern */
M2C_UNK func_009AFF50(s32, s32);                    /* extern */
M2C_UNK func_009B0010(M2C_UNK);                     /* extern */
extern void *D_00A68CB8;

void func_0096A8E0(void) {
    s32 temp_s1;
    s32 temp_s2;
    void *temp_s0;

    temp_s0 = D_00A68CB8;
    temp_s2 = func_0081EB20() & 0xFF;
    temp_s1 = func_0081EAE0() & 0xFF;
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 0xC) = 1;
        func_009717C0(9);
    } else {
        if (func_0081EC20(0x4000) == 0) {
            if (func_0081EC20(0x1000) != 0) {
                M2C_FIELD(temp_s0, s32 *, 0xC) = 1;
                func_0026E840(0x84008401);
                func_009717C0(9);
                return;
            }
            if (temp_s2 == 0) {
                if (temp_s1 == 0) {
                    if (func_0081EB60(0x10) == 0) {
                        if (func_0081EB60(0x40) != 0) {
                            func_009B0010(0x40);
                            return;
                        }
                        return;
                    }
                    func_009B0010(0x10);
                    return;
                }
                goto block_13;
            }
block_13:
            func_009AFF50(temp_s2, temp_s1);
            return;
        }
        M2C_FIELD(temp_s0, s32 *, 4) = func_0093AE20(func_009AFF10());
        func_009AFC00(2);
        func_0026E840(0x84028400);
        func_009717C0(6);
    }
}
