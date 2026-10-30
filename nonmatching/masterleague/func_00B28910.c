/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
extern void *D_003EAE2C;

void func_00B28910(void) {
    s32 var_a2;
    s32 var_a3;
    u8 temp_a0;
    void *temp_s0;
    void *var_a1;

    temp_s0 = D_003EAE2C;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, void **, 0) = func_00228960();
        M2C_FIELD(temp_s0, s32 *, 0x214) = 0;
        var_a3 = 0;
        M2C_FIELD(temp_s0, s16 *, 0x198) = 6;
        var_a2 = 0;
        M2C_FIELD(temp_s0, s8 *, 0x18C) = 0;
        var_a1 = temp_s0;
        do {
            var_a3 += 1;
            M2C_FIELD(var_a1, u8 *, 0x19A) = (u8) M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a2), u8 *, 0x60);
            M2C_FIELD(var_a1, u8 *, 0x19B) = (u8) M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a2), u8 *, 0x61);
            M2C_FIELD(var_a1, u8 *, 0x19C) = (u8) M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a2), u8 *, 0x62);
            temp_a0 = M2C_FIELD((M2C_FIELD(temp_s0, void **, 0) + var_a2), u8 *, 0x63);
            var_a2 += 4;
            M2C_FIELD(var_a1, u8 *, 0x19D) = temp_a0;
            var_a1 += 4;
        } while (var_a3 < 0x1E);
    }
}
