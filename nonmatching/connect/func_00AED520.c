/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001EDCE0(void *);
extern void * func_001EDC80(void *, s32);
extern void func_001EEDA0(void *, u8);
void func_00AED520(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    u8 var_v1;
    void *temp_s3;
    void *temp_s4;

    if (M2C_FIELD(arg0, u8 *, 8) & 1) {
        if (arg0 != NULL) {
            temp_s3 = M2C_FIELD(arg0, void **, 0);
            temp_v0 = func_001EDCE0(temp_s3);
            var_s2 = 0;
            if (temp_v0 > 0) {
                do {
                    func_001EEDA0(func_001EDC80(temp_s3, var_s2), 0xFFU);
                    var_s2 += 1;
                } while (var_s2 < temp_v0);
            }
            M2C_FIELD(arg0, s32 *, 4) = 0xFF;
        }
        var_v1 = (M2C_FIELD(arg0, u8 *, 8) & ~1) | (0 & 1);
        goto block_21;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    var_s0 = temp_v1 - 0x40;
    if (var_s0 < 0x80) {
        var_s0 = 0x80;
    }
    if (var_s0 != temp_v1) {
        if (arg0 != NULL) {
            if (var_s0 >= 0) {
                if (var_s0 >= 0x100) {
                    var_s0 = 0xFF;
                }
            } else {
                var_s0 = 0;
            }
            temp_s4 = M2C_FIELD(arg0, void **, 0);
            temp_v0_2 = func_001EDCE0(temp_s4);
            var_s3 = 0;
            if (temp_v0_2 > 0) {
                do {
                    func_001EEDA0(func_001EDC80(temp_s4, var_s3), var_s0 & 0xFF);
                    var_s3 += 1;
                } while (var_s3 < temp_v0_2);
            }
            M2C_FIELD(arg0, s32 *, 4) = var_s0;
        }
        var_v1 = (M2C_FIELD(arg0, u8 *, 8) & ~6) | ((0 & 3) * 2);
block_21:
        M2C_FIELD(arg0, u8 *, 8) = var_v1;
    }
}
