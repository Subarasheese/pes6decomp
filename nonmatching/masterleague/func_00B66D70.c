/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAEE0;

void func_00B66D70(s8 arg0) {
    void *temp_v0;

    if (D_003EAEE0 == NULL) {
        if (D_003EAEE0 == NULL) {
            temp_v0 = func_0096DB90(0x20);
            D_003EAEE0 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x20);
        }
        if (D_003EAEE0 != NULL) {
            M2C_FIELD(D_003EAEE0, s8 *, 0x1C) = 0;
            M2C_FIELD(D_003EAEE0, s8 *, 0x1D) = arg0;
        }
        func_001D5F80(0x1031C);
    }
}
