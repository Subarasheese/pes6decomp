/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226E70(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003E77B0;
extern void *D_003E7B0C;
extern void *D_003EAE64;

void func_00B3D9B0(void) {
    s32 var_v0;
    void *temp_s0;
    void *temp_v0;

    if (D_003EAE64 == NULL) {
        if (D_003EAE64 == NULL) {
            temp_v0 = func_0096DB90(0x11C);
            D_003EAE64 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x11C);
        }
        temp_s0 = D_003EAE64;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, s32 *, 0x114) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x58) = (s32) M2C_FIELD(D_003E7B0C, u8 *, 0x25);
            M2C_FIELD(temp_s0, s8 *, 0x5C) = 0;
            if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
                var_v0 = 3;
            } else if (func_00226E70() != 1) {
                var_v0 = 9;
            } else {
                var_v0 = 0xA;
            }
            M2C_FIELD(temp_s0, s32 *, 0x54) = var_v0;
            M2C_FIELD(temp_s0, s32 *, 0x44) = 0;
        }
        func_001D5F80(0x10328);
    }
}
