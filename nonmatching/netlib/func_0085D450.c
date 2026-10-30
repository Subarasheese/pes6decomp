/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0080F1F0(void *);                      /* extern */
M2C_UNK func_0080F330(void *);                      /* extern */

s32 func_0085D450(M2C_UNK arg0, void *arg1) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg1, u8 *, 0xCC);
    switch (temp_v1) {                              /* irregular */
    case 2:
        func_0080F330(arg1);
        break;
    case 5:
        func_0080F1F0(arg1);
        break;
    }
    return 0;
}
