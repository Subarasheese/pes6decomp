/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0098CB50();                            /* extern */
extern s32 D_003E77B4;

u8 func_0098CB10(s32 arg0) {
    func_0098CB50();
    return M2C_FIELD((((arg0 & 0xFF) * 0xC) + D_003E77B4), u8 *, 0x4BB1);
}
