/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F4380(s32);
extern void func_00153FA0(void *);
extern char D_0052AE18[];

void func_001DD560(s32 arg0) {
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 *temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    void **temp_s0;
    void *temp_a0;

    var_s1 = arg0;
    var_s0 = 0;
    var_s2 = var_s1;
    temp_v0 = func_001F4380(arg0);
    if (temp_v0 != NULL) {
        var_s2 = *temp_v0;
    }
    temp_a0 = (*(s32 *)D_0052AE18) + (var_s2 * 0x10);
    if ((temp_a0 != NULL) && (M2C_FIELD(temp_a0, s32 *, 0) != 0)) {
        if (M2C_FIELD(temp_a0, u8 *, 0xC) != 0) {
            var_s0 = 1;
        }
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_s0_2 = var_s1;
        temp_v0_2 = func_001F4380(var_s1);
        if (temp_v0_2 != NULL) {
            var_s0_2 = *temp_v0_2;
        }
        temp_v1 = (*(s32 *)D_0052AE18) + (var_s0_2 * 0x10);
        if ((temp_v1 != NULL) && (*temp_v1 != 0)) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
        if (var_v1 != 0) {
            temp_v0_3 = func_001F4380(var_s1);
            if (temp_v0_3 != NULL) {
                var_s1 = *temp_v0_3;
            }
            temp_s0 = (*(s32 *)D_0052AE18) + (var_s1 * 0x10);
            func_00153FA0(*temp_s0);
            *temp_s0 = NULL;
        }
    }
}
