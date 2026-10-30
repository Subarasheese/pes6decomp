/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_009BC760();                            /* extern */
extern void *D_003EA9C0;

void func_009BC990(void) {
    void *temp_v0;

    if (D_003EA9C0 == NULL) {
        if (D_003EA9C0 == NULL) {
            temp_v0 = func_0096DB90(0x744);
            D_003EA9C0 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x744);
        }
        if (D_003EA9C0 != NULL) {
            M2C_FIELD(D_003EA9C0, s8 *, 0xF0) = 0;
            M2C_FIELD(D_003EA9C0, s8 *, 0xF1) = 0;
            M2C_FIELD(D_003EA9C0, s8 *, 0xF2) = 0;
            M2C_FIELD(D_003EA9C0, s8 *, 0x740) = 0;
            func_009BC760();
        }
        func_001D5F80(0x102A7);
    }
}
