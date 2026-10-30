/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E4570(void *);
void func_009F0110(void *arg0) {
    if ((arg0 + 4) != 0) {
        func_002E4570(M2C_FIELD(arg0, void **, 4));
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
