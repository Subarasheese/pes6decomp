/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0021D2D0();                            /* extern */
extern s32 (*D_00538250)(M2C_UNK *);

void func_0021D3D0(void) {
    func_0021D2D0();
    if ((D_00538250 != NULL) && (D_00538250(&D_00538250) == -0x80)) {
        D_00538250 = NULL;
    }
}
