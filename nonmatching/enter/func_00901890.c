/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_009088C0();                            /* extern */
s32 func_00909F20(s32, M2C_UNK);                    /* extern */
s32 func_00909FA0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0090B3D0();                            /* extern */
extern char D_00592754[];
extern char D_0092F0A4[];
extern char D_0092F0D0[];
extern char D_0092F1AB[];

s32 func_00901890(void) {
    u8 var_v1;

    switch ((*(u8 *)D_0092F0A4)) {                           /* irregular */
    case 3:
        return 1;
    case 0:
        if ((func_00909FA0((*(u8 *)D_0092F1AB) & 1, -1) & 0xFF) == 1) {
            var_v1 = (*(u8 *)D_0092F0A4) + 1;
block_14:
            (*(u8 *)D_0092F0A4) = var_v1;
        }
block_15:
    default:
        return 0;
    case 1:
        func_009088C0();
        if (((*(u8 *)D_00592754) != 0) || ((*(s32 *)D_0092F0D0) & 0x1000)) {
            var_v1 = (*(u8 *)D_0092F0A4) + 1;
            goto block_14;
        }
        goto block_15;
    case 2:
        func_0090B3D0();
        if ((func_00909F20(((s32) (*(u8 *)D_0092F1AB) >> 1) & 1, -1) & 0xFF) == 1) {
            var_v1 = (*(u8 *)D_0092F0A4) + 1;
            goto block_14;
        }
        goto block_15;
    }
}
