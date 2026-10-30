/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B3A0(M2C_UNK);                     /* extern */
s32 func_0019C400(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_001A6958(M2C_UNK, M2C_UNK *, M2C_UNK *);   /* extern */
extern char D_01201490[];
extern char D_012014C0[];
extern M2C_UNK func_0019C4A8;

s32 func_0019C888(void) {
    s32 temp_v0;

    func_0019B3A0(0);
    M2C_FIELD(((void *)D_01201490), s32 *, 0) = func_001A6958(0x210, ((void *)D_01201490), &func_0019C4A8);
    if (M2C_FIELD(((void *)D_01201490), s32 *, 0) < 0) {
        return 0;
    }
    M2C_FIELD(((void *)D_01201490), s32 *, 0xC) = 0;
    temp_v0 = (s32) ((void *)D_012014C0) | 0x20000000;
    M2C_FIELD(((void *)D_01201490), s32 *, 4) = 0;
    M2C_FIELD(((void *)D_01201490), s32 *, 8) = 0;
    M2C_FIELD(((void *)D_01201490), s32 *, 0x14) = (s32) (0x01201600 | 0x20000000);
    M2C_FIELD(((void *)D_01201490), s32 *, 0x10) = temp_v0;
    M2C_FIELD(temp_v0, s16 *, 4) = 0x210;
    M2C_FIELD(temp_v0, s8 *, 6) = 0x45;
    M2C_FIELD(temp_v0, s8 *, 7) = 0x48;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s16 *, 2) = 0;
    M2C_FIELD(((void *)D_01201490), s32 *, 0x18) = func_0019C400(0x100, 0x45, 0x210);
    return 1;
}
