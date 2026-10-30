/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001540B0(void);
extern void func_00153FA0(void *);
M2C_UNK func_00362610();                            /* extern */
M2C_UNK func_008187D0();                            /* extern */
extern void *D_003EA26C;

void func_0080F5A0(void) {
    s8 temp_s0;

    temp_s0 = M2C_FIELD(D_003EA26C, s8 *, 0x3F);
    if (D_003EA26C != NULL) {
        func_008187D0();
        func_00153FA0(D_003EA26C);
        D_003EA26C = NULL;
        if (temp_s0 != 0) {
            func_001540B0();
            return;
        }
        func_00362610();
    }
}
