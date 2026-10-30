/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, s32);                    /* extern */
extern void *D_003EAD1C;

void func_009B4030(s32 arg0) {
    if (D_003EAD1C != NULL) {
        func_002DF730(M2C_FIELD(D_003EAD1C, s32 *, 0x190), arg0);
    }
}
