/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(M2C_UNK);                         /* extern */
s8 func_00BBB8C0(u8);                               /* extern */
extern char D_005926E6[];

void func_009E2A80(void *arg0) {
    func_00BBB8C0(8U);
    M2C_FIELD(arg0, s8 *, 0x1DC) = 0xFF;
    if ((func_009E1C90(1) & 0xFF) == 1) {
        M2C_FIELD(arg0, s16 *, 0x1D0) = 0;
        M2C_FIELD(arg0, s16 *, 0x1CE) = 0;
        M2C_FIELD(arg0, s8 *, 0x1DA) = func_00BBB8C0((*(u8 *)D_005926E6));
    }
}
