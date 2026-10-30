/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0095D0F0(void);
extern s32 func_0021E000(u32);
extern s32 func_0095CC30(void);
s32 func_001B68B0();                                /* extern */
M2C_UNK func_008C05B0(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_00934440(s32);                             /* extern */
M2C_UNK func_00934540(s32);                         /* extern */
M2C_UNK func_0095C790();                            /* extern */
s32 func_0095CD40(M2C_UNK *);                       /* extern */
extern s32 D_003EAC60;
extern char D_0053C300[];
extern char D_009651D0[];
extern char D_0096D2D0[];

s8 func_0095D330(void) {
    s32 temp_v0;
    s32 var_v0;

    switch (D_003EAC60) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_00934540(func_0021E000(0x156U));
        if (func_00934440(func_0021E000(0x156U)) == 1) {
            func_0095C790();
            func_008C05B0(((void *)D_009651D0), ((void *)D_0096D2D0));
            D_003EAC60 += 1;
        }
block_26:
    default:                                        /* switch 1 */
        return 0;
    case 1:                                         /* switch 1 */
        func_0095D0F0();
        if (func_001B68B0() == 1) {
            func_0095D0F0();
            D_003EAC60 += 1;
        }
        goto block_26;
    case 2:                                         /* switch 1 */
        temp_v0 = func_0095CD40(((void *)D_0053C300));
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            var_v0 = D_003EAC60 + 1;
block_21:
            D_003EAC60 = var_v0;
            break;
        case 2:                                     /* switch 2 */
            var_v0 = D_003EAC60 + 1;
            goto block_21;
        }
        func_0095D0F0();
        goto block_26;
    case 3:                                         /* switch 1 */
        if (func_0095CC30() != 0) {
            D_003EAC60 += 1;
        }
        goto block_26;
    case 4:                                         /* switch 1 */
        D_003EAC60 = 0;
        return M2C_FIELD(((void *)D_0053C300), s8 *, 9);
    }
}
