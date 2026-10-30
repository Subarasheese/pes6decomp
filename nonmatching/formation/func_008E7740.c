/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
void func_008E7740(void *arg0, u8 arg1) {
    s32 var_s0;
    void *var_s2;

    var_s2 = arg0;
    func_001F3D10(M2C_FIELD(arg0, s32 *, 4), arg1);
    var_s0 = 0;
    do {
        func_001D7D60(M2C_FIELD(var_s2, void **, 0x14), (s8) arg1);
        func_001D7D60(M2C_FIELD(var_s2, void **, 0x3C), (s8) arg1);
        var_s0 += 1;
        var_s2 += 4;
    } while (var_s0 < 0xA);
}
