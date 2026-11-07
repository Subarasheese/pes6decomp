/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_00B92940(M2C_UNK, M2C_UNK);                /* extern */
extern char func_00BE69E0[];

void func_00BE6A30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_00B92940(0xED0018, 0x10);
    M2C_FIELD(arg0, char **, 4) = func_00BE69E0;
}
