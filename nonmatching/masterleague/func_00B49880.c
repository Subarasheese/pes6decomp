/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
s16 func_00225680(u8);                              /* extern */
s8 func_00225E10();                                 /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAE78;

void func_00B49880(void) {
    void *temp_s0;
    void *temp_v0;

    if (D_003EAE78 == NULL) {
        if (D_003EAE78 == NULL) {
            temp_v0 = func_0096DB90(0x1C);
            D_003EAE78 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x1C);
        }
        temp_s0 = D_003EAE78;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, u8 *, 0xE) = func_00225820();
            M2C_FIELD(temp_s0, s16 *, 0x10) = func_00225680(M2C_FIELD(temp_s0, u8 *, 0xE));
            M2C_FIELD(temp_s0, s8 *, 0x12) = func_00225E10();
            M2C_FIELD(temp_s0, s8 *, 0xC) = 0;
        }
        func_001D5F80(0x10343);
    }
}
