/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00AF3B30(void);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_008CA7A0(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00AF3870(void) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_00AF3B30();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x28);
        if (temp_a0 != 0) {
            func_00971E30(temp_a0);
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x80));
        func_008CA7A0(M2C_FIELD(temp_v0, s32 *, 0x20));
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            func_001EDD90(M2C_FIELD(var_s0, s32 *, 0x10));
            func_00957070(M2C_FIELD(var_s0, s32 *, 8));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
        func_001EDD90(M2C_FIELD(temp_v0, s32 *, 0x2C));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
