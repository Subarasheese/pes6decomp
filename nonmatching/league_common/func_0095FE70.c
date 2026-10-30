/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F190(void);
void func_0095FE70(void) {
    s32 var_a3;
    s32 var_a4;
    void *var_a1;
    void *var_a2;

    var_a2 = func_0022F190();
    var_a3 = 0;
    do {
        var_a4 = 0;
        var_a1 = var_a2;
loop_2:
        M2C_FIELD(var_a1, s16 *, 0x477A) = 0;
        M2C_FIELD(var_a1, s8 *, 0x477C) = 0xFF;
        var_a4 += 8;
        M2C_FIELD(var_a1, s16 *, 0x477E) = 0;
        M2C_FIELD(var_a1, s16 *, 0x4780) = 0;
        M2C_FIELD(var_a1, s16 *, 0x4782) = 0;
        M2C_FIELD(var_a1, s8 *, 0x4784) = 0xFF;
        M2C_FIELD(var_a1, s16 *, 0x4786) = 0;
        M2C_FIELD(var_a1, s16 *, 0x4788) = 0;
        M2C_FIELD(var_a1, s16 *, 0x478A) = 0;
        M2C_FIELD(var_a1, s8 *, 0x478C) = 0xFF;
        M2C_FIELD(var_a1, s16 *, 0x478E) = 0;
        M2C_FIELD(var_a1, s16 *, 0x4790) = 0;
        M2C_FIELD(var_a1, s16 *, 0x4792) = 0;
        M2C_FIELD(var_a1, s8 *, 0x4794) = 0xFF;
        M2C_FIELD(var_a1, s16 *, 0x4796) = 0;
        M2C_FIELD(var_a1, s16 *, 0x4798) = 0;
        M2C_FIELD(var_a1, s16 *, 0x479A) = 0;
        M2C_FIELD(var_a1, s8 *, 0x479C) = 0xFF;
        M2C_FIELD(var_a1, s16 *, 0x479E) = 0;
        M2C_FIELD(var_a1, s16 *, 0x47A0) = 0;
        M2C_FIELD(var_a1, s16 *, 0x47A2) = 0;
        M2C_FIELD(var_a1, s8 *, 0x47A4) = 0xFF;
        M2C_FIELD(var_a1, s16 *, 0x47A6) = 0;
        M2C_FIELD(var_a1, s16 *, 0x47A8) = 0;
        M2C_FIELD(var_a1, s16 *, 0x47AA) = 0;
        M2C_FIELD(var_a1, s8 *, 0x47AC) = 0xFF;
        M2C_FIELD(var_a1, s16 *, 0x47AE) = 0;
        M2C_FIELD(var_a1, s16 *, 0x47B0) = 0;
        M2C_FIELD(var_a1, s16 *, 0x47B2) = 0;
        M2C_FIELD(var_a1, s8 *, 0x47B4) = 0xFF;
        M2C_FIELD(var_a1, s16 *, 0x47B6) = 0;
        M2C_FIELD(var_a1, s16 *, 0x47B8) = 0;
        var_a1 += 0x40;
        if (var_a4 < 0x190) {
            goto loop_2;
        }
        var_a3 += 1;
        M2C_FIELD(var_a2, s16 *, 0x4778) = 0;
        var_a2 += 0xC82;
    } while (var_a3 < 4);
}
