/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_008CE150();                            /* extern */
M2C_UNK func_008CEA00();                            /* extern */
extern void *D_003EA4D0;

void func_008CC950(void) {
    if (D_003EA4D0 != NULL) {
        func_008CEA00();
        func_008CE150();
        if (D_003EA4D0 != NULL) {
            func_00153FA0(D_003EA4D0);
            D_003EA4D0 = NULL;
        }
    }
}
