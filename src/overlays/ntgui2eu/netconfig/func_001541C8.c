/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011E0CF8)();

void func_001541C8(void) {
    if (D_011E0CF8 != NULL) {
        D_011E0CF8();
    }
}
