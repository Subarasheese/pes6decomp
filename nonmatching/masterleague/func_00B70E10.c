/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B71C80(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0099EB30(s32, s32, s32, s32);          /* extern */
void *func_009A0430();                              /* extern */
s32 func_009A1EE0(u8);                              /* extern */
s32 func_00B71B40(u8);                              /* extern */

s32 func_00B70E10(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00B71C80();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x10) == 0) {
            if (func_00B71B40(M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x1B) + temp_v0), u8 *, 0x11)) == 0) {

            } else {
                temp_v0_2 = func_009A0430();
                if (temp_v0_2 != NULL) {
                    if (func_009A1EE0(M2C_FIELD(temp_v0_2, u8 *, 0x418)) != 0) {
                        if (M2C_FIELD(temp_v0, u8 *, 0x1D) != 1) {
                            M2C_FIELD(temp_v0, u8 *, 0x1D) = 1U;
                            func_0099EB30(arg0, arg1, arg2, arg3);
                        }
                    } else {
                        func_0026E840(0x8C008005);
                    }
                }
            }
        }
    }
    return 0;
}
