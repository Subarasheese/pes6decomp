/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F2E80(int);
extern void *D_0065EDC0;

void func_00654A70(s32 arg0) {
    if ((&D_0065EDC0 != NULL) && (D_0065EDC0 != NULL)) {
        if ((arg0 & 0xFF) != 1) {
            M2C_FIELD(D_0065EDC0, s32 *, 0x9FC) = 0;
            return;
        }
        func_002F2E80((s32) D_0065EDC0);
    }
}
