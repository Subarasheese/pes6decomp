/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
void func_0063E210(s8 arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x2A) = arg0;
        M2C_FIELD(temp_v0, s8 *, 0x2B) = (s8) (M2C_FIELD(arg1, s16 *, 2) + (M2C_FIELD(arg1, s16 *, 0) * 4));
    }
}
