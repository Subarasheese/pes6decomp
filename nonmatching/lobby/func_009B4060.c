/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF8E0(s32, s32);                    /* extern */
extern void *D_003EAD1C;

void func_009B4060(s32 arg0) {
    if (M2C_FIELD(D_003EAD1C, s32 *, 0x1AC) == 0) {
        func_002DF8E0(M2C_FIELD(D_003EAD1C, s32 *, 0x190), 0);
        return;
    }
    func_002DF8E0(M2C_FIELD(D_003EAD1C, s32 *, 0x190), arg0 & 0xFF);
}
