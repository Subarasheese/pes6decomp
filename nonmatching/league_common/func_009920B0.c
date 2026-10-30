/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00993A80(void);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971470(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_009920B0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0_4;

    temp_v0 = func_00993A80();
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 4);
            if (temp_a0 != 0) {
                func_00957070(temp_a0);
                M2C_FIELD(var_s0, s32 *, 4) = 0;
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 0x48);
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x14C);
        if (temp_a0_2 != 0) {
            func_00971470(temp_a0_2);
            M2C_FIELD(temp_v0, s32 *, 0x14C) = 0;
        }
        temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0x150);
        if (temp_a0_3 != 0) {
            func_00972290(temp_a0_3);
            M2C_FIELD(temp_v0, s32 *, 0x150) = 0;
        }
        temp_a0_4 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_4 != NULL) {
            func_001D4E00(temp_a0_4);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
    }
}
