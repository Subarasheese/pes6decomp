/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D4A50(void *, s32);                 /* extern */
M2C_UNK func_008D4A60(void *, s32);                 /* extern */
M2C_UNK func_008D4DF0(void *);                      /* extern */

void func_008E2A50(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, void *arg4) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    func_008D4DF0(arg0 + 4);
    func_008D4A60(arg0 + 4, M2C_FIELD(arg4, s32 *, 0));
    func_008D4A50(arg0 + 4, M2C_FIELD(arg4, s32 *, 4));
}
