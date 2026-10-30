/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009EEC90(s32, void *, void *);
void func_009EDC20(void *arg0, s32 arg1, void *arg2) {
    func_009EEC90(arg1, M2C_FIELD(arg0, void **, 0x2C), arg2);
}
