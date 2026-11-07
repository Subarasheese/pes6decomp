/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *D_003E9DB8;

void func_002D9080(s32 arg0) {
    if (D_003E9DB8 != NULL) {
        M2C_FIELD(D_003E9DB8, s32 *, 0x14) = arg0;
    }
}
