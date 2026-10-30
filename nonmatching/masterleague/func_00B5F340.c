/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_009BF280(M2C_UNK);                     /* extern */
extern void *D_003EAEC4;

void func_00B5F340(void) {
    void *temp_v0;

    if (D_003EAEC4 == NULL) {
        if (D_003EAEC4 == NULL) {
            temp_v0 = func_0096DB90(0x9E0);
            D_003EAEC4 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x9E0);
        }
        if (D_003EAEC4 != NULL) {
            M2C_FIELD(D_003EAEC4, s32 *, 0x544) = 0;
            M2C_FIELD(D_003EAEC4, s32 *, 0x548) = 0;
            M2C_FIELD(D_003EAEC4, s8 *, 0x54C) = 0;
            M2C_FIELD(D_003EAEC4, s8 *, 0x5CD) = 0xFF;
            M2C_FIELD(D_003EAEC4, s32 *, 0x8A8) = 0;
            M2C_FIELD(D_003EAEC4, s8 *, 0x8B0) = 0;
            M2C_FIELD(D_003EAEC4, s8 *, 0x92D) = 0;
            M2C_FIELD(D_003EAEC4, s8 *, 0x92C) = 1;
        }
        func_001D5F80(0x102AE);
        func_001D5F80(0x10344);
        func_009BF280(1);
    }
}
