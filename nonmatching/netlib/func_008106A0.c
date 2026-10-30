/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
M2C_UNK func_003626D0(f32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0084A620(M2C_UNK);                     /* extern */
s32 func_0084A750();                                /* extern */
extern void *D_003EA26C;
extern char D_00886800[];
extern char D_00886804[];

s32 func_008106A0(void) {
    f32 sp18;
    f32 sp1C;
    s8 temp_v1;

    temp_v1 = M2C_FIELD(D_003EA26C, s8 *, 0x28);
    switch (temp_v1) {                              /* irregular */
    case 0:
        sp18 = (*(f32 *)D_00886800);
        sp1C = (*(f32 *)D_00886804);
        func_003626D0(&sp18, 1, 0);
        func_0084A620(1);
        M2C_FIELD(D_003EA26C, s8 *, 0x28) = (s8) (M2C_FIELD(D_003EA26C, s8 *, 0x28) + 1);
block_13:
        return 0;
    case 1:
        if (func_0017F900() != 0) {
            func_0084A620(0);
            M2C_FIELD(D_003EA26C, s8 *, 0x28) = (s8) (M2C_FIELD(D_003EA26C, s8 *, 0x28) + 1);
        case 2:
            if (func_0084A750() == 0) {
                M2C_FIELD(D_003EA26C, s8 *, 0x28) = (s8) (M2C_FIELD(D_003EA26C, s8 *, 0x28) + 1);
                goto block_13;
            }
            M2C_FIELD(D_003EA26C, s8 *, 0x28) = (s8) (M2C_FIELD(D_003EA26C, s8 *, 0x28) + 1);
            return 1;
        }
        goto block_13;
    default:
        return 1;
    }
}
