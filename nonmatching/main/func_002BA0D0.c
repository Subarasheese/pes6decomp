/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002ABE20(M2C_UNK *, u8, f32);          /* extern */
M2C_UNK func_002ABE90(M2C_UNK *, s32);              /* extern */
extern char D_005E2FD4[];

s32 func_002BA0D0(void *arg0) {
    func_002ABE90(((void *)D_005E2FD4), M2C_FIELD(arg0, s32 *, 4));
    func_002ABE20(((void *)D_005E2FD4), M2C_FIELD(arg0, u8 *, 8), 0.001f * (f32) M2C_FIELD(arg0, s32 *, 0xC));
    return 0;
}
