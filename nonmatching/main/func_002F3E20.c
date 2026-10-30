/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F1800(void *, s8);
extern s32 func_002F1420(void *);
void func_002F3E20(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a2;
    void *temp_s1;
    void *var_v0;

    var_a2 = arg2;
    if (arg0 != NULL) {
        if (arg3 == 0) {
            return;
        }
        if (var_a2 >= 0xA) {
            var_a2 = 9;
        } else if (var_a2 < 0) {
            var_a2 = 0;
        }
        if (arg1 != 0) {
            var_v0 = arg0 + (M2C_FIELD(arg0, s8 *, 8) * 0x4A4);
        } else {
            var_v0 = arg0 + (((s32) (M2C_FIELD(arg0, s8 *, 8) + 1) % 2) * 0x4A4);
        }
        temp_s1 = var_v0 + 0xB4 + (var_a2 * 0x4C) + 0x168;
        func_002F1800(temp_s1, 0);
        func_002F1420(temp_s1);
        func_002F1800(temp_s1, 1);
    }
}
