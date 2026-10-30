/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAE5C;

void func_00B37B10(void) {
    void *temp_v0;

    if (D_003EAE5C == NULL) {
        if (D_003EAE5C == NULL) {
            temp_v0 = func_0096DB90(0x2A0);
            D_003EAE5C = temp_v0;
            func_001C48E8(temp_v0, 0, 0x2A0);
        }
        if (D_003EAE5C != NULL) {
            M2C_FIELD(D_003EAE5C, s32 *, 0x298) = 0;
            M2C_FIELD(D_003EAE5C, s16 *, 0x288) = 0x40;
            M2C_FIELD(D_003EAE5C, s16 *, 0x280) = 0x200;
            M2C_FIELD(D_003EAE5C, s16 *, 0x294) = 7;
        }
        func_001D5F80(0x10342);
    }
}
