/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009ECB80(s32);                         /* extern */
M2C_UNK func_009ECCE0(void *, M2C_UNK);             /* extern */

void func_009EEF00(void *arg0, void *arg1, s32 arg2) {
    if (!(M2C_FIELD(arg0, u8 *, 0x40) & 1)) {
        func_009ECB80(arg2);
        M2C_FIELD(arg0, u8 *, 0x40) = (u8) ((M2C_FIELD(arg0, u8 *, 0x40) & ~1) | 1);
        M2C_FIELD(arg0, void **, 0x38) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) - M2C_FIELD(arg1, f32 *, 0x1C));
    }
    func_009ECCE0(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
}
