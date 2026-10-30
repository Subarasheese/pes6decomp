/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7F0(M2C_UNK);                       /* extern */
M2C_UNK func_009B1CD0();                            /* extern */
M2C_UNK func_009B1F90();                            /* extern */
extern void *D_003EAD14;

void func_009B26C0(void) {
    void *temp_v0;

    temp_v0 = func_0099C7F0(0x16C);
    D_003EAD14 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0x168) = 0xE;
    M2C_FIELD(temp_v0, s32 *, 0x164) = 0;
    func_009B1F90();
    func_009B1CD0();
}
