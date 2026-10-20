/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_001F3C80(void *arg0, f32 fparg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x18) = fparg0;
        M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) | 1);
    }
}
