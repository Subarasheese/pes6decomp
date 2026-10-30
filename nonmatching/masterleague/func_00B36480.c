/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_00B35E30(s32);                              /* extern */
M2C_UNK func_00B36300();                            /* extern */
extern s32 D_003EAE54;
extern u8 D_003EAE58;

void func_00B36480(void) {
    if (D_003EAE58 != 0) {
        D_003EAE54 = 0;
    } else {
        if (D_003EAE54 >= 0x65) {
            D_003EAE58 = func_00B35E30(D_003EAE54 - 0x64);
        }
        D_003EAE54 += 1;
    }
    func_00B36300();
}
