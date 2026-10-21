/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00398660[];

void func_001BE830(s32 arg0) {
    void *p;

    p = (void *)D_00398660;
    if (p != NULL) {
        M2C_FIELD(p, s32 *, 0x6C) = arg0;
    }
}
