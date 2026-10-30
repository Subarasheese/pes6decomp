/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C80F0(void *);                          /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009AF5B0(M2C_UNK);                     /* extern */
s32 func_009AF5E0();                                /* extern */
M2C_UNK func_009AF600(M2C_UNK);                     /* extern */
extern void *D_00A68D50;

void func_00977700(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_00A68D50;
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 4) = 1;
        func_009717C0(9);
    } else {
        if (func_0081EC20(0x4000) == 0) {
            if (func_0081EC20(0x1000) == 0) {
                if (func_0081EB60(0x10) == 0) {
                    if ((func_0081EB60(0x40) != 0) && (func_001C80F0(temp_s0 + 8) != 0)) {
                        func_009AF600(0x40);
                        return;
                    }
                    return;
                }
                func_009AF600(0x10);
                return;
            }
            func_0026E840(0x84008401);
            if (func_001C80F0(temp_s0 + 8) == 0) {
                M2C_FIELD(temp_s0, s32 *, 4) = 1;
                func_009717C0(9);
                return;
            }
            func_009717C0(8);
            return;
        }
        temp_v0 = func_009AF5E0();
        switch (temp_v0) {                          /* irregular */
        case 1:
            func_009717C0(5);
            break;
        case 0:
            func_009717C0(3);
            break;
        }
        func_0026E840(0x84028400);
        func_009AF5B0(2);
    }
}
