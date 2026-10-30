/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B71C80(void);
s32 func_00991D90(u8);                              /* extern */
M2C_UNK func_00992F80(s32, s32, s32, s32);          /* extern */
void *func_00993A80();                              /* extern */
s32 func_00B71B40(u8);                              /* extern */

s32 func_00B709E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00B71C80();
    if (temp_v0 == 0) {
        return 0;
    }
    temp_v0_2 = func_00993A80();
    if (temp_v0_2 != NULL) {
        if (M2C_FIELD(temp_v0, u8 *, 0x10) == 0) {
            if (func_00B71B40(M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x1B) + temp_v0), u8 *, 0x11)) != 1) {
                if (M2C_FIELD(temp_v0, u8 *, 0x1C) != 1) {
                    if (func_00991D90(M2C_FIELD(temp_v0_2, u8 *, 0x25C)) != 0) {
                        func_00992F80(arg0, arg1, arg2, arg3);
                        M2C_FIELD(temp_v0, u8 *, 0x1C) = 1U;
                        return 0;
                    }
                    return 0;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
