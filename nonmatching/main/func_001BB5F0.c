/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB430(int);
extern void func_001BB060(void *, s32, s32, s32);
M2C_UNK func_001BB080(s32);                         /* extern */
M2C_UNK func_001BB130(s32, s32);                    /* extern */

void func_001BB5F0(void *arg0, s32 arg1) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v1;
    s32 var_v1_2;

    if (arg0 != NULL) {
        var_a0 = 0;
        if (arg0 != NULL) {
            var_v1 = 0;
            if (arg0 != NULL) {
                var_v1 = M2C_FIELD(arg0, s32 *, 0);
            }
            if (var_v1 == 0) {
                var_a0 = 1;
            }
        }
        if (var_a0 == 0) {
            var_a0_2 = 0;
            if (arg0 != NULL) {
                var_a0_2 = M2C_FIELD(arg0, s32 *, 4);
            }
            func_001BB130(var_a0_2, arg1);
        } else if ((arg0 != NULL) && (arg1 != 0)) {
            var_a0_3 = 0;
            if (arg0 != NULL) {
                var_v1_2 = 0;
                if (arg0 != NULL) {
                    var_v1_2 = M2C_FIELD(arg0, s32 *, 0);
                }
                if (var_v1_2 == 0) {
                    var_a0_3 = 1;
                }
            }
            if (var_a0_3 != 0) {
                if (func_001BB430(arg1) != 0) {
                    func_001BB080(arg1);
                }
                M2C_FIELD(arg0, s32 *, 4) = arg1;
                M2C_FIELD(arg0, s32 *, 8) = arg1;
                func_001BB060((void *) arg1, 0, 0, (s32) arg0);
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
                }
            }
        }
    }
}
