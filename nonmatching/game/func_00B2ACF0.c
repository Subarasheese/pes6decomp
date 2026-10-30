/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B2AD40(void *);                      /* extern */
M2C_UNK func_00B31650(void *);                      /* extern */

void func_00B2ACF0(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    if ((s32) M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 0x30) < 0x59A) {
        func_00B31650(temp_a0);
        return;
    }
    func_00B2AD40(temp_a0);
}
