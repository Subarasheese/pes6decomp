/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_0022C140(s32);                           /* extern */
s32 func_0022C1E0();                                /* extern */
s32 func_00231240();                                /* extern */

void func_00239F50(s32 arg0, s32 arg1, s8 arg2) {
    s32 temp_s0;
    s32 temp_v1;
    void *temp_v0;

    temp_s0 = func_0022C1E0();
    if (func_00231240() != 1) {
        temp_v0 = func_0022C140(arg0);
        if ((temp_s0 != 0) && (temp_v0 != NULL)) {
            temp_v1 = (M2C_FIELD(temp_v0, u8 *, 8) + (arg1 & 0xFF)) & 0xFF;
            if (temp_v1 < 0x60) {
                M2C_FIELD((temp_v1 + temp_s0), s8 *, 0xC4) = arg2;
            }
        }
    }
}
