/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_009B7C90(void);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_009B6240(void) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_009B7C90();
    if (temp_v0 != 0) {
        var_s1 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x234) > 0) {
            var_s0 = temp_v0;
            do {
                temp_a0 = M2C_FIELD(var_s0, s32 *, 0x168);
                if (temp_a0 != 0) {
                    func_00957070(temp_a0);
                }
                var_s1 += 1;
                var_s0 += 4;
            } while (var_s1 < (s32) M2C_FIELD(temp_v0, u8 *, 0x234));
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x228));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
