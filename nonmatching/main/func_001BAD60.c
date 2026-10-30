/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB430(int);
extern s32 D_003E9914;
extern s32 D_003E9918;
extern char D_005247D0[];
extern char D_00524A50[];

void func_001BAD60(void) {
    s16 *var_s2;
    s16 temp_v1;
    s32 temp_s0;
    s32 var_s4;
    s32 var_v1;
    void *temp_s1;
    void *var_s3;

    temp_s0 = D_003E9914;
    var_s4 = 0;
    if (temp_s0 > 0) {
        var_s2 = ((void *)D_005247D0);
        do {
            temp_v1 = *var_s2;
            var_s3 = NULL;
            if ((temp_v1 > 0) && ((u32) temp_v1 < 0x281U)) {
                temp_s1 = ((void *)D_00524A50) + ((temp_v1 - 1) << 5);
                if (func_001BB430((s32) (temp_s1 + 0x10)) != D_003E9918) {
                    var_s3 = temp_s1;
                }
            }
            if (var_s3 != NULL) {
                var_v1 = M2C_FIELD(var_s3, u8 *, 2) - M2C_FIELD(var_s3, u8 *, 3);
                if (var_v1 < 0) {
                    var_v1 = 0;
                }
                M2C_FIELD(var_s3, u8 *, 2) = (u8) var_v1;
                M2C_FIELD(var_s3, u8 *, 3) = 0U;
            }
            var_s4 += 1;
            *var_s2 = 0;
            var_s2 += 2;
        } while (var_s4 < temp_s0);
    }
    D_003E9914 = 0;
}
