/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00BC65A0(M2C_UNK);                     /* extern */
extern void *D_00CEB910;

void func_00BFE350(void) {
    if (D_00CEB910 != NULL) {
        func_00153FA0(D_00CEB910);
        D_00CEB910 = NULL;
    }
    func_00BC65A0(6);
}
