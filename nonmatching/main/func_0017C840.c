/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void func_0017C840(void *arg0) {
    s32 var_s0;
    s32 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s3;

    var_s1 = 0;
    if (M2C_FIELD(arg0, s8 *, 3) > 0) {
        var_s0 = 0;
        do {
            temp_s3 = M2C_FIELD(arg0, s32 *, 0xC) + var_s0;
            temp_a0 = M2C_FIELD(temp_s3, void **, 4);
            if (temp_a0 != NULL) {
                func_00153FA0(temp_a0);
                M2C_FIELD(temp_s3, void **, 4) = NULL;
            }
            temp_a0_2 = M2C_FIELD(temp_s3, void **, 0);
            if (temp_a0_2 != NULL) {
                func_00153FA0(temp_a0_2);
                M2C_FIELD(temp_s3, void **, 0) = NULL;
            }
            var_s1 += 1;
            var_s0 += 8;
        } while (var_s1 < M2C_FIELD(arg0, s8 *, 3));
    }
}
