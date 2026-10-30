/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002630F0(void);
extern void *D_003E9C48;

void func_00CDCCE0(s32 arg0) {
    if (func_002630F0() != 0) {
        M2C_FIELD(D_003E9C48, s32 *, 0x18) = arg0;
    }
}
