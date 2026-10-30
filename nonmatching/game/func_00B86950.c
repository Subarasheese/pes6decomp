/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B35E10(void *, void *, void *);      /* extern */
M2C_UNK func_00BD3BE0(void *, s32);                 /* extern */
s32 func_00BD45B0(u16);                             /* extern */

void func_00B86950(void *arg0) {
    s32 temp_a1;
    void *temp_v0;

    func_00B2ACF0();
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        temp_v0 = M2C_FIELD(arg0, void **, 0);
        func_00B35E10(arg0, temp_v0 + 0x6C, temp_v0 + 0x70);
        func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
        temp_a1 = func_00BD45B0(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30)) & 0xFF;
        if (temp_a1 == 1) {
            func_00BD3BE0(arg0, temp_a1);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x7F;
    }
}
