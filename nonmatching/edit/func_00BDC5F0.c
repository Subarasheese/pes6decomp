/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF390(void);
M2C_UNK func_00BC8D40(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC90A0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC91D0(M2C_UNK, void *);             /* extern */
M2C_UNK func_00BC93A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC9B60(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC9EE0(M2C_UNK);                         /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BF3A10(u16);                             /* extern */
extern void *D_003E7DC0;

void func_00BDC5F0(void) {
    s32 temp_v0;

    if ((M2C_FIELD(D_003E7DC0, s32 *, 0x104) != 0) && (func_00BC9F00() != 0)) {
        if (func_00BF3A10(M2C_FIELD(D_003E7DC0, u16 *, 0xFA)) == 0) {
            func_00BC90A0(0);
            goto block_14;
        }
        func_00BCF390();
        if (((func_00BCF3A0(4) != 0) || (func_00BCF3A0(1) != 1)) && ((func_00BCF3A0(0x20) != 0) || (func_00BCF3A0(8) != 1)) && (func_00BCF3A0(0x1000) == 0)) {
            if (func_00BCF3A0(0x4000) != 0) {
                return;
            }
            M2C_FIELD(M2C_FIELD(D_003E7DC0, void **, 0x70), u8 *, 0x6F) = (u8) M2C_FIELD(D_003E7DC0, u8 *, 0x10C);
            func_00BC91D0(0, M2C_FIELD(D_003E7DC0, void **, 0x70));
            func_00BC8D40(0, 8);
            temp_v0 = func_00BC9EE0(0);
            if ((temp_v0 != 1) && (temp_v0 != 0xC)) {
                func_00BC9B60(0, 0xC);
                func_00BC93A0(0, 1);
            }
block_14:
            M2C_FIELD(D_003E7DC0, s32 *, 0x104) = 0;
        }
    }
}
