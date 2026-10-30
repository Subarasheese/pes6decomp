/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAD48;

void func_00AF3C30(void) {
    void *temp_v0;

    if (D_003EAD48 == NULL) {
        if (D_003EAD48 == NULL) {
            temp_v0 = func_0096DB90(0x90);
            D_003EAD48 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x90);
        }
        if (D_003EAD48 != NULL) {
            M2C_FIELD(D_003EAD48, s32 *, 0x88) = 0;
            M2C_FIELD(D_003EAD48, s8 *, 0x84) = 0;
        }
        func_001D5F80(0x102B5);
        func_001D5F80(0x10344);
    }
}
