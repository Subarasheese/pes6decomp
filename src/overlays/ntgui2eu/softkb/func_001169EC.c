/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern void *D_006024A8;

void func_001169EC(void) {
    M2C_UNK (*temp_2)();

    temp_2 = M2C_FIELD(D_006024A8, M2C_UNK (**)(), 0x10C);
    if (temp_2 != NULL) {
        temp_2();
    }
}
