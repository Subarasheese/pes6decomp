/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00314F30(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK func_00338930(void *);                      /* extern */

s32 func_003191F0(void *arg0) {
    func_00314F30(M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, s32 *, 0x4C));
    func_00338930(arg0);
    return 1;
}
