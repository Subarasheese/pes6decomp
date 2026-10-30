/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BA52C0(s32, s32, M2C_UNK);           /* extern */
s32 func_00BA6600(M2C_UNK);                         /* extern */

void func_00BB2DB0(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00BA6600(3);
    switch (temp_v0) {                              /* irregular */
    case 0:
        func_00BA52C0(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 4), 0);
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
block_8:
        M2C_FIELD(arg0, s8 *, 0x10) = 0x1B;
        return;
    case 2:
    case 1:
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        goto block_8;
    }
}
