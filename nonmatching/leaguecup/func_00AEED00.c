/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD44;

void func_00AEED00(s16 arg0) {
    if (D_003EAD44 != NULL) {
        M2C_FIELD(D_003EAD44, s16 *, 0x210A) = arg0;
    }
}
