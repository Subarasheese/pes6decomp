/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D67A0(int);
extern void func_001D67B0(void *);
void func_00637100(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 *var_s1;
    s32 *var_s2;
    s32 *var_s3;
    s32 temp_a0;
    s32 var_s2_2;
    s32 var_s4;
    void *temp_a0_2;

    var_s1 = arg0;
    if ((var_s1 != NULL) && (arg1 != NULL)) {
        var_s4 = 0;
        if (arg2 > 0) {
            var_s2 = arg1;
            var_s3 = var_s1;
            do {
                temp_a0 = *var_s3;
                if ((temp_a0 != 0) && (*var_s2 != 0)) {
                    func_001D67A0(temp_a0);
                    *var_s2 = 0;
                }
                var_s4 += 1;
                var_s3 += 4;
                var_s2 += 4;
            } while (var_s4 < arg2);
        }
    }
    if (var_s1 != NULL) {
        var_s2_2 = 0;
        if (arg2 > 0) {
            do {
                temp_a0_2 = *var_s1;
                if (temp_a0_2 != NULL) {
                    func_001D67B0(temp_a0_2);
                    *var_s1 = NULL;
                }
                var_s2_2 += 1;
                var_s1 += 4;
            } while (var_s2_2 < arg2);
        }
    }
}
