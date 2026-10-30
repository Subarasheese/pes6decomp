/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B447A0(void);
s32 func_00220EF0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */

void func_00B3E7C0(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        temp_v1 = arg0 & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 3:
            var_v0 = func_00220EF0(0xA, 1);
            break;
        case 2:
            var_v0 = func_00220EF0(9, 1);
            break;
        case 1:
            var_v0 = func_00220EF0(8, 1);
            break;
        default:
            var_v0 = func_00220EF0(7, 1);
            break;
        }
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x530), 2, var_v0);
    }
}
