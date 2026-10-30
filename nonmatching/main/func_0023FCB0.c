/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00240C80(void);
extern void func_001FC780(void);
extern void func_001BE5B0(s32);
extern void func_0017A700(s32, s32);
extern void func_00241320(void);
s32 func_0021FBC0(u16);                             /* extern */
M2C_UNK func_0026E560(M2C_UNK);                     /* extern */
M2C_UNK func_002918A0(M2C_UNK);                     /* extern */
M2C_UNK func_002D2E90();                            /* extern */
M2C_UNK func_00361EF0(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_00365720(M2C_UNK);                     /* extern */
M2C_UNK func_008CC430();                            /* extern */
extern s32 D_003E9A9C;
extern char D_0053C300[];
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591C09[];

s32 func_0023FCB0(void) {
    switch (D_003E9A9C) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_0026E560(0x9A080400);
        if (((*(u8 *)D_00591C09) == 5) || ((*(u8 *)D_00591C09) == 7) || ((*(u8 *)D_00591C09) == 0xA)) {
            func_001BE5B0(0);
        }
        func_002918A0(0);
        if ((*(u8 *)D_00591C09) != 0xA) {
            func_002D2E90();
            func_00241320();
            func_00365720(0);
            if (((*(u16 *)D_00591BB0) != 0x111) && ((*(u16 *)D_00591BB0) != 0x110)) {
                func_00361EF0(0, func_0021FBC0((*(u16 *)D_00591BB0)), 2);
            }
            if (((*(u16 *)D_00591BB2) != 0x111) && ((*(u16 *)D_00591BB2) != 0x110)) {
                func_00361EF0(1, func_0021FBC0((*(u16 *)D_00591BB2)), 2);
            }
        }
        D_003E9A9C += 1;
block_33:
    default:                                        /* switch 1 */
        return 0;
    case 1:                                         /* switch 1 */
        if (func_00240C80() != 0) {
            func_008CC430();
            (*(s16 *)D_0053C300) = 0;
            D_003E9A9C = 0;
            func_001FC780();
            switch ((*(u8 *)D_00591C09)) {                   /* switch 2; irregular */
            case 10:                                /* switch 2 */
                func_001FC780();
                func_001FC780();
                func_0017A700(0, 0xB);
                break;
            case 7:                                 /* switch 2 */
                func_001FC780();
                func_001FC780();
                func_0017A700(0, 0xA);
                break;
            case 5:                                 /* switch 2 */
                func_001FC780();
                func_001FC780();
                func_0017A700(0, 0xE);
                break;
            default:                                /* switch 2 */
                func_0017A700(0, 5);
                break;
            }
            (*(s16 *)D_0053C300) = 0;
            return 1;
        }
        goto block_33;
    }
}
