/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008178F0(M2C_UNK);                     /* extern */
M2C_UNK func_00817C00();                            /* extern */
M2C_UNK func_008187D0();                            /* extern */
M2C_UNK func_00828D70();                            /* extern */
M2C_UNK func_00835C40();                            /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
M2C_UNK func_009E1FD0();                            /* extern */
extern void *D_00A7DF00;

void func_009E2CF0(void) {
    if (D_00A7DF00 != NULL) {
        if (M2C_FIELD(D_00A7DF00, u8 *, 4) != 3) {
            func_008187D0();
            func_00817C00();
        }
        if (M2C_FIELD(D_00A7DF00, u8 *, 4) == 0) {
            func_00828D70();
        }
        if (M2C_FIELD(D_00A7DF00, u8 *, 0x14) != 0) {
            M2C_FIELD(D_00A7DF00, u8 *, 0x14) = 0U;
            func_00835C40();
            func_008178F0(1);
        }
        func_009E1FD0();
        func_0099C7C0(D_00A7DF00);
        D_00A7DF00 = NULL;
    }
}
