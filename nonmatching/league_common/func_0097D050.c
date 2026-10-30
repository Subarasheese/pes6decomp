/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
void func_0097D050(s8 arg0) {
    void *temp_v0;

    temp_v0 = func_00229380();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 5) = arg0;
    }
}
