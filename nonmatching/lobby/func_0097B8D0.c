/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00828050(s32);                             /* extern */
s32 func_009DE010();                                /* extern */
M2C_UNK func_009DE1C0();                            /* extern */
M2C_UNK func_009DE240(s8 *, M2C_UNK);               /* extern */
extern void *D_00A68D98;
extern char D_00A68DA0[];
extern char D_00A68DA8[];

s32 func_0097B8D0(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A68D98, u8 *, 2) != 0) {
        func_009DE1C0();
    }
    func_009DE240(((void *)D_00A68DA8), 0x200);
    temp_v0 = func_009DE010();
    switch (temp_v0) {                              /* irregular */
    case 1:
        if (func_00828050((*(s32 *)D_00A68DA0)) == 0) {
            func_0026E840(0x8C008005);
            M2C_FIELD(D_00A68D98, s8 *, 0) = 6;
        } else {
            func_0026E840(0x84028400);
            M2C_FIELD(D_00A68D98, s8 *, 0) = 2;
        }
        break;
    case 2:
        if (M2C_FIELD(D_00A68D98, u8 *, 2) == 0) {
            if ((*(s8 *)D_00A68DA8) != 0) {
                M2C_FIELD(D_00A68D98, s8 *, 0) = 5;
            } else {
                goto block_14;
            }
        } else {
block_14:
            M2C_FIELD(D_00A68D98, s8 *, 1) = 1;
            M2C_FIELD(D_00A68D98, s8 *, 0) = 7;
        }
        break;
    }
    return 0;
}
