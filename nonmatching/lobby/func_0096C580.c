/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
s32 func_001C80F0(s32);                             /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009AF5B0(M2C_UNK);                     /* extern */
s32 func_009AF5E0();                                /* extern */
M2C_UNK func_009AF600(M2C_UNK);                     /* extern */

void func_0096C580(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00969AF0();
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
        func_009717C0(0xA);
    } else {
        if (func_0081EC20(0x4000) == 0) {
            if (func_0081EC20(0x1000) == 0) {
                if (func_0081EB60(0x10) == 0) {
                    if ((func_0081EB60(0x40) != 0) && (func_001C80F0(temp_s0 + 0x2C) != 0)) {
                        func_009AF600(0x40);
                        return;
                    }
                    return;
                }
                func_009AF600(0x10);
                return;
            }
            if (func_001C80F0(temp_s0 + 0x2C) == 0) {
                M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
                func_009717C0(0xA);
            } else {
                func_009717C0(9);
            }
            func_0026E840(0x84008401);
            return;
        }
        temp_v0 = func_009AF5E0();
        switch (temp_v0) {                          /* irregular */
        case 1:
            func_009717C0(6);
            break;
        case 0:
            func_009717C0(4);
            break;
        }
        func_009AF5B0(2);
        func_0026E840(0x84028400);
    }
}
