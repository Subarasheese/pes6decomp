/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001404F0(void);
extern s16 func_00140500(void);
void func_001533B0(void *arg0, void *arg1, void *arg2) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_s0;
    s16 var_s2;
    s16 var_s3;
    s16 var_s4;
    s64 var_a0;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v1;
    s64 var_v1_2;
    s64 var_v1_3;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        var_s2 = M2C_FIELD(arg2, s16 *, 0);
        temp_v0 = M2C_FIELD(arg1, s16 *, 0);
        if (temp_v0 >= var_s2) {
            var_s3 = var_s2;
            var_s2 = temp_v0;
        } else {
            var_s3 = temp_v0;
        }
        var_s4 = M2C_FIELD(arg2, s16 *, 2);
        temp_v0_2 = M2C_FIELD(arg1, s16 *, 2);
        if (temp_v0_2 >= var_s4) {
            var_s0 = var_s4;
            var_s4 = temp_v0_2;
        } else {
            var_s0 = temp_v0_2;
        }
        var_v1 = (s64) (func_00140500() << 0x30) >> 0x30;
        var_v0 = (s64) ((s64) var_s3 << 0x30) >> 0x30;
        if (var_v1 < var_v0) {
            var_v0 = var_v1;
        } else if (var_v0 < 0) {
            var_v0 = 0;
        }
        var_v0_2 = (s64) ((s64) var_s2 << 0x30) >> 0x30;
        if (var_v1 < var_v0_2) {

        } else {
            if (var_v0_2 < 0) {
                var_v0_2 = 0;
            }
            var_v1 = var_v0_2;
        }
        var_v1_2 = (s64) ((s64) var_s0 << 0x30) >> 0x30;
        var_a0 = (s64) (func_001404F0() << 0x30) >> 0x30;
        if (var_a0 < var_v1_2) {
            var_v1_2 = var_a0;
        } else if (var_v1_2 < 0) {
            var_v1_2 = 0;
        }
        var_v1_3 = (s64) ((s64) var_s4 << 0x30) >> 0x30;
        if (var_a0 < var_v1_3) {

        } else {
            if (var_v1_3 < 0) {
                var_v1_3 = 0;
            }
            var_a0 = var_v1_3;
        }
        M2C_FIELD(arg0, s64 *, 0x58) = (s64) ((((s64) (var_a0 << 0x30) >> 0x30) << 0x30) | ((((s64) (((s64) (var_v1_2 << 0x30) >> 0x30) << 0x30) >> 0x30) << 0x20) | (((s64) (((s64) (var_v0 << 0x30) >> 0x30) << 0x30) >> 0x30) | (((s64) (((s64) (var_v1 << 0x30) >> 0x30) << 0x30) >> 0x30) << 0x10))));
    }
}
