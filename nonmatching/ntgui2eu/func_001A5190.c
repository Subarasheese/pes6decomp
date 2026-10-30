/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019AE20(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0019BC00(M2C_UNK);                     /* extern */
s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
M2C_UNK func_001A5008(M2C_UNK);                     /* extern */
M2C_UNK func_001A5018(M2C_UNK);                     /* extern */
extern char D_005CBB98[];

s32 func_001A5190(void) {
    s32 temp_s1;

    if (M2C_FIELD(((void *)D_005CBB98), s32 *, 8) < 0) {
        return 0x80008001;
    }
    if (M2C_FIELD(((void *)D_005CBB98), s32 *, 0x10) != 0) {
        return 0x80000010;
    }
    temp_s1 = func_001A4728();
    if (func_0019AE20(0xB, M2C_FIELD(((void *)D_005CBB98), s32 *, 8)) == 0) {
        func_0019BC00(0xB);
        func_001A5018(0xC00);
        func_001A5008(0);
    }
    M2C_FIELD(((void *)D_005CBB98), s64 *, -0x4468) = 0;
    M2C_FIELD(((void *)D_005CBB98), s32 *, 8) = -1;
    if (temp_s1 != 0) {
        func_001A4778();
    }
    return 0;
}
