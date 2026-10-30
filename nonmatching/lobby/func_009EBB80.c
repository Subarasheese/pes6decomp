/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009EF370(void *, s32, s32);
void func_009EBB80(s32 arg0, s32 arg1, s32 arg2) {
    func_009EF370(M2C_FIELD(((arg1 * 0x24) + arg0), void **, 8), arg1, arg2);
}
