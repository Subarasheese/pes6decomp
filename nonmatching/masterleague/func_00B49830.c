/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B44AC0();                            /* extern */
M2C_UNK func_00B49B60();                            /* extern */
extern s32 D_003EAE78;
extern u8 D_003EAE80;

void func_00B49830(void) {
    if (D_003EAE78 != 0) {
        if (D_003EAE80 == 1) {
            D_003EAE80 = 0;
        }
        func_00B44AC0();
        func_00B49B60();
    }
}
