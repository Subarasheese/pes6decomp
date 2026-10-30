/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BE4B50(M2C_UNK);                     /* extern */
extern M2C_UNK func_00BE5820;

s32 func_00BE5990(void *arg0) {
    func_00BE4B50(0);
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE5820;
    return 0;
}
