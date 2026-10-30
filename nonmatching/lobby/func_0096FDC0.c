/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00821570();                                /* extern */
s32 func_0093BBD0();                                /* extern */
s32 func_0093BBE0();                                /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009B7520(M2C_UNK);                     /* extern */

void func_0096FDC0(void) {
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = func_00969AF0();
    if (func_00969B90() != 0) {
        func_009717C0(5);
    } else if (func_00821570() != 0) {
        if ((M2C_FIELD(temp_s0, s32 *, 0x18) != 4) && (func_0093BBE0() != 0)) {
            func_009717C0(5);
            return;
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x18) != 4) {
            func_0026E840(0x8C008005);
            if (func_0093BBD0() != 0) {
                var_v0 = 0x01FB0075;
            } else {
                var_v0 = 0x020D0035;
            }
            M2C_FIELD(temp_s0, s32 *, 0) = var_v0;
            func_009717C0(0xB);
            return;
        }
        func_0026E840(0x8C008005);
        M2C_FIELD(temp_s0, s32 *, 0) = 0x01FB0075;
        func_009B7520(0);
        func_009717C0(0xB);
    }
}
