/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EA9CC;

void func_009BF280(s32 arg0) {
    void *temp_v0;

    if (D_003EA9CC == NULL) {
        if (D_003EA9CC == NULL) {
            temp_v0 = func_0096DB90(0x80);
            D_003EA9CC = temp_v0;
            func_001C48E8(temp_v0, 0, 0x80);
        }
        if (D_003EA9CC != NULL) {
            M2C_FIELD(D_003EA9CC, s32 *, 0x7C) = arg0;
        }
        if (arg0 != 1) {
            func_001D5F80(0x1030F);
        } else {
            func_001D5F80(0x1032F);
        }
    }
}
