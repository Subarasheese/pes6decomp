/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003986E4[];
extern char D_003D18F0[];
extern s32 D_003E9934;
extern M2C_UNK func_001BFCE0;
extern M2C_UNK func_001C0060;
extern M2C_UNK func_001C0120;

void func_001BEA20(void) {
    s32 temp_v0;

    if (D_003E9934 == 0) {
        temp_v0 = func_001BBEC0(&func_001C0120, &func_001BFCE0, &func_001C0060, 0x8C, 0, ((void *)D_003D18F0));
        func_001BBC60(temp_v0);
        D_003E9934 = temp_v0;
        (*(s32 *)D_003986E4) = 1;
    }
}
