/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001237D8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0013BC58();                            /* extern */
M2C_UNK func_0013BE10();                            /* extern */
M2C_UNK func_001B02B0(M2C_UNK *, M2C_UNK *);        /* extern */
extern char D_005BE180[];
extern char D_005BE280[];
extern char D_005BE380[];
extern char D_011D9668[];

void func_0013BEF0(M2C_UNK arg0, s64 arg1, void *arg2) {
    s32 temp_v1;
    s32 temp_v1_3;
    u8 temp_v1_2;

    temp_v1 = M2C_FIELD(arg2, s32 *, 0);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 19:                                        /* switch 1 */
        temp_v1_2 = *M2C_FIELD(arg2, u8 **, 8);
        if (((u32) (temp_v1_2 - 0x30) >= 0xAU) && (temp_v1_3 = temp_v1_2 & 0xFF, (temp_v1_3 != 0x2D)) && (temp_v1_3 != 0x23) && (temp_v1_3 != 0x2A) && (temp_v1_3 != 0x2C)) {
            if (temp_v1_3 != 9) {
                M2C_FIELD(arg2, s32 *, 4) = 0;
                return;
            }
            func_0013BE10();
            M2C_FIELD(arg2, s32 *, 4) = 0;
        } else {
            return;
        }
        break;
    case 18:                                        /* switch 1 */
        func_001237D8((((s64) (arg1 << 0x20) >> 0x20) * 0x258) + ((void *)D_011D9668), 0x258);
        switch (arg1) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            func_001B02B0(((void *)D_005BE180), ((void *)D_011D9668));
            break;
        case 1:                                     /* switch 2 */
            func_001B02B0(((void *)D_005BE280), ((void *)D_011D9668) + 0x258);
            break;
        case 2:                                     /* switch 2 */
            func_001B02B0(((void *)D_005BE380), ((void *)D_011D9668) + 0x4B0);
            break;
        }
        func_0013BC58();
        return;
    }
}
