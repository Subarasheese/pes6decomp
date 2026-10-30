/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAF0C;
extern u8 D_003EAF10;

void func_00B77410(void) {
    void *temp_v0;

    if (D_003EAF0C == NULL) {
        if (D_003EAF0C == NULL) {
            temp_v0 = func_0096DB90(0x48);
            D_003EAF0C = temp_v0;
            func_001C48E8(temp_v0, 0, 0x48);
        }
        if (D_003EAF0C != NULL) {
            M2C_FIELD(D_003EAF0C, u8 *, 0x40) = (u8) D_003EAF10;
            M2C_FIELD(D_003EAF0C, s32 *, 0x44) = 0;
        }
        func_001D5F80(0x1033A);
    }
}
