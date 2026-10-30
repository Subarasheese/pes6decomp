/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
s32 func_00B27390();                                /* extern */
M2C_UNK func_00B27890();                            /* extern */
extern u8 D_003E7D04;
extern void *D_003EAE30;

void func_00B2A290(void) {
    void *temp_s0;
    void *temp_v0;

    if (D_003EAE30 == NULL) {
        if (func_00B27390() == 0) {
            func_00B27890();
        }
        if (D_003EAE30 == NULL) {
            temp_v0 = func_0096DB90(0xD8);
            D_003EAE30 = temp_v0;
            func_001C48E8(temp_v0, 0, 0xD8);
        }
        temp_s0 = D_003EAE30;
        if (temp_s0 != NULL) {
            func_00958000(0x23);
            M2C_FIELD(temp_s0, s32 *, 0xD4) = 0;
            M2C_FIELD(temp_s0, u8 *, 0xD0) = (u8) D_003E7D04;
            M2C_FIELD(temp_s0, s8 *, 0xD1) = 1;
        }
        func_001D5F80(0x10336);
        func_001D5F80(0x10320);
    }
}
