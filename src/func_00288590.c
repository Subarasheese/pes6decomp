/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00188A30();
extern s32 D_003E9CCC;

void func_00288590(void) {
    D_003E9CCC = 0;
    if (func_00188A30() == 1) {
        D_003E9CCC |= 1;
    }
}
