/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, s32);                    /* extern */
extern void *D_00A7DC30;

void func_009BA990(s32 arg0) {
    if (D_00A7DC30 != NULL) {
        func_002DF730(M2C_FIELD(D_00A7DC30, s32 *, 0x1A0), arg0);
    }
}
