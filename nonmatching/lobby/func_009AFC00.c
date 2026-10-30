/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, s32);                    /* extern */
extern void *D_00A7DBF8;

void func_009AFC00(s32 arg0) {
    if (D_00A7DBF8 != NULL) {
        func_002DF730(M2C_FIELD(D_00A7DBF8, s32 *, 0x634), arg0);
    }
}
