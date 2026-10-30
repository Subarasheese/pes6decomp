/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00979270(void *, M2C_UNK);                 /* extern */
s8 func_00BBB8C0(M2C_UNK);                          /* extern */

void func_00B63740(void *arg0) {
    if (func_00979270(M2C_FIELD(arg0, void **, 0), 0) != 0) {
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), s8 *, 0x2D) = func_00BBB8C0(2);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0x3D;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xE;
    }
}
