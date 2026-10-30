/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_009B1150();                                /* extern */
s32 func_009B4D50();                                /* extern */
M2C_UNK func_009B4DC0(M2C_UNK, s32);                /* extern */
extern void *D_00A68D38;

void func_009764A0(void) {
    void *temp_s0;

    temp_s0 = D_00A68D38;
    if (func_0081EC20(0x4000) == 0) {
        if (func_0081EC20(0x1000) == 0) {
            if (func_0081EB60(0x10) == 0) {
                if (func_0081EB60(0x40) != 0) {
                    func_009B4DC0(0x40, func_009B1150());
                }
            } else {
                func_009B4DC0(0x10, func_009B1150());
            }
        } else {
            M2C_FIELD(temp_s0, s32 *, 8) = 1;
            func_0026E840(0x84008401);
            func_009717C0(4);
        }
    } else {
        M2C_FIELD(temp_s0, s32 *, 0x14) = func_009B4D50();
        func_0026E840(0x84028400);
        func_009717C0(4);
    }
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 8) = 1;
        func_009717C0(4);
    }
}
