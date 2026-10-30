/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F22B0(void *);
void func_008D07E0(void *arg0) {
    if (arg0 != NULL) {
        func_001F22B0(M2C_FIELD(arg0, void **, 0x1BC));
        M2C_FIELD(arg0, void **, 0x1BC) = NULL;
        M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    }
}
