/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
void func_008D7690(s32 arg0, s8 arg1) {
    func_001EF900(M2C_FIELD((((arg1 & 0xFF) * 4) + arg0), void **, 0x100), arg1);
}
