/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
extern void *D_003EA9CC;

void func_009BE6D0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_s0;

    temp_s0 = D_003EA9CC;
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x7C) != 1) {
            func_009737E0(M2C_FIELD(temp_s0, s32 *, 0x38), 8, arg0);
            func_009737E0(M2C_FIELD(temp_s0, s32 *, 0x3C), 0xA, arg1);
        } else {
            func_009737E0(M2C_FIELD(temp_s0, s32 *, 0x38), 0xB, arg0);
            func_009737E0(M2C_FIELD(temp_s0, s32 *, 0x3C), 0xD, arg1);
            func_009737E0(M2C_FIELD(temp_s0, s32 *, 0x40), 0xF, arg2);
        }
    }
}
