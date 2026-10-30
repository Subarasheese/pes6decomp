/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
void func_008D4A00(void *arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_v1 != NULL) {
        func_001DF460(M2C_FIELD(temp_v1, void **, 0xC), arg1);
    }
}
