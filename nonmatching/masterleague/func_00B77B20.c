/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
u16 func_00225680(u8);                              /* extern */
s32 func_00AFCF40(s32);                             /* extern */
extern void *D_003EAF14;

void func_00B77B20(void) {
    s16 temp_a1;
    s32 temp_a0;
    s32 var_s2;
    s8 var_s1;
    void *temp_a0_2;
    void *temp_s0;

    temp_s0 = D_003EAF14;
    var_s1 = 0;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s8 *, 0x318) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x319) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x31A) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x5B0) = 0;
        M2C_FIELD(temp_s0, u8 *, 0x51C) = func_00225820();
        M2C_FIELD(temp_s0, u16 *, 0x51E) = func_00225680(M2C_FIELD(temp_s0, u8 *, 0x51C));
        var_s2 = 0;
        do {
            temp_a1 = func_00AFCF40(var_s2 & 0xFF) & 0xFFFF;
            if (temp_a1 != 0) {
                temp_a0 = (var_s1 & 0xFF) * 2;
                var_s1 = (var_s1 + 1) & 0xFF;
                temp_a0_2 = temp_s0 + temp_a0;
                M2C_FIELD(temp_a0_2, s16 *, 0x522) = temp_a1;
                M2C_FIELD(temp_a0_2, u16 *, 0x562) = (u16) M2C_FIELD(temp_s0, u16 *, 0x51E);
            }
            var_s2 += 1;
        } while (var_s2 < 0x10);
        M2C_FIELD(temp_s0, s8 *, 0x520) = var_s1;
        M2C_FIELD(temp_s0, s8 *, 0x5A2) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x5A8) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x5AC) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x5AE) = 0;
    }
}
