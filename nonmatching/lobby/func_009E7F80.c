/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00A7DF70[];
extern char D_00A7DF74[];

s32 func_009E7F80(void) {
    func_001C48E8(((void *)D_00A7DF70), 0, 0x10);
    (*(s32 *)D_00A7DF74) = 0;
    return 1;
}
