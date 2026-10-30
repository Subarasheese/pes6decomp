/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
s32 func_00C37850(u8);                              /* extern */
M2C_UNK func_00C37900(u8);                          /* extern */

void func_00C37A50(void *arg0) {
    u8 temp_a0;
    u8 temp_s1;

    func_00B2ACF0();
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
        func_00BD4040(arg0, 1);
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54);
        if (temp_a0 != 0) {
            temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0);
            if (temp_s1 == func_00C37850(temp_a0)) {
                func_00C37900(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
            }
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 1;
    }
}
