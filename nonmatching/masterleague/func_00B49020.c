/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00B47C80(u8);                          /* extern */
M2C_UNK func_00B48080();                            /* extern */
M2C_UNK func_00B48330();                            /* extern */
M2C_UNK func_00B487D0();                            /* extern */
M2C_UNK func_00B48A20();                            /* extern */

void func_00B49020(void) {
    u32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001D5A10(0x1032C);
        M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            temp_v0_3 = func_001D5A10(0x1032F);
            M2C_FIELD(temp_v0, void **, 0x7D4) = temp_v0_3;
            if (temp_v0_3 != NULL) {
                func_00B48A20();
                func_00B48330();
                func_00B48080();
                func_00B487D0();
                func_00B47C80(M2C_FIELD(temp_v0, u8 *, 0x3B6));
            }
        }
    }
}
