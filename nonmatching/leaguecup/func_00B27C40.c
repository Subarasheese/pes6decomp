/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00B272C0();                            /* extern */
M2C_UNK func_00B279E0();                            /* extern */
extern void *D_003EAD94;

void func_00B27C40(void) {
    void *temp_v0;

    if (D_003EAD94 == NULL) {
        if (D_003EAD94 == NULL) {
            temp_v0 = func_0096DB90(0xDA0);
            D_003EAD94 = temp_v0;
            func_001C48E8(temp_v0, 0, 0xDA0);
        }
        if (D_003EAD94 != NULL) {
            M2C_FIELD(D_003EAD94, s8 *, 0xD9A) = 0;
            M2C_FIELD(D_003EAD94, s8 *, 0xD9B) = 0;
            M2C_FIELD(D_003EAD94, s8 *, 0xD9C) = 0;
            M2C_FIELD(D_003EAD94, s8 *, 0xD7C) = 0;
            func_00B279E0();
            func_00B272C0();
        }
        func_001D5F80(0x10313);
    }
}
