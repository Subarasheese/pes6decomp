/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002D3820(M2C_UNK);                     /* extern */
M2C_UNK func_002D39A0(M2C_UNK);                     /* extern */
M2C_UNK func_00622830(M2C_UNK);                     /* extern */
M2C_UNK func_0063A9C0();                            /* extern */
M2C_UNK func_0064D690(M2C_UNK);                     /* extern */
M2C_UNK func_0064D6A0(M2C_UNK);                     /* extern */
M2C_UNK func_00C92370(M2C_UNK);                     /* extern */
extern s32 D_003E9DF8;
extern s32 D_003E9E24;
extern s32 D_003EA188;
extern s32 D_003EA1AC;
extern char D_0065C168[];

s32 func_0063FB90(void) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    switch (D_003EA1AC) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        D_003E9E24 = 0;
        switch (D_003E9DF8) {                       /* switch 2; irregular */
        case 0x45:                                  /* switch 2 */
            var_v0 = 4;
block_34:
            D_003EA188 = var_v0;
            break;
        case 0x41:                                  /* switch 2 */
            var_v0 = 3;
            goto block_34;
        case 0x40:                                  /* switch 2 */
            var_v0 = 2;
            goto block_34;
        case 0x3F:                                  /* switch 2 */
            D_003EA188 = 1;
            break;
        case 0x3E:                                  /* switch 2 */
            D_003EA188 = 0;
            break;
        case 0x2E:                                  /* switch 2 */
            func_0064D6A0(1);
            break;
        case 0x30:                                  /* switch 2 */
            func_0064D690(1);
            break;
        case 0x31:                                  /* switch 2 */
            func_0064D690(1);
            break;
        case 0x33:                                  /* switch 2 */
            func_00622830(1);
            break;
        case 0x44:                                  /* switch 2 */
            var_v0 = 2;
            goto block_34;
        }
        if (D_003E9DF8 == 0x16) {
            func_00C92370(0);
            func_002D39A0(0);
            func_002D3820(0);
            func_0063A9C0();
            (*(u16 *)D_0065C168) = 4;
            D_003EA1AC = 1;
        } else {
            var_s0 = 1;
        }
        break;
    case 1:                                         /* switch 1 */
        if ((*(u16 *)D_0065C168) == 0) {
            var_s0 = 1;
            D_003EA1AC = 0;
        } else {
            (*(u16 *)D_0065C168) -= 1;
        }
        break;
    }
    return var_s0;
}
