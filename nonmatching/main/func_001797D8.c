/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8228(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_001C8590(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern char D_00396E58[];
extern char D_00510FB0[];

void func_001797D8(s32 arg0, s32 arg1) {
    func_001C8590(((void *)D_00396E58), arg0, 0x7F);
    func_001C8228(((void *)D_00396E58), arg1, 0x7F);
    if (M2C_FIELD(((void *)D_00510FB0), M2C_UNK (**)(s32, M2C_UNK *), 0) != NULL) {
        M2C_FIELD(((void *)D_00510FB0), M2C_UNK (**)(s32, M2C_UNK *), 0)(M2C_FIELD(((void *)D_00510FB0), s32 *, 4), ((void *)D_00396E58));
    }
}
