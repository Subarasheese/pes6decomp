/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E77B4;
s32 func_00231240(void);
u8 *func_00229280(u8);

u8 func_00236630(void) {
    u8 *entry;

    if (func_00231240() == 1) {
        return 0;
    }
    entry = func_00229280(D_003E77B4[0x16F1]);
    if (entry == NULL) {
        return 0;
    }
    return entry[0];
}
