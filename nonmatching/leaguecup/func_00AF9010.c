/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern s32 func_00B00D40(void);
extern u32 func_00B035D0(void);
s32 func_00B00CA0(s32);                             /* extern */
s32 func_00B00EB0(s32);                             /* extern */
s32 func_00B013F0(u8, s32);                         /* extern */

void func_00AF9010(void) {
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        if (func_00B00EB0(M2C_FIELD(temp_v0, s32 *, 0x5D4)) == 1) {
            func_00B00D40();
        } else {
            func_00B00D40();
            func_00B00D40();
        }
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            if (M2C_FIELD(temp_v0, s32 *, 0x5D4) == -1) {
                func_001D7D60(M2C_FIELD(var_s1, void **, 0x6C), 0);
            } else if (func_00B00CA0(func_00B013F0(M2C_FIELD(temp_v0, u8 *, 0x5C4), var_s2 & 0xFF)) == 1) {
                func_001D7D60(M2C_FIELD(var_s1, void **, 0x6C), 1);
            } else {
                func_001D7D60(M2C_FIELD(var_s1, void **, 0x6C), 0);
            }
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 0x17);
    }
}
