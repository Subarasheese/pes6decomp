/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF030(void *, void *);
extern char D_00A7DD58[];

void *func_009C3B70(s32 arg0, void *arg1) {
    void *temp_v0;

    if ((*(s32 *)D_00A7DD58) == 0) {
        return NULL;
    }
    if (arg1 == NULL) {
        return NULL;
    }
    if (arg0 < 0) {
        return NULL;
    }
    if (arg0 < 3) {
        temp_v0 = M2C_FIELD(((arg0 * 8) + (*(s32 *)D_00A7DD58)), void **, 8);
        if (temp_v0 != NULL) {
            func_001DF030(M2C_FIELD(temp_v0, void **, 0xC), arg1);
            return arg1;
        }
        return NULL;
    }
    return NULL;
}
