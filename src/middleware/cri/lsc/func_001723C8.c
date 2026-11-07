/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK LSC_CallErrFunc(M2C_UNK *);                   /* extern */
extern char D_003CAFD8[];

s8 func_001723C8(void *arg0) {
    if (arg0 == NULL) {
        LSC_CallErrFunc(((void *)D_003CAFD8));
        return -1;
    }
    return M2C_FIELD(arg0, s8 *, 1);
}
