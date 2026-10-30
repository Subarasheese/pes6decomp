/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C9E80(s32);                         /* extern */
s32 func_00B4B700();                                /* extern */
extern void *D_003EAE94;

s32 func_00B4E270(void) {
    if (D_003EAE94 != NULL) {
        func_008C9E80(M2C_FIELD(D_003EAE94, s32 *, 0x124));
        return func_00B4B700();
    }
    return 1;
}
