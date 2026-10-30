/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0020A2A0(s32, s32, s32);
M2C_UNK func_001EDBA0(s32, s32);                    /* extern */

void func_002E3A60(void *arg0) {
    s32 var_s1;
    void *temp_v0;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    do {
        func_001EDBA0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0), M2C_FIELD(var_s0, s32 *, 4));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_0020A2A0(M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}
