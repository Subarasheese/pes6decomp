/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAE6C;

void func_00B434B0(void) {
    s32 var_a4;
    s32 var_a5;
    void *var_a2;
    void *var_a3;

    if (D_003EAE6C != NULL) {
        var_a5 = 0;
        M2C_FIELD(D_003EAE6C, s16 *, 0x6B0) = 0xFFFF;
        var_a3 = D_003EAE6C;
        do {
            var_a4 = 0;
            var_a2 = var_a3;
loop_3:
            M2C_FIELD(var_a2, s16 *, 0x620) = 0xFFFF;
            M2C_FIELD(var_a2, s16 *, 0x622) = 0xFFFF;
            var_a4 += 8;
            M2C_FIELD(var_a2, s16 *, 0x624) = 0xFFFF;
            M2C_FIELD(var_a2, s16 *, 0x626) = 0xFFFF;
            M2C_FIELD(var_a2, s16 *, 0x628) = 0xFFFF;
            M2C_FIELD(var_a2, s16 *, 0x62A) = 0xFFFF;
            M2C_FIELD(var_a2, s16 *, 0x62C) = 0xFFFF;
            M2C_FIELD(var_a2, s16 *, 0x62E) = 0xFFFF;
            var_a2 += 0x10;
            if (var_a4 < 0x10) {
                goto loop_3;
            }
            var_a5 += 1;
            var_a3 += 0x20;
        } while (var_a5 < 4);
        M2C_FIELD(D_003EAE6C, s16 *, 0x6A0) = 0xFFFF;
        M2C_FIELD(D_003EAE6C, s16 *, 0x6A2) = 0xFFFF;
        M2C_FIELD(D_003EAE6C, s16 *, 0x6A4) = 0xFFFF;
        M2C_FIELD(D_003EAE6C, s16 *, 0x6A6) = 0xFFFF;
        M2C_FIELD(D_003EAE6C, s16 *, 0x6A8) = 0xFFFF;
        M2C_FIELD(D_003EAE6C, s16 *, 0x6AA) = 0xFFFF;
        M2C_FIELD(D_003EAE6C, s16 *, 0x6AC) = 0xFFFF;
        M2C_FIELD(D_003EAE6C, s16 *, 0x6AE) = 0xFFFF;
    }
}
