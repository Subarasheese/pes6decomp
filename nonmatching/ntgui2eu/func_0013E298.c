/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001237D8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0013DE98();                            /* extern */
M2C_UNK func_0013E1C8();                            /* extern */
M2C_UNK func_001B02B0(M2C_UNK *, M2C_UNK *);        /* extern */
extern char D_005BE480[];
extern char D_011DA048[];

void func_0013E298(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    s32 temp_v1;
    u8 temp_v1_2;

    temp_v1 = M2C_FIELD(arg2, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 19:
        temp_v1_2 = *M2C_FIELD(arg2, u8 **, 8);
        if ((u32) (temp_v1_2 - 0x20) >= 0x5FU) {
            if (temp_v1_2 != 9) {
                M2C_FIELD(arg2, s32 *, 4) = 0;
                return;
            }
            func_0013E1C8();
            M2C_FIELD(arg2, s32 *, 4) = 0;
        } else {
            return;
        }
        break;
    case 18:
        func_001237D8(((void *)D_011DA048), 0x258);
        func_001B02B0(((void *)D_005BE480), ((void *)D_011DA048));
        func_0013DE98();
        return;
    }
}
