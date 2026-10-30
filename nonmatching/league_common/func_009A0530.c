/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0023AFC0(s32);
extern s32 func_0022C140(s32);
M2C_UNK func_0099B8C0(u8);                          /* extern */
M2C_UNK func_0099F070();                            /* extern */
M2C_UNK func_009A3BF0();                            /* extern */
extern void *D_003E7B0C;
extern void *D_003EA994;

void func_009A0530(void) {
    u8 temp_s0_2;
    void *temp_s0;

    temp_s0 = D_003EA994;
    if ((temp_s0 != NULL) && (func_0022C140((s32) M2C_FIELD(D_003E7B0C, u8 *, 0x28)) != 0)) {
        func_0099F070();
        func_009A3BF0();
        temp_s0_2 = M2C_FIELD(temp_s0, u8 *, 4);
        switch (temp_s0_2) {                        /* irregular */
        case 1:
            func_0023AFC0(0);
            break;
        case 0:
            func_0023AFC0(1);
            break;
        }
        func_0099B8C0(temp_s0_2);
    }
}
