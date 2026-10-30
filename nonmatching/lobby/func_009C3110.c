/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008178F0(M2C_UNK);                     /* extern */
M2C_UNK func_00835C40();                            /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
M2C_UNK func_009C3FF0();                            /* extern */
extern void *D_00A7DD50;

void func_009C3110(void) {
    if (D_00A7DD50 != NULL) {
        func_009C3FF0();
        if (M2C_FIELD(D_00A7DD50, s8 *, 0x11A3) != 0) {
            M2C_FIELD(D_00A7DD50, s8 *, 0x11A3) = 0;
            func_00835C40();
            func_008178F0(1);
        }
        func_0099C7C0(D_00A7DD50);
        D_00A7DD50 = NULL;
    }
}
