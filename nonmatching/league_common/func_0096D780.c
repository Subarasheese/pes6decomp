/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00230410();                                /* extern */
M2C_UNK func_0094C710(M2C_UNK);                     /* extern */
M2C_UNK func_0095A980();                            /* extern */
M2C_UNK func_00960E60();                            /* extern */
M2C_UNK func_0096CBA0();                            /* extern */
extern void *D_003E77B0;

void func_0096D780(void) {
    func_0096CBA0();
    if ((M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x10000) && (func_00230410() == 1)) {
        M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0xFFFEFFFF);
        M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) & ~1);
        M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) & ~4);
    }
    func_0094C710(9);
    func_0095A980();
    func_00960E60();
}
