/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern u8 func_00BF6270(void);
s32 func_00B2A420(u8);                              /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */

void func_00B86890(void *arg0) {
    s16 var_a0;

    if (arg0 == func_00B2A420(func_00BF6270())) {
        func_00B364D0(0U);
        func_00BD4040(arg0, 3);
        func_00BD3BA0(arg0, 4, 1);
        func_00BD3BA0(arg0, 5, 1);
        var_a0 = 0x10;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x52) = 1;
    } else if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x51) != 1) {
        var_a0 = 0x7F;
    } else {
        var_a0 = 0x12;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
}
