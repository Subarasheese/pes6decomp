/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B76A10(void);
void func_00B74370(void) {
    s32 var_s1;
    u32 temp_v0;
    void *temp_s2;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        var_s1 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x7A1) > 0) {
            do {
                temp_s2 = temp_v0 + ((var_s1 & 0xFF) * 4);
                func_001D7D60(M2C_FIELD(temp_s2, void **, 0x84), 0);
                func_001D7D60(M2C_FIELD(temp_s2, void **, 0x104), 0);
                func_001D7D60(M2C_FIELD(temp_s2, void **, 0x184), 0);
                var_s1 = (var_s1 + 1) & 0xFF;
            } while (var_s1 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7A1));
        }
    }
}
