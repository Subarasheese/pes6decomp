/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FAE48(void *);                      /* extern */

s32 func_008FBD68(void *arg0, u32 arg1) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x40);
    if (arg1 >= 2U) {
        return -1;
    }
    M2C_FIELD(temp_a0, u32 *, 0x87C) = arg1;
    func_008FAE48(temp_a0);
    return 1;
}
