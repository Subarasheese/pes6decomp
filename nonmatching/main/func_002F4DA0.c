/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F0020(void *, f32);
extern void func_001F3C40(void *, s8);
void func_002F4DA0(void *arg0, s32 arg1) {
    s32 var_s0;
    void *var_s2;

    var_s2 = arg0;
    if (var_s2 != NULL) {
        func_002F0020(var_s2 + 0xC, (f32) arg1);
        var_s0 = 0;
        do {
            func_001F3C40(M2C_FIELD(var_s2, void **, 0xA4), arg1 & 0xFF);
            var_s0 += 1;
            var_s2 += 4;
        } while (var_s0 < 3);
    }
}
