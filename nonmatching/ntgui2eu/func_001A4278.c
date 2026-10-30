/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_001A36E8();                                /* extern */
extern char D_01204D00[];
extern char D_01204F00[];

s32 func_001A4278(s32 arg0, u8 *arg1, u32 arg2) {
    if (func_001A36E8() < 0) {
        return 0xFFFF0000;
    }
    if (arg2 < 3U) {
        M2C_FIELD(((void *)D_01204D00), s32 *, 0) = arg0;
        M2C_FIELD(((void *)D_01204D00), u32 *, 4) = arg2;
        if (func_0019EE30(((void *)D_01204F00), 3, 0, ((void *)D_01204D00), 0x20, ((void *)D_01204D00), 0x20, 0, 0) < 0) {
            return 0xFFFEFFFF;
        }
        switch (arg2) {                             /* irregular */
        case 0:
            *arg1 = M2C_FIELD(((void *)D_01204D00), u8 *, 0x4D00);
block_14:
            return 0;
        case 1:
            *arg1 = (u16) M2C_FIELD(((void *)D_01204D00), u8 *, 0x4D00);
            goto block_14;
        case 2:
            *arg1 = (s32) M2C_FIELD(((void *)D_01204D00), u8 *, 0x4D00);
            goto block_14;
        }
    } else {
        return 0xFFFEFFFE;
    }
}
