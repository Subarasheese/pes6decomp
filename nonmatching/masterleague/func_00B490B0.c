/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
u16 func_00225680(u8);                              /* extern */
extern void *D_003EAE74;
extern char D_00B808A0[];

void func_00B490B0(void) {
    u16 sp20;
    M2C_UNK *var_a3;
    s32 var_a1;
    s32 var_a3_2;
    u16 *var_a2;
    u16 *var_a2_2;
    void *temp_s0;
    void *var_a1_2;

    var_a3 = ((void *)D_00B808A0);
    var_a2 = &sp20;
    var_a1 = 0xA;
    do {
        var_a1 -= 1;
        M2C_FIELD(var_a2, u16 *, 0) = (u16) M2C_FIELD(var_a3, s16 *, 0);
        M2C_FIELD(var_a2, s16 *, 2) = (s16) M2C_FIELD(var_a3, s16 *, 2);
        var_a3 += 4;
        var_a2 += 4;
    } while (var_a1 > 0);
    temp_s0 = D_003EAE74;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s8 *, 0x318) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x319) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x31B) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x5B0) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x5C4) = 1;
        M2C_FIELD(temp_s0, u8 *, 0x51C) = func_00225820();
        M2C_FIELD(temp_s0, u16 *, 0x51E) = func_00225680(M2C_FIELD(temp_s0, u8 *, 0x51C));
        M2C_FIELD(temp_s0, u8 *, 0x520) = 0x14U;
        var_a3_2 = 0;
        if ((s32) M2C_FIELD(temp_s0, u8 *, 0x520) > 0) {
            var_a2_2 = &sp20;
            var_a1_2 = temp_s0;
            do {
                var_a3_2 += 1;
                M2C_FIELD(var_a1_2, u16 *, 0x522) = (u16) *var_a2_2;
                var_a2_2 += 2;
                M2C_FIELD(var_a1_2, u16 *, 0x562) = (u16) M2C_FIELD(temp_s0, u16 *, 0x51E);
                var_a1_2 += 2;
            } while (var_a3_2 < (s32) M2C_FIELD(temp_s0, u8 *, 0x520));
        }
        M2C_FIELD(temp_s0, s8 *, 0x5A2) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x5A8) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x5AC) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x5AE) = 0;
    }
}
