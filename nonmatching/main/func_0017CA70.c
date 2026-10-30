/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00131B00(void *);
extern int func_00141000(void *);
M2C_UNK func_00130000(void *, s32);                 /* extern */
M2C_UNK func_00131AC0(void *, void *);              /* extern */
M2C_UNK func_001321F0(void *, s32);                 /* extern */
M2C_UNK func_00132800(void *, s32);                 /* extern */

void func_0017CA70(void *arg0, void *arg1, s16 *arg2, s32 arg3, u32 arg4, void *arg5) {
    s16 *var_a2;
    s16 temp_a0;
    s32 var_a3;
    u32 var_a5;
    void *temp_s2;
    void *var_a1;

    var_a1 = arg1;
    var_a2 = arg2;
    temp_s2 = var_a1;
    var_a5 = 0;
    if (arg4 != 0) {
        var_a3 = 0;
        do {
            M2C_FIELD(var_a1, s32 *, 0x104) = (s32) (temp_s2 + (var_a3 + 0x110));
            temp_a0 = *var_a2;
            if (temp_a0 != -1) {
                M2C_FIELD(var_a1, void **, 0x108) = (void *) (temp_s2 + (temp_a0 * 0x110));
            } else {
                M2C_FIELD(var_a1, void **, 0x108) = NULL;
            }
            var_a5 += 1;
            var_a3 += 0x110;
            var_a1 += 0x110;
            var_a2 += 2;
        } while (var_a5 < arg4);
    }
    M2C_FIELD(((var_a5 * 0x110) + temp_s2), s32 *, -0xC) = 0;
    func_00131B00(arg0);
    func_00131AC0(arg0, temp_s2);
    func_00132800(temp_s2, func_00141000(arg5));
    func_001321F0(arg0, func_00141000(arg5));
    if (arg3 != 0) {
        func_00130000(arg0, arg3);
    }
}
