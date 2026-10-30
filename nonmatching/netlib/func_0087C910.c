/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF0A0(s32, void *);                 /* extern */
M2C_UNK func_002DF8E0(s32, s32);                    /* extern */
extern void *D_003AE9D8;

void func_0087C910(s32 arg0) {
    if (arg0 == 1) {
        func_002DF0A0(M2C_FIELD(D_003AE9D8, s32 *, 0x14), D_003AE9D8 + 0x6C);
    }
    func_002DF8E0(M2C_FIELD(D_003AE9D8, s32 *, 0x14), arg0 & 0xFF);
}
