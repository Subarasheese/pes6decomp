/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B28900(void);
extern void func_001D7D80(void *, s16);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009720E0(s32, s16);                    /* extern */

void func_00B27AC0(s32 arg0) {
    s16 var_s1;
    u32 temp_v0;

    temp_v0 = func_00B28900();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x214) == 0) {
            var_s1 = 1;
        } else {
            var_s1 = 0;
        }
        func_001D7D80(M2C_FIELD(temp_v0, void **, 0x17C), var_s1);
        func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x180), var_s1);
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x180), 0, arg0 & 0xFF);
    }
}
