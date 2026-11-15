/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6NowLoading[];

void func_001BE830(s32 arg0) {
    void *p;

    p = (void *)Pes6NowLoading;
    if (p != NULL) {
        M2C_FIELD(p, s32 *, 0x6C) = arg0;
    }
}
