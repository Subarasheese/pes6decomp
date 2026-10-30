/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00220240(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_003EB104;

void func_00BFFCF0(void) {
    if (D_003EB104 != NULL) {
        func_00220240(0, 0x18);
        func_00153FA0(D_003EB104);
        D_003EB104 = NULL;
    }
}
