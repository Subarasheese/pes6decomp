/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAE38;

void func_00B309F0(void) {
    s32 var_a1;
    u8 temp_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;

    if (D_003EAE38 == NULL) {
        if (D_003EAE38 == NULL) {
            temp_v0 = func_0096DB90(0xA4);
            D_003EAE38 = temp_v0;
            func_001C48E8(temp_v0, 0, 0xA4);
        }
        temp_s0 = D_003EAE38;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, s32 *, 0x9C) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x8C) = 1;
            M2C_FIELD(temp_s0, void **, 0) = func_00228960();
            var_a1 = 0;
            do {
                temp_a0 = temp_s0 + var_a1;
                M2C_FIELD(temp_a0, u8 *, 0x8D) = (u8) M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a1), u8 *, 0x34);
                M2C_FIELD(temp_a0, u8 *, 0x8E) = (u8) M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a1), u8 *, 0x35);
                M2C_FIELD(temp_a0, u8 *, 0x8F) = (u8) M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a1), u8 *, 0x36);
                M2C_FIELD(temp_a0, u8 *, 0x90) = (u8) M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a1), u8 *, 0x37);
                M2C_FIELD(temp_a0, u8 *, 0x91) = (u8) M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a1), u8 *, 0x38);
                temp_v1 = M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a1), u8 *, 0x39);
                var_a1 += 6;
                M2C_FIELD(temp_a0, u8 *, 0x92) = temp_v1;
            } while (var_a1 < 7);
            M2C_FIELD((var_a1 + temp_s0), u8 *, 0x8D) = (u8) M2C_FIELD((var_a1 + M2C_FIELD(temp_s0, void **, 0)), u8 *, 0x34);
            M2C_FIELD(temp_s0, u8 *, 0x9A) = (u8) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u8 *, 0x41);
        }
        func_001D5F80(0x10339);
    }
}
