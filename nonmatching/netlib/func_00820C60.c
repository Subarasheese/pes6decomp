/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
extern void func_00153FA0(void *);
s32 func_00820C60(void *arg0) {
    if (arg0 != NULL) {
        func_001F1EA0(M2C_FIELD(arg0, void **, 0));
        M2C_FIELD(arg0, void **, 0) = NULL;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        func_00153FA0(arg0);
        return 0;
    }
    return 1;
}
