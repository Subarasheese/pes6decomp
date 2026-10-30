/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EA970;

void func_00980400(void) {
    void *temp_v0;

    if (D_003EA970 == NULL) {
        temp_v0 = func_0096DB90(0x100C);
        D_003EA970 = temp_v0;
        func_001C48E8(temp_v0, 0, 0x100C);
        M2C_FIELD(D_003EA970, s8 *, 4) = 0;
        M2C_FIELD(D_003EA970, s8 *, 5) = 0;
        M2C_FIELD(D_003EA970, s8 *, 0x1006) = 0;
        M2C_FIELD(D_003EA970, s32 *, 0x1008) = 0;
    }
}
