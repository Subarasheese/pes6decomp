/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00B080C0();                            /* extern */
extern void *D_003EAD5C;

void func_00B08420(void) {
    void *temp_v0;

    if (D_003EAD5C == NULL) {
        if (D_003EAD5C == NULL) {
            temp_v0 = func_0096DB90(0xCE8);
            D_003EAD5C = temp_v0;
            func_001C48E8(temp_v0, 0, 0xCE8);
        }
        if (D_003EAD5C != NULL) {
            M2C_FIELD(D_003EAD5C, s8 *, 0xCE2) = 0;
            M2C_FIELD(D_003EAD5C, s8 *, 0xCE3) = 0;
            M2C_FIELD(D_003EAD5C, s8 *, 0xCE4) = 0;
            M2C_FIELD(D_003EAD5C, s8 *, 0xCC4) = 0;
            func_00B080C0();
        }
        func_001D5F80(0x102B2);
    }
}
