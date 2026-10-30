/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BA3A00();                                /* extern */
s32 func_00BA4920(M2C_UNK);                         /* extern */
s32 func_00BA52C0(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_00BA5350(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
s32 func_00BA6F80();                                /* extern */

void func_00BA6EC0(void *arg0) {
    s8 var_v1;

    if (func_00BA6F80() != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
            func_00BA5350(*M2C_FIELD(arg0, s32 **, 8), M2C_FIELD(arg0, s32 *, 0x24), 0, 1);
            if ((func_00BA3A00() != 0) && (func_00BA4920(0) != 0)) {
                var_v1 = 0xB;
                M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            } else {
                var_v1 = 0xC;
                M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            }
        } else {
            var_v1 = 0xC;
            *M2C_FIELD(arg0, s32 **, 8) = func_00BA52C0(M2C_FIELD(arg0, s32 *, 0x24), 0, 1);
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        }
        M2C_FIELD(arg0, s8 *, 0x10) = var_v1;
    }
}
