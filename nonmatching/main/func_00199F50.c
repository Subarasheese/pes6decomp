/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEC70(void);
extern void func_001CEB90(void);
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CECC0(s32);                         /* extern */
s32 func_001D3090(void *, s32 *, u32);              /* extern */
M2C_UNK func_001D3260(void *, u8, u8, u8, u8, void *); /* extern */
extern void *D_005202C0;

void func_00199F50(void) {
    s32 *var_a1;
    s32 var_s0;
    u32 var_a2;
    u32 var_s1;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_a4;
    void *var_s0_2;

    if (D_005202C0 != NULL) {
        var_s0 = 0;
        var_a2 = 0;
        var_a1 = D_005202C0 + 0x20;
        do {
            if (*var_a1 != 0) {
                var_s0 += 1;
            }
            var_a2 += 1;
            var_a1 += 0x350;
        } while (var_a2 < 3U);
        if (var_s0 == 0) {
            return;
        }
        func_001CECC0((var_s0 * func_001D3090(D_005202C0 + 4, var_a1, var_a2)) + 0x60);
        func_001CEB90();
        func_001CEAB0();
        var_s1 = 0;
        var_s0_2 = D_005202C0 + 0x20;
        do {
            if (M2C_FIELD(var_s0_2, s32 *, 0) != 0) {
                temp_a4 = M2C_FIELD(var_s0_2, u8 *, 0x34C);
                temp_a3 = M2C_FIELD(var_s0_2, u8 *, 0x34D);
                temp_a2 = M2C_FIELD(var_s0_2, u8 *, 0x34E);
                temp_a1 = M2C_FIELD(var_s0_2, u8 *, 0x34F);
                M2C_FIELD(D_005202C0, u8 *, 8) = temp_a4;
                M2C_FIELD(D_005202C0, u8 *, 9) = temp_a3;
                M2C_FIELD(D_005202C0, u8 *, 0xA) = temp_a2;
                M2C_FIELD(D_005202C0, u8 *, 0xB) = temp_a1;
                M2C_FIELD(D_005202C0, void **, 0xC) = (void *) (var_s0_2 + 0xDC);
                func_001D3260(D_005202C0 + 4, temp_a1, temp_a2, temp_a3, temp_a4, D_005202C0);
            }
            var_s1 += 1;
            var_s0_2 += 0x350;
        } while (var_s1 < 3U);
        func_001CEC70();
    }
}
