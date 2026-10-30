/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00228A80(void);
u8 *func_00224520(s32, s32);                        /* extern */
s32 func_009492B0(s32, s32);                        /* extern */
s32 func_0094B400(s32, s32);                        /* extern */
extern s32 D_003EAF08;

void func_00B76EB0(void) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s3;
    s8 var_v1;
    void *temp_v1;

    temp_s2 = D_003EAF08;
    if ((temp_s2 != 0) && (func_00228A80() != NULL)) {
        temp_s1 = func_00225820() & 0xFF;
        var_s3 = 0;
        do {
            temp_v1 = temp_s2 + var_s3;
            M2C_FIELD(temp_v1, s8 *, 0x3D3) = (s8) ((u64) ((s64) *func_00224520(temp_s1 & 0xFF, func_002243B0(temp_s1 & 0xFF, var_s3 & 0xFF) & 0xFF) << 0x38) >> 0x3C);
            if ((func_0094B400(func_009492B0(temp_s1 & 0xFF, var_s3 & 0xFF), temp_s1 & 0xFF) & 0xFF) == 1) {
                var_v1 = 0xD;
                goto block_7;
            }
            if ((func_0094B400(func_009492B0(temp_s1 & 0xFF, var_s3 & 0xFF), temp_s1 & 0xFF) & 0xFF) == 2) {
                var_v1 = 0xC;
block_7:
                M2C_FIELD(temp_v1, s8 *, 0x3D3) = var_v1;
            }
            var_s3 += 1;
        } while (var_s3 < 0x20);
    }
}
