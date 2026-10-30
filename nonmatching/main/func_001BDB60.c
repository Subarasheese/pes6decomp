/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003D18B0[];
extern s32 D_003E992C;
extern M2C_UNK func_001BDBD0;
extern M2C_UNK func_001BDDE0;
extern M2C_UNK func_001BDDF0;

void func_001BDB60(void) {
    s32 temp_v0;

    if (D_003E992C == 0) {
        temp_v0 = func_001BBEC0(&func_001BDDF0, &func_001BDBD0, &func_001BDDE0, 0x3C, 0, ((void *)D_003D18B0));
        func_001BBC60(temp_v0);
        D_003E992C = temp_v0;
    }
}
