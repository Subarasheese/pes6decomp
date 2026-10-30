/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
M2C_UNK func_00214290(s32);                         /* extern */
s32 func_00965370(s32);                             /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009D5600(M2C_UNK);                     /* extern */
M2C_UNK func_009D5BA0(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C090();                            /* extern */
extern s8 *D_00A7DD60;

s32 func_009C5140(void) {
    s32 temp_v0;
    s8 var_a0;

    func_0099D030(1);
    temp_v0 = func_00965370(M2C_FIELD(D_00A7DD60, s32 *, 0x28));
    if (temp_v0 != 0) {
        func_0099D030(0);
        if (temp_v0 < 0) {
            var_a0 = 0x1D;
            M2C_FIELD(D_00A7DD60, s8 *, 1) = 0xD;
        } else {
            func_00D0C090();
            func_009D5BA0(0);
            func_009D5600(0x11);
            func_00213800(M2C_FIELD(D_00A7DD60, void **, 0xC));
            func_00214290(M2C_FIELD(D_00A7DD60, s32 *, 0x10));
            var_a0 = 1;
            M2C_FIELD(D_00A7DD60, s32 *, 0x10) = 0;
        }
        M2C_FIELD(D_00A7DD60, s8 *, 0) = var_a0;
        return 0;
    }
    return 0;
}
