/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D1A0(u8);                          /* extern */
M2C_UNK func_00C6A440(u8);                          /* extern */
extern char D_00591F24[];

void func_00C68B80(void *arg0) {
    if ((*(u8 *)D_00591F24) != 6) {
        M2C_FIELD(arg0, u8 *, 0x1DE) = (u8) (M2C_FIELD(arg0, u8 *, 0x1DE) + 1);
        if ((s32) M2C_FIELD(arg0, u8 *, 0x1DE) >= 4) {
            func_00C6A440((*(u8 *)D_00591F24));
        }
    } else {
        func_0096D1A0((*(u8 *)D_00591F24));
    }
}
