/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0020C6E0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_003A8EB0[];
extern char D_00537AE0[];

void func_0020CC20(void) {
    if (M2C_FIELD(((void *)D_00537AE0), s32 *, 4) == 0) {
        M2C_FIELD(((void *)D_00537AE0), s32 *, 4) = func_0020C6E0(((void *)D_003A8EB0), 0xA, 0x18, 0, 0, 0, 0);
    }
}
