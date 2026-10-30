/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF030(void *, void *);
extern void *D_00A7DED0;

void *func_009DE7B0(void *arg0) {
    void *temp_v0;

    if (D_00A7DED0 == NULL) {
        return NULL;
    }
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(D_00A7DED0, void **, 0x14);
        if (temp_v0 != NULL) {
            func_001DF030(M2C_FIELD(temp_v0, void **, 0xC), arg0);
            return arg0;
        }
        return NULL;
    }
    return NULL;
}
