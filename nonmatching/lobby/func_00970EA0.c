/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EAE0();                                /* extern */
s32 func_0081EB20();                                /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009B24F0(s32, s32);                    /* extern */
M2C_UNK func_009B2560(M2C_UNK);                     /* extern */
extern void *D_00A68CD0;

void func_00970EA0(void) {
    s32 temp_s1;
    s32 temp_s2;
    void *temp_s0;

    temp_s0 = D_00A68CD0;
    temp_s2 = func_0081EB20() & 0xFF;
    temp_s1 = func_0081EAE0() & 0xFF;
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 4) = 1;
        func_009717C0(8);
    } else {
        if (func_0081EC20(0x1000) != 0) {
            func_0026E840(0x84008401);
            M2C_FIELD(temp_s0, s32 *, 4) = 1;
            func_009717C0(8);
            return;
        }
        if (temp_s2 == 0) {
            if (temp_s1 == 0) {
                if (func_0081EB60(0x10) == 0) {
                    if (func_0081EB60(0x40) == 0) {
                        if (func_0081EC20(1) != 0) {
                            func_009717C0(7);
                            return;
                        }
                        return;
                    }
                    func_009B2560(0x40);
                    return;
                }
                func_009B2560(0x10);
                return;
            }
            goto block_9;
        }
block_9:
        func_009B24F0(temp_s2, temp_s1);
    }
}
