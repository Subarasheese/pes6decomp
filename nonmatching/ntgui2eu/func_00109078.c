/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00109078(s32 arg0, s32 arg1, s64 *arg2) {
    *arg2 = M2C_FIELD(((arg1 * 0x18) + arg0), s64 *, 0x18);
}
