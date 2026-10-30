/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_00D141E0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_00D14D50(s32);                         /* extern */
M2C_UNK func_00D14F60(M2C_UNK);                     /* extern */
M2C_UNK func_00D15060(M2C_UNK);                     /* extern */
M2C_UNK func_00D15360(M2C_UNK);                     /* extern */
M2C_UNK func_00D15450();                            /* extern */
M2C_UNK func_00D16930();                            /* extern */

void func_00AF6100(void) {
    func_00D15450();
    func_00D14D50(func_001F08B0(0x012C0061));
    func_00D16930();
    func_00D14F60(1);
    func_00D15060(0);
    func_00D141E0(0, 0, 0, 0x2D, 0xF, 1, func_001F08B0(0x012C0061));
    func_00D15360(0);
}
