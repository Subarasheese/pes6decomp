/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B897E0(void **);                     /* extern */
M2C_UNK func_00B89910(void **);                     /* extern */
M2C_UNK func_00B9EA10(void **);                     /* extern */
M2C_UNK func_00BD3BE0(void **, s32);                /* extern */
s32 func_00BD45B0(u16);                             /* extern */

void func_00B9D1A0(void **arg0) {
    s32 temp_a1;

    func_00B2ACF0();
    func_00B89910(arg0);
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        func_00B364D0(3U);
        func_00B897E0(arg0);
        func_00B9EA10(arg0);
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        temp_a1 = func_00BD45B0(M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30)) & 0xFF;
        if (temp_a1 == 1) {
            func_00BD3BE0(arg0, temp_a1);
        }
        func_00207390(M2C_FIELD(*arg0, void **, 4), 8);
    }
}
