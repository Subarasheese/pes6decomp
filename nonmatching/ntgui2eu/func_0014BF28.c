/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001237D8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0014BDA0();                            /* extern */
M2C_UNK func_001B02B0(M2C_UNK *, M2C_UNK *);        /* extern */
extern char D_005B57E8[];
extern char D_011DFFF8[];

void func_0014BF28(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg2, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 19:
        if ((u32) (*M2C_FIELD(arg2, u8 **, 8) - 0x20) >= 0x5FU) {
            M2C_FIELD(arg2, s32 *, 4) = 0;
            return;
        }
        return;
    case 18:
        func_001237D8(((void *)D_011DFFF8), 0x258);
        func_001B02B0(((void *)D_005B57E8), ((void *)D_011DFFF8));
        func_0014BDA0();
        return;
    }
}
