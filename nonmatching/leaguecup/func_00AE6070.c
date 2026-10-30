/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE7320(void);
extern void func_001D4E00(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00AE6070(void) {
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_00AE7320();
    if (temp_v0 != 0) {
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
        func_001EDD90(M2C_FIELD(temp_v0, s32 *, 0xC));
        var_s2 = 0;
        var_s0 = temp_v0;
        do {
            func_00957070(M2C_FIELD(var_s0, s32 *, 0x108));
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 0x14);
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x60));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x15C));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x4D8));
    }
}
