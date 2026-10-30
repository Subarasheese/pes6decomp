/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0CD50(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00956A80(s32, s32);                    /* extern */
M2C_UNK func_009737C0(s32, s32);                    /* extern */

void func_00B0FF00(s32 arg0) {
    s32 var_s1;
    u32 temp_v0;
    u32 var_s3;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        var_s1 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0xE05) > 0) {
            var_s3 = temp_v0;
            do {
                func_00956A80(M2C_FIELD(var_s3, s32 *, 0xE18), arg0);
                func_009737C0(M2C_FIELD(var_s3, s32 *, 0xEAC), arg0);
                var_s1 += 1;
                var_s3 += 4;
            } while (var_s1 < (s32) M2C_FIELD(temp_v0, u8 *, 0xE05));
        }
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0xEA4), 0);
    }
}
