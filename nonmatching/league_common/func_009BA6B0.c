/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_009BC8E0(void);
M2C_UNK func_00957070(s32);                         /* extern */

void func_009BA6B0(void) {
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_009BC8E0();
    if (temp_v0 != 0) {
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            func_00957070(M2C_FIELD(var_s0, s32 *, 0x178));
            func_00957070(M2C_FIELD(var_s0, s32 *, 0x17C));
            func_00957070(M2C_FIELD(var_s0, s32 *, 0x1C8));
            func_00957070(M2C_FIELD(var_s0, s32 *, 0x1CC));
            var_s1 += 1;
            var_s0 += 8;
        } while (var_s1 < 0xA);
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0xF4));
    }
}
