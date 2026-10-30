/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_00949590();                            /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
s32 func_009A5FE0();                                /* extern */
M2C_UNK func_00B109C0();                            /* extern */
extern void *D_003E7B0C;
extern void *D_003EAD6C;

void func_00B113A0(void) {
    void *temp_s0;
    void *temp_v0;

    if (D_003EAD6C == NULL) {
        if (D_003EAD6C == NULL) {
            temp_v0 = func_0096DB90(0xD0);
            D_003EAD6C = temp_v0;
            func_001C48E8(temp_v0, 0, 0xD0);
        }
        temp_s0 = D_003EAD6C;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, s32 *, 0x78) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x58) = (s32) M2C_FIELD(D_003E7B0C, u8 *, 0x25);
            M2C_FIELD(temp_s0, s32 *, 0x5C) = (s32) M2C_FIELD(D_003E7B0C, u8 *, 0x25);
            M2C_FIELD(temp_s0, s8 *, 0x60) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x9C) = 0;
            if (func_009A5FE0() != 0) {
                M2C_FIELD(temp_s0, s32 *, 0x78) = 1;
            }
        }
        func_001D5F80(0x10306);
        func_00B109C0();
        func_00949590();
    }
}
