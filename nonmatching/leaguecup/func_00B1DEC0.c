/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C9E80(s32);                         /* extern */
M2C_UNK func_00B1C260();                            /* extern */
s32 func_00B1D9F0();                                /* extern */
extern void *D_003EAD88;

s32 func_00B1DEC0(void) {
    if (D_003EAD88 != NULL) {
        func_008C9E80(M2C_FIELD(D_003EAD88, s32 *, 0x30));
        func_00B1C260();
        return func_00B1D9F0();
    }
    return 0;
}
