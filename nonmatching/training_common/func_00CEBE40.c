/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_001B7A90();                            /* extern */
s32 func_001B8DC0();                                /* extern */
void *func_00221150();                              /* extern */
s32 func_00CD01F0(M2C_UNK, s32, u8);                /* extern */
s32 func_00CEBC80(void *);                          /* extern */
M2C_UNK func_00CECDB0();                            /* extern */
s32 func_00CED260();                                /* extern */
M2C_UNK func_00CF0BC0(s32);                         /* extern */
extern void *D_003E7E1C;

s32 func_00CEBE40(void *arg0) {
    u8 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 0x38);
    if ((temp_s1 == (func_00CD01F0(0, M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, u8 *, 0x20)) & 0xFF)) && (M2C_FIELD(func_00221150(), s32 *, 0x40) == 0) && (M2C_FIELD(func_00221150(), s32 *, 0x3C) == 0)) {
        if (func_00CEBC80(arg0) == 0) {
            return 0;
        }
        func_00CF0BC0(M2C_FIELD(arg0, u8 *, 0x20) + 1);
        M2C_FIELD(D_003E7E1C, s32 *, 4) = 4;
        return 1;
    }
    if (func_001B8DC0() == 0) {
        return 0;
    }
    if (func_00CED260() != 0) {
        M2C_FIELD(D_003E7E1C, s32 *, 4) = 4;
        func_00CECDB0();
        func_001B6460(0);
        func_001B7A90();
        func_00CF0BC0(M2C_FIELD(arg0, u8 *, 0x20) + 1);
        return 1;
    }
    return 0;
}
