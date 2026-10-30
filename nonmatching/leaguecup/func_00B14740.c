/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD70;

void func_00B14740(void) {
    s32 var_t2;
    s32 var_t3;
    s32 var_t8;
    void *temp_a2;
    void *var_a4;
    void *var_a5;
    void *var_a6;
    void *var_a7;
    void *var_t0;
    void *var_t1;

    if (D_003EAD70 != NULL) {
        var_t8 = 0;
        var_t1 = D_003EAD70;
        do {
            var_t3 = 0;
            var_t0 = var_t1;
            var_a7 = var_t1;
            var_a6 = var_t1;
loop_3:
            var_t2 = 0;
            var_a5 = var_t0;
            var_a4 = var_a6;
loop_4:
            M2C_FIELD(var_a5, s8 *, 4) = 0;
            M2C_FIELD(var_a5, s8 *, 5) = 0;
            temp_a2 = var_a7 + var_t2;
            M2C_FIELD(var_a5, s8 *, 6) = 0;
            var_t2 += 1;
            M2C_FIELD(temp_a2, s8 *, 0x34) = 0;
            M2C_FIELD(temp_a2, s8 *, 0x44) = 0;
            var_a5 += 3;
            M2C_FIELD(temp_a2, s8 *, 0x54) = 0xFF;
            M2C_FIELD(var_a4, s16 *, 0x64) = 0xFFFF;
            var_a4 += 2;
            if (var_t2 < 2) {
                goto loop_4;
            }
            M2C_FIELD(var_t1, s8 *, 0xB4) = 0;
            M2C_FIELD((var_t1 + var_t3), s8 *, 0xB8) = 0;
            var_t3 += 1;
            var_t0 += 6;
            var_a7 += 2;
            var_a6 += 4;
            if (var_t3 < 8) {
                goto loop_3;
            }
            var_t8 += 1;
            var_t1 += 0xBC;
        } while (var_t8 < 0xA);
        M2C_FIELD(D_003EAD70, s8 *, 0x75C) = 0;
    }
}
