/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7B0C;
extern void *D_003EA9C0;

void func_009BC6B0(void) {
    s32 var_t1;
    s32 var_t2;
    void *temp_a2;
    void *var_a4;
    void *var_a5;
    void *var_a6;
    void *var_a7;
    void *var_t0;

    if (D_003EA9C0 != NULL) {
        var_t2 = 0;
        var_t0 = D_003EA9C0;
        var_a7 = D_003EA9C0;
        var_a6 = D_003EA9C0;
        do {
            var_t1 = 0;
            var_a5 = var_t0;
            var_a4 = var_a6;
loop_3:
            M2C_FIELD(var_a5, s8 *, 4) = 0;
            M2C_FIELD(var_a5, s8 *, 5) = 0;
            temp_a2 = var_a7 + var_t1;
            M2C_FIELD(var_a5, s8 *, 6) = 0;
            var_t1 += 1;
            M2C_FIELD(temp_a2, s8 *, 0x40) = 0;
            M2C_FIELD(temp_a2, s8 *, 0x54) = 0;
            var_a5 += 3;
            M2C_FIELD(temp_a2, s8 *, 0x68) = 0xFF;
            M2C_FIELD(var_a4, s16 *, 0x7C) = 0xFFFF;
            var_a4 += 2;
            if (var_t1 < 2) {
                goto loop_3;
            }
            var_t0 += 6;
            M2C_FIELD((D_003EA9C0 + var_t2), s8 *, 0xE3) = 0;
            var_t2 += 1;
            var_a7 += 2;
            var_a6 += 4;
        } while (var_t2 < 0xA);
        M2C_FIELD(D_003EA9C0, s8 *, 0xE0) = (s8) (M2C_FIELD(D_003E7B0C, u8 *, 0x2A) + 1);
        M2C_FIELD(D_003EA9C0, s8 *, 0xE2) = 0xFF;
        M2C_FIELD(D_003EA9C0, s8 *, 0xF0) = 0;
    }
}
