/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00B2B860();                            /* extern */
M2C_UNK func_00B2BF80();                            /* extern */
extern void *D_003EAD98;

void func_00B2C2A0(void) {
    void *temp_v0;

    if (D_003EAD98 == NULL) {
        if (D_003EAD98 == NULL) {
            temp_v0 = func_0096DB90(0x1384);
            D_003EAD98 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x1384);
        }
        if (D_003EAD98 != NULL) {
            M2C_FIELD(D_003EAD98, s8 *, 0x137E) = 0;
            M2C_FIELD(D_003EAD98, s8 *, 0x137F) = 0;
            M2C_FIELD(D_003EAD98, s8 *, 0x1380) = 0;
            M2C_FIELD(D_003EAD98, s8 *, 0x1360) = 0;
            func_00B2BF80();
            func_00B2B860();
        }
        func_001D5F80(0x10314);
    }
}
