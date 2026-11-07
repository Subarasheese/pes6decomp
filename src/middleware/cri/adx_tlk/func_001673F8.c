/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0015B478(M2C_UNK *);                   /* extern */
extern char D_003C8E38[];

s32 func_001673F8(void *arg0) {
    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8E38));
        return -1;
    }
    return M2C_FIELD(arg0, s32 *, 0x4C);
}
