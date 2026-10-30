/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B1AF30(void);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B1BF20(void) {
    s32 var_s1;
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B1AF30();
    if (temp_v0 != 0) {
        func_00973460(M2C_FIELD(temp_v0, s32 *, 0x2FC));
        var_s1 = 0;
        do {
            func_00957070(M2C_FIELD((temp_v0 + ((var_s1 & 0xFF) * 4)), s32 *, 0x30C));
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 2);
        temp_a0 = M2C_FIELD(temp_v0, void **, 0x2B8);
        if (temp_a0 != NULL) {
            func_001D4E00(temp_a0);
            M2C_FIELD(temp_v0, void **, 0x2B8) = NULL;
        }
    }
}
