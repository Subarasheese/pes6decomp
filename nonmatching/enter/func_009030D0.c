/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009088C0(void);
s32 func_00909F20(s32, M2C_UNK);                    /* extern */
s32 func_00909FA0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0090B3D0();                            /* extern */
extern char D_0092F0A4[];
extern char D_0092F1AB[];

s32 func_009030D0(void) {
    switch ((*(u8 *)D_0092F0A4)) {                           /* irregular */
    case 0:
        if ((func_00909FA0((*(u8 *)D_0092F1AB) & 1, -1) & 0xFF) == 1) {
            (*(u8 *)D_0092F0A4) += 1;
        }
block_10:
    default:
        return 0;
    case 1:
        if ((func_009088C0() & 0xFF) == 1) {
            (*(u8 *)D_0092F0A4) += 1;
        }
        goto block_10;
    case 2:
        func_0090B3D0();
        if ((func_00909F20(((s32) (*(u8 *)D_0092F1AB) >> 1) & 1, -1) & 0xFF) == 1) {
            return 1;
        }
        goto block_10;
    }
}
