/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0091F370();                            /* extern */
M2C_UNK func_0091F8D0();                            /* extern */
s32 func_00A07B40();                                /* extern */
extern char D_00591F14[];
extern char D_005926EC[];
extern char D_00CB52A4[];
extern char D_00CB52A5[];
extern char D_00CB52C8[];

void func_0091F2D0(void) {
    s32 var_v1;

    if ((*(u8 *)D_00591F14) != 0) {
        goto block_1;
    }
    if (func_00A07B40() == 0) {
        goto block_1;
    }
    if ((s32) (*(u8 *)D_00CB52C8) >= (s32) (*(u8 *)D_005926EC)) {
        var_v1 = 1;
    } else {
block_1:
        var_v1 = 0;
    }
    if (!(var_v1 & 0xFF)) {
        (*(s8 *)D_00CB52A4) = 0;
        (*(s8 *)D_00CB52A5) = 0;
        return;
    }
    func_0091F370();
    func_0091F8D0();
}
