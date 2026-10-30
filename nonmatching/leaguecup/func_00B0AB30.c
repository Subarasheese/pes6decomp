/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_009BF280(M2C_UNK);                     /* extern */
extern void *D_003EAD60;

void func_00B0AB30(void) {
    void *temp_v0;

    if (D_003EAD60 == NULL) {
        if (D_003EAD60 == NULL) {
            temp_v0 = func_0096DB90(0x5E4);
            D_003EAD60 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x5E4);
        }
        if (D_003EAD60 != NULL) {
            M2C_FIELD(D_003EAD60, s32 *, 0x39C) = 0;
            M2C_FIELD(D_003EAD60, s32 *, 0x3A0) = 0;
            M2C_FIELD(D_003EAD60, s8 *, 0x3A4) = 0;
            M2C_FIELD(D_003EAD60, s8 *, 0x3B1) = 0xFF;
            M2C_FIELD(D_003EAD60, s32 *, 0x5D0) = 0;
            M2C_FIELD(D_003EAD60, s8 *, 0x5D8) = 0;
            M2C_FIELD(D_003EAD60, s8 *, 0x5E0) = 0;
            M2C_FIELD(D_003EAD60, s32 *, 0x5DC) = 1;
        }
        func_001D5F80(0x10300);
        func_001D5F80(0x10344);
        func_009BF280(0);
    }
}
