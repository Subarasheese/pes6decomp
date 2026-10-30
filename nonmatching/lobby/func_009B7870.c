/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, s32);                    /* extern */
extern void *D_00A7DC08;

void func_009B7870(s32 arg0) {
    if (D_00A7DC08 != NULL) {
        func_002DF730(M2C_FIELD(D_00A7DC08, s32 *, 0x2CC), arg0);
    }
}
