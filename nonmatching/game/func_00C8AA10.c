/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
M2C_UNK func_001B9250(s32, M2C_UNK *, s32, s32);    /* extern */
M2C_UNK func_00C80410(M2C_UNK);                     /* extern */
M2C_UNK func_00C82150(M2C_UNK);                     /* extern */
M2C_UNK func_00C8AC90(M2C_UNK);                     /* extern */
extern char D_00591F11[];
extern char D_00CCD074[];
extern char D_00CCD07C[];
extern char D_00CCD088[];
extern M2C_UNK func_00C8B2C0;

void func_00C8AA10(s32 arg0) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;

    if (func_0017A670(0) != 0xC) {
        if (arg0 == 1) {
            if ((*(u8 *)D_00591F11) == 1) {
                (*(s16 *)D_00CCD07C) = 0xFF;
                func_00C8AC90(1);
                func_00C82150(1);
                func_00C80410(1);
                return;
            }
            temp_a3 = (1 & 1) * 4;
            temp_a2 = (*(u8 *)D_00CCD074) & ~4;
            (*(u8 *)D_00CCD074) = temp_a2 | temp_a3;
            func_001B9250((*(s32 *)D_00CCD088), &func_00C8B2C0, temp_a2, temp_a3);
            (*(s16 *)D_00CCD07C) = 0xFF;
            return;
        }
        temp_a3_2 = (0 & 1) * 4;
        temp_a2_2 = (*(u8 *)D_00CCD074) & ~4;
        (*(u8 *)D_00CCD074) = temp_a2_2 | temp_a3_2;
        func_001B9250((*(s32 *)D_00CCD088), &func_00C8B2C0, temp_a2_2, temp_a3_2);
        (*(s16 *)D_00CCD07C) = 0;
        func_00C8AC90(1);
    }
}
