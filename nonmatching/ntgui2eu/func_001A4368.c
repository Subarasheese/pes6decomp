/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_001A36E8();                                /* extern */
extern char D_01204F00[];

s32 func_001A4368(s32 arg0, u8 *arg1, s32 arg2) {
    void *temp_a3;

    if (func_001A36E8() < 0) {
        return 0xFFFF0000;
    }
    M2C_FIELD((void *)0x01204D00, s32 *, 0) = arg0;
    M2C_FIELD((void *)0x01204D00, s32 *, 4) = arg2;
    switch (arg2) {                                 /* irregular */
    case 0:
        M2C_FIELD((void *)0x01204D00, u8 *, 8) = (u8) *arg1;
block_11:
        temp_a3 = (void *)0x01200000 + 0x4D00;
        return (func_0019EE30(((void *)D_01204F00), 2, 0, temp_a3, 0x20, temp_a3, 0x10, 0, 0) > -1) ? 0 : 0xFFFEFFFF;
    case 1:
        M2C_FIELD((void *)0x01204D00, u8 *, 8) = (u16) *arg1;
        goto block_11;
    case 2:
        M2C_FIELD((void *)0x01204D00, u8 *, 8) = (s32) *arg1;
        goto block_11;
    default:
        return 0xFFFEFFFE;
    }
}
