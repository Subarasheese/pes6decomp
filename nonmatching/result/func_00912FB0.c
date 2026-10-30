/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009130E0();                            /* extern */
M2C_UNK func_009133C0(M2C_UNK, s32);                /* extern */
extern char D_0058D7AA[];
extern void *D_00923FCC;

s32 func_00912FB0(void) {
    s32 temp_s0;
    s32 var_s0;

    if ((*(s8 *)D_0058D7AA) == 0) {
        var_s0 = 0xC;
    } else {
        var_s0 = 9;
    }
    if (M2C_FIELD(D_00923FCC, s32 *, 0) < (M2C_FIELD(D_00923FCC, s32 *, 4) - var_s0)) {
        func_0026E840(0x8400F802);
        M2C_FIELD(D_00923FCC, s32 *, 0) = (s32) (M2C_FIELD(D_00923FCC, s32 *, 0) + 1);
        temp_s0 = (M2C_FIELD(D_00923FCC, s32 *, 0) + var_s0) - 1;
        func_009133C0(0, temp_s0);
        func_009133C0(1, temp_s0);
        func_009130E0();
    }
    return 0;
}
