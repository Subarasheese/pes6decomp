/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0025E970(s32);                         /* extern */
M2C_UNK func_00BA5E50(s32);                         /* extern */
s32 func_00BB4780(void *);                          /* extern */
M2C_UNK func_00BBBFE0(M2C_UNK);                     /* extern */
M2C_UNK func_00BBC080();                            /* extern */

void func_00BB33D0(void *arg0, s32 arg1) {
    func_0025E970(arg1);
    func_00BA5E50(M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x40) = func_00BB4780(arg0);
    func_00BBC080();
    func_00BBBFE0(1);
    M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
    M2C_FIELD(arg0, s8 *, 0x10) = 3;
    M2C_FIELD(arg0, s8 *, 0x14) = 5;
}
