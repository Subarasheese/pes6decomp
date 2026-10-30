/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0093DCA0(s32);
s32 func_008204A0(s32);                             /* extern */
s32 func_0093DDB0(s32);                             /* extern */
s32 func_0093DE40(s32);                             /* extern */
s32 func_0093DE70(s32);                             /* extern */
s32 func_0093DEA0(s32);                             /* extern */
s32 func_0093DEB0();                                /* extern */
s32 func_0093DEC0(s32);                             /* extern */
extern void *D_00A7DEC0;

void *func_009DD7D0(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 var_v1;

    if ((arg0 < 0) || (arg0 >= (s32) M2C_FIELD(D_00A7DEC0, u8 *, 1))) {
        return NULL;
    }
    M2C_FIELD(arg1, s32 *, 0) = func_0093DEB0();
    M2C_FIELD(arg1, s32 *, 4) = func_0093DEA0(arg0);
    temp_v0 = func_0093DDB0(arg0);
    var_v1 = 3;
    if (temp_v0 != 3) {
        var_v1 = 2;
        if (temp_v0 != 2) {
            var_v1 = 1;
            if (temp_v0 != 1) {
                var_v1 = 0;
            }
        }
    }
    M2C_FIELD(arg1, s32 *, 8) = var_v1;
    M2C_FIELD(arg1, s32 *, 0xC) = func_008204A0(func_0093DEC0(arg0));
    M2C_FIELD(arg1, s32 *, 0x10) = func_0093DE40(arg0);
    M2C_FIELD(arg1, s32 *, 0x14) = func_0093DE70(arg0);
    M2C_FIELD(arg1, s8 *, 0x18) = func_0093DCA0(arg0);
    return arg1;
}
