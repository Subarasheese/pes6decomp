/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001D63E0(void *);                      /* extern */
M2C_UNK func_001DF7B0(s32);                         /* extern */

void func_001D6E40(void *arg0) {
    func_001DF7B0(M2C_FIELD(arg0, s32 *, 0xC));
    func_001D63E0(arg0);
}
