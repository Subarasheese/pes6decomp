/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
extern u32 func_00B15370(void);
M2C_UNK func_00972290(s32);                         /* extern */

void func_00B0EDF0(void) {
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s0, void **, 0xBD0);
            if (temp_a0 != NULL) {
                func_001D7F10(temp_a0);
                M2C_FIELD(var_s0, void **, 0xBD0) = NULL;
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 2);
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0xB14));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0xC));
    }
}
