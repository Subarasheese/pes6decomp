/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009130E0();                            /* extern */
M2C_UNK func_009133C0(M2C_UNK, s32);                /* extern */
extern s32 *D_00923FCC;

s32 func_00913060(void) {
    s32 temp_s0;

    if (*D_00923FCC > 0) {
        func_0026E840(0x8400F802);
        *D_00923FCC -= 1;
        temp_s0 = *D_00923FCC;
        func_009133C0(0, temp_s0);
        func_009133C0(1, temp_s0);
        func_009130E0();
    }
    return 0;
}
