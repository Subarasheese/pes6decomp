/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF030(void *, void *);
extern void *D_00A7DEF8;

void *func_009E1EB0(void *arg0) {
    void *temp_v0;

    if (D_00A7DEF8 == NULL) {
        return NULL;
    }
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(D_00A7DEF8, void **, 0x18);
        if (temp_v0 != NULL) {
            func_001DF030(M2C_FIELD(temp_v0, void **, 0xC), arg0);
            return arg0;
        }
        return NULL;
    }
    return NULL;
}
