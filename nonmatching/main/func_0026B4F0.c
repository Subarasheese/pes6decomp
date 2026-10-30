/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BC060(int);
extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003D9A80[];
extern M2C_UNK func_0026B460;

s32 func_0026B4F0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_001BBEC0(0, &func_0026B460, 0, 0x10, 0, ((void *)D_003D9A80));
    func_001BBC60(temp_v0);
    temp_v0_2 = func_001BC060(temp_v0);
    M2C_FIELD(temp_v0_2, s32 *, 0) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 4) = arg0;
    M2C_FIELD(temp_v0_2, s32 *, 8) = arg1;
    M2C_FIELD(temp_v0_2, s32 *, 0xC) = arg2;
    return temp_v0;
}
