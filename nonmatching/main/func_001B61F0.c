/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_003D13B0[];
extern char D_005228F0[];
extern char D_00522954[];
extern char D_00522958[];
extern char D_00522964[];
extern M2C_UNK func_001B6070;

void func_001B61F0(void) {
    s32 temp_v0;

    func_001C48E8(((void *)D_005228F0), 0, 0x7C);
    (*(s32 *)D_00522954) = 0;
    (*(s32 *)D_00522958) = 0;
    (*(s32 *)D_00522964) = 0x43200000;
    temp_v0 = func_001BBEC0(0, &func_001B6070, 0, 0, 0, ((void *)D_003D13B0));
    if (temp_v0 != 0) {
        func_001BBC60(temp_v0);
    }
    M2C_FIELD(((void *)D_005228F0), s32 *, 0x78) = temp_v0;
}
