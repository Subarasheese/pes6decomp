/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165460(s32 *, M2C_UNK, M2C_UNK, s64, s64); /* extern */

void func_001244F8(M2C_UNK arg0, void *arg1) {
    s32 sp10;

    sp10 = 0x12;
    func_00165460(&sp10, 1, 0x12, M2C_FIELD(arg1, s64 *, 0), M2C_FIELD(arg1, s64 *, 8));
}
