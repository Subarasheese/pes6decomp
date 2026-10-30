/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_008A4BC0[];

s32 func_00824F90(void) {
    func_001C48E8(((void *)D_008A4BC0), 0, 0x410);
    (*(s32 *)D_008A4BC0) = 1;
    return 4;
}
