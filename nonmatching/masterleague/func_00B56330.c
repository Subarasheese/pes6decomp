/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void func_00B56330(void) {
    s32 temp_s1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s64 temp_a0;
    s64 temp_a0_2;
    s64 temp_a0_3;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    var_s0 = 0;
    do {
        temp_s1 = var_s0 & 0xFFFF;
        if (temp_s1 < 0x268) {
            temp_v0 = func_00228A80();
            if (temp_v0 != NULL) {
                if (temp_s1 < 0x25E) {
                    M2C_FIELD((temp_v0 + ((temp_s1 & 0xFFFF) * 2)), s16 *, 0xFE02) = 0;
                } else {
                    M2C_FIELD((temp_v0 + (temp_s1 * 2)), s16 *, 0x10060) = 0;
                }
            }
        }
        var_s0 += 1;
    } while (var_s0 < 0x268);
    var_s0_2 = 0;
    do {
        temp_v0_2 = func_00228A80();
        if (temp_v0_2 == NULL) {
            var_a1 = NULL;
        } else {
            temp_a0 = (s64) ((var_s0_2 & 0xFFFF) << 0x30) >> 0x30;
            if (temp_a0 >= 0x268) {
                var_a1 = NULL;
            } else if (temp_a0 < 0x25E) {
                var_a1 = temp_v0_2 + temp_a0 + 0x102BE;
            } else {
                var_a1 = temp_v0_2 + (temp_a0 - 0x25E) + 0x10530;
            }
        }
        if (var_a1 != NULL) {
            *var_a1 = (*var_a1 & ~2) | ((0 & 1) * 2);
        }
        var_s0_2 += 1;
    } while (var_s0_2 < 0x268);
    var_s0_3 = 0;
    do {
        temp_v0_3 = func_00228A80();
        if (temp_v0_3 == NULL) {
            var_a1_2 = NULL;
        } else {
            temp_a0_2 = (s64) ((var_s0_3 & 0xFFFF) << 0x30) >> 0x30;
            if (temp_a0_2 >= 0x268) {
                var_a1_2 = NULL;
            } else if (temp_a0_2 < 0x25E) {
                var_a1_2 = temp_v0_3 + temp_a0_2 + 0x102BE;
            } else {
                var_a1_2 = temp_v0_3 + (temp_a0_2 - 0x25E) + 0x10530;
            }
        }
        if (var_a1_2 != NULL) {
            *var_a1_2 = (*var_a1_2 & ~1) | (0 & 1);
        }
        var_s0_3 += 1;
    } while (var_s0_3 < 0x268);
    var_s0_4 = 0;
    do {
        temp_v0_4 = func_00228A80();
        if (temp_v0_4 == NULL) {
            var_a2 = NULL;
        } else {
            temp_a0_3 = (s64) ((var_s0_4 & 0xFFFF) << 0x30) >> 0x30;
            if (temp_a0_3 >= 0x268) {
                var_a2 = NULL;
            } else if (temp_a0_3 < 0x25E) {
                var_a2 = temp_v0_4 + temp_a0_3 + 0x102BE;
            } else {
                var_a2 = temp_v0_4 + (temp_a0_3 - 0x25E) + 0x10530;
            }
        }
        if (var_a2 != NULL) {
            *var_a2 = (*var_a2 & ~4) | ((0 & 1) * 4);
        }
        var_s0_4 += 1;
    } while (var_s0_4 < 0x268);
}
