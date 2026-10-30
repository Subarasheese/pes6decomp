/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00991950(void);
extern void func_001D4E00(void *);
extern void func_001F2810(void *);
extern void func_001B9C60(void *);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971470(s32);                         /* extern */

void func_009911B0(void) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_00991950();
    if (temp_v0 != 0) {
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x470));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x46C));
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0x148);
            if (temp_a0 != 0) {
                func_00957070(temp_a0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x14);
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
        func_00971470(M2C_FIELD(temp_v0, s32 *, 0x4B4));
    }
}
