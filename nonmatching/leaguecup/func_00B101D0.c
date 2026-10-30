/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0CD50(void);
M2C_UNK func_008C9E80(s32);                         /* extern */
M2C_UNK func_008CA810(s32, s32, M2C_UNK);           /* extern */
s32 func_00B0C430(u8, u8);                          /* extern */
s32 func_00B0C7B0(u8);                              /* extern */

void func_00B101D0(void) {
    s32 temp_v1;
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x141C);
        switch (temp_v1) {                          /* irregular */
        case 4:
            var_v0 = 0xFFFF;
            break;
        case 3:
            var_v0 = func_00B0C7B0(M2C_FIELD(temp_v0, u8 *, 0x132C));
            break;
        case 2:
            var_v0 = func_00B0C430(M2C_FIELD(temp_v0, u8 *, 0x132D), M2C_FIELD(temp_v0, u8 *, 0x132E));
            break;
        default:
            var_v0 = 0xFFFF;
            break;
        case 1:
        case 0:
            var_v0 = 0xFFFF;
            break;
        }
        func_008CA810(M2C_FIELD(temp_v0, s32 *, 0xEA8), var_v0 & 0xFFFF, 0);
        func_008C9E80(M2C_FIELD(temp_v0, s32 *, 0xEA8));
    }
}
