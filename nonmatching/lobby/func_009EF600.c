/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
void func_009EF600(void *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a7;
    s32 temp_s2;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_t2;
    void *temp_s0;
    void *temp_t0_2;

    temp_s0 = M2C_FIELD(arg0, void **, 0x10);
    temp_s2 = M2C_FIELD(temp_s0, s32 *, 0x10);
    temp_a2 = temp_s2 + func_002DB830(*M2C_FIELD(arg0, void ***, 0xC));
    temp_a1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0) + 1;
    var_a3 = -1;
    if (temp_v1 >= 0) {
        do {
            var_t2 = temp_a2 + var_a3;
            temp_a7 = M2C_FIELD(temp_s0, s32 *, 0x10);
            temp_t0 = (s32) (var_t2 + temp_a1) % temp_a1;
            if ((var_t2 >= temp_a7) && (var_t2 < (temp_a7 + M2C_FIELD(temp_s0, s32 *, 0x14)))) {

            } else {
                var_t2 = -1;
            }
            temp_t0_2 = M2C_FIELD(arg0, s32 *, 0) + (temp_t0 * 0xC);
            if (M2C_FIELD(temp_t0_2, s32 *, 4) != var_t2) {
                M2C_FIELD(temp_t0_2, s32 *, 4) = var_t2;
                M2C_FIELD(temp_t0_2, u8 *, 0) = (u8) ((M2C_FIELD(temp_t0_2, u8 *, 0) & ~1) | 1);
            }
            M2C_FIELD(temp_t0_2, s32 *, 8) = var_a3;
            var_a3 += 1;
        } while (var_a3 < temp_v1);
    }
}
