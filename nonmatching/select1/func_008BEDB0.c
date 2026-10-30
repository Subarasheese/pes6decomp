/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B68B0();                                /* extern */
M2C_UNK func_0023EA10(M2C_UNK);                     /* extern */
M2C_UNK func_008BE730();                            /* extern */
s32 func_008BE800();                                /* extern */
s32 func_008BE900();                                /* extern */
M2C_UNK func_008BE9E0();                            /* extern */
M2C_UNK func_008C05B0(M2C_UNK *, M2C_UNK *);        /* extern */
extern s8 D_003E7504;
extern s32 D_003EA444;
extern char D_0053C300[];
extern char D_008D84C0[];
extern char D_008E1CE0[];

s8 func_008BEDB0(void) {
    s32 temp_v0;
    s32 var_v0;

    switch (D_003EA444) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_008BE730();
        func_008C05B0(((void *)D_008D84C0), ((void *)D_008E1CE0));
        D_003E7504 = 0;
        func_0023EA10(1);
        D_003EA444 += 1;
block_23:
    default:                                        /* switch 1 */
        return 0;
    case 1:                                         /* switch 1 */
        if (func_001B68B0() == 1) {
            D_003EA444 += 1;
        }
        goto block_23;
    case 2:                                         /* switch 1 */
        temp_v0 = func_008BE900();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            M2C_FIELD(((void *)D_0053C300), s8 *, 9) = 1;
            var_v0 = D_003EA444 + 1;
block_18:
            D_003EA444 = var_v0;
            break;
        case 2:                                     /* switch 2 */
            M2C_FIELD(((void *)D_0053C300), s8 *, 9) = 2;
            var_v0 = D_003EA444 + 1;
            goto block_18;
        }
        func_008BE9E0();
        goto block_23;
    case 3:                                         /* switch 1 */
        if (func_008BE800() == 1) {
            D_003EA444 += 1;
        }
        goto block_23;
    case 4:                                         /* switch 1 */
        D_003EA444 = 0;
        return M2C_FIELD(((void *)D_0053C300), s8 *, 9);
    }
}
