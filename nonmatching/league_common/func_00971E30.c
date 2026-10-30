/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E4570(void *);
extern void func_001D6E40(void *);
M2C_UNK func_0096DA00(void *);                      /* extern */

void func_00971E30(void *arg0) {
    void *temp_a0;

    if (arg0 != NULL) {
        func_002E4570(M2C_FIELD(arg0, void **, 0));
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        if (temp_a0 != NULL) {
            func_001D6E40(temp_a0);
        }
        func_0096DA00(arg0);
    }
}
