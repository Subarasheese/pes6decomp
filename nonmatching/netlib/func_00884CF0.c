/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 *func_008472D0();                               /* extern */
M2C_UNK func_008504E0(M2C_UNK);                     /* extern */
s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(M2C_UNK *, s16);                  /* extern */
s32 func_00881090();                                /* extern */
s32 func_008810A0();                                /* extern */
s32 func_00D0F5E0();                                /* extern */
s32 func_00D0F610();                                /* extern */
extern char D_008B21C0[];

s32 func_00884CF0(void) {
    func_008504E0(0);
    if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) == 1) {
        if ((func_00D0F5E0() != 0) || (func_008810A0() != 0)) {
            func_008504E0(0x5C0C);
        }
        if (func_00D0F610() != 0) {
            func_008504E0(0xA0);
        }
    } else if ((func_00881090() != 0) && ((func_00D0F5E0() != 0) || (func_008810A0() != 0))) {
        func_008504E0(0x4008);
    }
    return 0;
}
