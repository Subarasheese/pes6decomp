/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00847350(M2C_UNK);                     /* extern */
M2C_UNK func_00850A80(M2C_UNK);                     /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
extern s32 D_003EA2F8;
extern char D_008B1610[];
extern char D_008B21C0[];

void func_00851BC0(void) {
    s32 var_a0;
    s32 var_v1;
    s32 var_v1_2;

    if (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) < 3) {
        func_00850A80(0x1E);
        var_a0 = 1;
        switch (1) {                                /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_v1 = 0x18;
block_21:
            (*(s32 *)D_008B1610) = var_v1;
            break;
        default:                                    /* switch 2 */
            var_a0 = 0;
            break;
        case 2:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
            var_v1 = 0x10;
            goto block_21;
        }
    } else {
        var_a0 = 0;
        switch (0) {                                /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            var_v1_2 = 0x18;
block_11:
            (*(s32 *)D_008B1610) = var_v1_2;
            break;
        case 2:                                     /* switch 1 */
        case 1:                                     /* switch 1 */
            var_v1_2 = 0x10;
            goto block_11;
        }
    }
    D_003EA2F8 = var_a0;
    func_00847350(8);
}
