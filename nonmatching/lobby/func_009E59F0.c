/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E3D80(s32, s32);                    /* extern */
M2C_UNK func_009E5CD0(u8);                          /* extern */
extern void *D_00A7DF18;

s32 func_009E59F0(s32 arg0) {
    if (D_00A7DF18 == NULL) {
        return 0;
    }
    func_009E3D80(M2C_FIELD(D_00A7DF18, s32 *, 0x58), arg0);
    func_009E5CD0(M2C_FIELD(D_00A7DF18, u8 *, 0x134));
    return 1;
}
