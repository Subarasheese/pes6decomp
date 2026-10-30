/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001237D8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0013CD80();                            /* extern */
s32 func_001B0444(M2C_UNK *);                       /* extern */
extern char D_011D9DB0[];

void func_0013D000(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    s32 temp_v1;
    u8 temp_a0;

    temp_v1 = M2C_FIELD(arg2, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 19:
        if ((func_001B0444(((void *)D_011D9DB0)) >= 0x100) || (temp_a0 = *M2C_FIELD(arg2, u8 **, 8), (temp_a0 == 9)) || (temp_a0 == 0x2C)) {
            M2C_FIELD(arg2, s32 *, 4) = 0;
        }
        return;
    case 18:
        func_001237D8(((void *)D_011D9DB0), 0x258);
        func_0013CD80();
        return;
    }
}
