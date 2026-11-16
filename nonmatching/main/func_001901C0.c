/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u8 *D_00520220;

void func_001901C0(u8 arg0, u8 arg1) {
    if (D_00520220 != NULL) {
        D_00520220[1] = arg0;
        D_00520220[2] = arg1;
    }
}
