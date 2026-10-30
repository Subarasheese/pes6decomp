/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001C8590(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern char D_008B0960[];

s32 func_00846960(s32 arg0) {
    func_001C48E8(0, 0x80);
    func_001C8590(arg0, ((void *)D_008B0960), 0x7F);
    return 0;
}
