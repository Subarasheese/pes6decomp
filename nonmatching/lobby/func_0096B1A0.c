/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C80F0(void *);                          /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009AF5B0(M2C_UNK);                     /* extern */
s32 func_009AF5E0();                                /* extern */
M2C_UNK func_009AF600(M2C_UNK);                     /* extern */
extern s32 D_003EACA4;
extern void *D_00A68CB0;

void func_0096B1A0(void) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s0;

    temp_s0 = D_00A68CB0;
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 0xC) = 1;
        D_003EACA4 = 9;
    } else {
        if (func_0081EC20(0x4000) == 0) {
            if (func_0081EC20(0x1000) == 0) {
                if (func_0081EB60(0x10) == 0) {
                    if ((func_0081EB60(0x40) != 0) && (func_001C80F0(temp_s0 + 0x18) != 0)) {
                        func_009AF600(0x40);
                        return;
                    }
                    return;
                }
                func_009AF600(0x10);
                return;
            }
            if (func_001C80F0(temp_s0 + 0x18) == 0) {
                var_v0 = 9;
                M2C_FIELD(temp_s0, s32 *, 0xC) = 2;
            } else {
                var_v0 = 8;
            }
            D_003EACA4 = var_v0;
            func_0026E840(0x84008401);
            return;
        }
        temp_v0 = func_009AF5E0();
        switch (temp_v0) {                          /* irregular */
        case 1:
            var_v0_2 = 5;
block_14:
            D_003EACA4 = var_v0_2;
            break;
        case 0:
            var_v0_2 = 3;
            goto block_14;
        }
        func_0026E840(0x84028400);
        func_009AF5B0(2);
    }
}
