/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00172820(M2C_UNK *);                   /* extern */
extern char D_003CB210[];

s32 func_001726E8(void *arg0) {
    if (arg0 == NULL) {
        func_00172820(((void *)D_003CB210));
        return -1;
    }
    return M2C_FIELD(arg0, s32 *, 0x14);
}
