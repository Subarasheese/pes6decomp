/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A09950(u8);                              /* extern */
s32 func_00BF3FC0(u8);                              /* extern */
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00591F24[];

s32 func_00997650(void *arg0) {
    switch ((*(u8 *)D_00591F24)) {                           /* irregular */
    case 6:
    case 2:
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4D)) {
block_21:
            return 2;
        }
block_11:
    default:
        return 1;
    case 3:
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4D)) {
            goto block_21;
        }
        if ((func_00A09950((*(u8 *)D_00591F24)) == 1) && (M2C_FIELD(arg0, u8 *, 0x16) == 0x1A) && (M2C_FIELD(arg0, u16 *, 0x18) == 4)) {
            goto block_21;
        }
        goto block_11;
    case 1:
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4D)) {
            goto block_21;
        }
        if ((func_00BF3FC0((*(u8 *)D_00591F24)) != 0) && (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4E))) {
            goto block_21;
        }
        if ((func_00A09950((u8) arg0) == 1) && (M2C_FIELD(arg0, u8 *, 0x16) == 0x35)) {
            goto block_21;
        }
        goto block_11;
    }
}
