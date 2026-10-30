/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern M2C_UNK func_00313880;

s32 func_00312FE0(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 8) = 0;
    func_003387D0(arg0, (s32) &func_00313880);
    return 1;
}
