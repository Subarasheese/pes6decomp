/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void func_00B619A0(void) {
    s32 temp_a0;
    s32 temp_t0;
    s32 var_a0;
    s32 var_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a1;
    void *var_t0;
    void *var_v1;
    void *var_v1_2;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_v1 = temp_v0 + 0xCE32;
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        var_s0 = 0;
        do {
            temp_v0_2 = func_00228A80();
            if (temp_v0_2 != NULL) {
                var_a1 = temp_v0_2 + 0xCE32;
            } else {
                var_a1 = NULL;
            }
            if (var_a1 == NULL) {
                var_v1_2 = NULL;
            } else {
                temp_a0 = var_s0 & 0xFF;
                if (temp_a0 >= 0x48) {
                    var_v1_2 = NULL;
                } else {
                    var_v1_2 = var_a1 + (temp_a0 * 0xAA);
                }
            }
            if (var_v1_2 != NULL) {
                var_a0 = 0;
                do {
                    if (var_v1_2 == NULL) {
                        var_t0 = NULL;
                    } else {
                        temp_t0 = var_a0 & 0xFF & 0xFF;
                        if (temp_t0 >= 0x15) {
                            var_t0 = NULL;
                        } else {
                            var_t0 = var_v1_2 + (temp_t0 * 8);
                        }
                    }
                    if (var_t0 != NULL) {
                        M2C_FIELD(var_t0, u16 *, 6) = (u16) ((M2C_FIELD(var_t0, u16 *, 6) & ~0x7F80) | 0x7F80);
                        M2C_FIELD(var_t0, s16 *, 0) = 0;
                        M2C_FIELD(var_t0, s16 *, 2) = 0;
                        M2C_FIELD(var_t0, s16 *, 4) = 0;
                        M2C_FIELD(var_t0, u16 *, 6) = (s8) (((u8) M2C_FIELD(var_t0, u16 *, 6) & ~1) | (0 & 1));
                        M2C_FIELD(var_t0, u16 *, 6) = (s8) (((u8) M2C_FIELD(var_t0, u16 *, 6) & ~0x7E) | 2);
                    }
                    var_a0 += 1;
                } while (var_a0 < 0x15);
                M2C_FIELD(var_v1_2, s8 *, 0xA8) = 0;
                M2C_FIELD(var_v1_2, s8 *, 0xA9) = 0;
            }
            var_s0 += 1;
        } while (var_s0 < 0x48);
    }
}
