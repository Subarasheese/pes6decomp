/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0099AC80(void *, void *, void *, void *, void *); /* extern */

s32 func_009579B0(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            func_001C48E8(0, 0x64);
            func_001C4730(arg0, arg1, 0x4C);
            M2C_FIELD(arg0, u8 *, 0x4C) = (u8) M2C_FIELD(arg1, u8 *, 0x2B);
            M2C_FIELD(arg0, u8 *, 0x4D) = (u8) M2C_FIELD(arg1, u8 *, 0x2C);
            M2C_FIELD(arg0, s8 *, 0x4E) = 0;
            if ((s8) M2C_FIELD(arg0, u8 *, 0x4C) == 0x30) {
                M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (s8) M2C_FIELD(arg0, u8 *, 0x4D);
                M2C_FIELD(arg0, u8 *, 0x4D) = 0U;
            }
            M2C_FIELD(arg0, u8 *, 0x4F) = (u8) M2C_FIELD(arg1, u8 *, 0x2E);
            M2C_FIELD(arg0, u8 *, 0x50) = (u8) M2C_FIELD(arg1, u8 *, 0x2F);
            M2C_FIELD(arg0, s8 *, 0x51) = 0;
            if ((s8) M2C_FIELD(arg0, u8 *, 0x4F) == 0x30) {
                M2C_FIELD(arg0, u8 *, 0x4F) = (u8) (s8) M2C_FIELD(arg0, u8 *, 0x50);
                M2C_FIELD(arg0, u8 *, 0x50) = 0U;
            }
            func_0099AC80(arg0 + 0x52, arg0 + 0x59, arg0 + 0x5D, arg0 + 0x4C, arg0 + 0x4F);
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
