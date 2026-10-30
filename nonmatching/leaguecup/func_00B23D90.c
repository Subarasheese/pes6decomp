/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00B23340();                            /* extern */
M2C_UNK func_00B23A50();                            /* extern */
extern void *D_003EAD90;

void func_00B23D90(void) {
    void *temp_v0;

    if (D_003EAD90 == NULL) {
        if (D_003EAD90 == NULL) {
            temp_v0 = func_0096DB90(0xC60);
            D_003EAD90 = temp_v0;
            func_001C48E8(temp_v0, 0, 0xC60);
        }
        if (D_003EAD90 != NULL) {
            M2C_FIELD(D_003EAD90, s8 *, 0xC5A) = 0;
            M2C_FIELD(D_003EAD90, s8 *, 0xC5B) = 0;
            M2C_FIELD(D_003EAD90, s8 *, 0xC5C) = 0;
            M2C_FIELD(D_003EAD90, s8 *, 0xC3C) = 0;
            func_00B23A50();
            func_00B23340();
        }
        func_001D5F80(0x10312);
    }
}
