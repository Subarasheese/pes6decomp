/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D6E40(void *);
void func_00634CA0(s32 arg0, s32 arg1) {
    s32 var_s1_2;
    s32 var_s3_2;
    s32 var_s4;
    void **var_s0;
    void **var_s1;
    void **var_s3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    var_s3 = arg1 + 0x2AC;
    var_s1 = arg1 + 0x32C;
    var_s0 = arg1 + 0x300;
    if ((u32) (arg0 - 1) < 2U) {
        var_s4 = 0;
        do {
            temp_a0 = *var_s3;
            if (temp_a0 != NULL) {
                func_001D6E40(temp_a0);
                *var_s3 = NULL;
            }
            var_s4 += 1;
            var_s3 += 4;
        } while (var_s4 < 0x15);
    }
    if (arg0 != 1) {
        var_s3_2 = 0;
        do {
            temp_a0_2 = *var_s1;
            if (temp_a0_2 != NULL) {
                func_001D6E40(temp_a0_2);
                *var_s1 = NULL;
            }
            var_s3_2 += 1;
            var_s1 += 4;
        } while (var_s3_2 < 0x12);
    }
    if (arg0 != 2) {
        var_s1_2 = 0;
        do {
            temp_a0_3 = *var_s0;
            if (temp_a0_3 != NULL) {
                func_001D6E40(temp_a0_3);
                *var_s0 = NULL;
            }
            var_s1_2 += 1;
            var_s0 += 4;
        } while (var_s1_2 < 0xB);
    }
}
