/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
s8 func_008BB190(M2C_UNK, M2C_UNK, M2C_UNK);        /* extern */

void func_008D0270(void *arg0) {
    s8 sp2C;
    s8 sp2D;
    s8 sp2E;
    s8 sp2F;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x190);
    if ((temp_v1 != NULL) && (arg0 != NULL) && (temp_v1 != NULL)) {
        sp2E = 0xFF;
        sp2D = 0xFF;
        sp2C = 0xFF;
        sp2F = func_008BB190(0xFF, 0x40, 0x3C);
        func_001EEE60(M2C_FIELD(arg0, void **, 0x190), &sp2C);
    }
}
