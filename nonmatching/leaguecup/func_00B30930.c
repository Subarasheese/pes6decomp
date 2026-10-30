/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00B2FEF0();                            /* extern */
M2C_UNK func_00B30610();                            /* extern */
extern void *D_003EAD9C;

void func_00B30930(void) {
    void *temp_v0;

    if (D_003EAD9C == NULL) {
        if (D_003EAD9C == NULL) {
            temp_v0 = func_0096DB90(0x2B14);
            D_003EAD9C = temp_v0;
            func_001C48E8(temp_v0, 0, 0x2B14);
        }
        if (D_003EAD9C != NULL) {
            M2C_FIELD(D_003EAD9C, s8 *, 0x2B0E) = 0;
            M2C_FIELD(D_003EAD9C, s8 *, 0x2B0F) = 0;
            M2C_FIELD(D_003EAD9C, s8 *, 0x2B10) = 0;
            M2C_FIELD(D_003EAD9C, s8 *, 0x2AF0) = 0;
            func_00B30610();
            func_00B2FEF0();
        }
        func_001D5F80(0x10315);
    }
}
