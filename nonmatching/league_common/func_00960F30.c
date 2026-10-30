/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
void func_00960F30(void *arg0, s32 arg1) {
    s32 temp_a3;
    s32 var_s0;
    void *var_s1;

    var_s1 = arg0;
    var_s0 = arg1;
    func_001BC300();
loop_2:
    if (var_s0 > 0) {
        temp_a3 = M2C_FIELD(var_s1, s32 *, 8);
        if (temp_a3 != 0) {
            func_001BC3D0(0, M2C_FIELD(var_s1, s32 *, 0), M2C_FIELD(var_s1, s32 *, 4), temp_a3);
            var_s1 += 0xC;
            var_s0 -= 1;
            goto loop_2;
        }
    }
}
