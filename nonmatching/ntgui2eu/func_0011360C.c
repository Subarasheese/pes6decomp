/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00113770(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00113830(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00114590(void *, s32);                 /* extern */
M2C_UNK func_00114940(void *);                      /* extern */
s32 func_00115720(void *);                          /* extern */
M2C_UNK func_001169EC(M2C_UNK);                     /* extern */
extern void *D_006024A8;

void func_0011360C(void *arg0) {
    u8 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x52) ^ 4;
    M2C_FIELD(arg0, u8 *, 0x52) = temp_v0;
    if (temp_v0 & 4) {
        func_00113770(0xB, 2);
    } else {
        func_00113830(0xB, 2);
    }
    M2C_FIELD(D_006024A8, M2C_UNK (**)(s32), 0xC)(func_00115720(arg0));
    func_00114940(arg0);
    func_00114590(arg0, M2C_FIELD(arg0, s32 *, 0x54));
    func_001169EC(8);
}
