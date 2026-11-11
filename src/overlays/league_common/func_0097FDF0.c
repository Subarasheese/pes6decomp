/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK SD_call(M2C_UNK);                     /* extern */
extern void *D_003EA970;

void func_0097FDF0(void) {
    if (D_003EA970 != NULL) {
        M2C_FIELD(D_003EA970, s32 *, 0x1008) = 1;
        SD_call(0x84028400);
    }
}
