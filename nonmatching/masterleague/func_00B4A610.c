/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F2ED0(s32, void *);                 /* extern */
extern void *D_003EAE90;

void func_00B4A610(void) {
    if ((D_003EAE90 != NULL) && (M2C_FIELD(D_003EAE90, s32 *, 0x14C) == 1)) {
        func_002F2ED0(M2C_FIELD(D_003EAE90, s32 *, 0x2C), D_003EAE90);
    }
}
