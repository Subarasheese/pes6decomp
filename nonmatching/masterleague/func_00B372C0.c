/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B37A60(void);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */

void func_00B372C0(void) {
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_00B37A60();
    if (temp_v0 != 0) {
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x250));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x24C));
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            func_00957070(M2C_FIELD(var_s0, s32 *, 0x12C));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x48);
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x278));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
