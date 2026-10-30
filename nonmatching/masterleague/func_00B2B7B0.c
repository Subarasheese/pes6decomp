/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
extern u8 func_00229B70(void);
void func_00B2B7B0(void) {
    s32 var_a1;
    s32 var_a1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;
    void *var_a2;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a1 = 0;
        var_a0 = temp_v0;
        do {
            var_a1 += 8;
            M2C_FIELD(var_a0, s16 *, 0x336BE) = 0;
            M2C_FIELD(var_a0, s16 *, 0x336C0) = 0;
            M2C_FIELD(var_a0, s16 *, 0x336C2) = 0;
            M2C_FIELD(var_a0, s16 *, 0x336C4) = 0;
            M2C_FIELD(var_a0, s16 *, 0x336C6) = 0;
            M2C_FIELD(var_a0, s16 *, 0x336C8) = 0;
            M2C_FIELD(var_a0, s16 *, 0x336CA) = 0;
            M2C_FIELD(var_a0, s16 *, 0x336CC) = 0;
            var_a0 += 0x10;
        } while (var_a1 < 0x156);
        temp_v0_2 = (var_a1 * 2) + temp_v0;
        temp_v0_3 = temp_v0_2 + 0x336BE;
        M2C_FIELD(temp_v0_2, s16 *, 0x336BE) = 0;
        M2C_FIELD(temp_v0_3, s16 *, 2) = 0;
        M2C_FIELD(temp_v0_3, s16 *, 4) = 0;
        M2C_FIELD(temp_v0_3, s16 *, 6) = 0;
        M2C_FIELD(temp_v0_3, s16 *, 8) = 0;
        M2C_FIELD(temp_v0_3, s16 *, 0xA) = 0;
        if (((func_00229B70() & 0xFF) == 0x10) || ((func_00229B70() & 0xFF) == 0x25)) {
            var_a1_2 = 0;
            var_a2 = temp_v0;
            do {
                var_a1_2 += 8;
                M2C_FIELD(var_a2, s16 *, 0x3397A) = 0;
                M2C_FIELD(var_a2, s16 *, 0x3397C) = 0;
                M2C_FIELD(var_a2, s16 *, 0x3397E) = 0;
                M2C_FIELD(var_a2, s16 *, 0x33980) = 0;
                M2C_FIELD(var_a2, s16 *, 0x33982) = 0;
                M2C_FIELD(var_a2, s16 *, 0x33984) = 0;
                M2C_FIELD(var_a2, s16 *, 0x33986) = 0;
                M2C_FIELD(var_a2, s16 *, 0x33988) = 0;
                var_a2 += 0x10;
            } while (var_a1_2 < 0x156);
            temp_v1 = (var_a1_2 * 2) + temp_v0;
            temp_v1_2 = temp_v1 + 0x3397A;
            M2C_FIELD(temp_v1, s16 *, 0x3397A) = 0;
            M2C_FIELD(temp_v1_2, s16 *, 2) = 0;
            M2C_FIELD(temp_v1_2, s16 *, 4) = 0;
            M2C_FIELD(temp_v1_2, s16 *, 6) = 0;
            M2C_FIELD(temp_v1_2, s16 *, 8) = 0;
            M2C_FIELD(temp_v1_2, s16 *, 0xA) = 0;
        }
    }
}
