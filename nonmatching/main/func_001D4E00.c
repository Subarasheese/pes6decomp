/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7F10(void *);                      /* extern */

void func_001D4E00(void *arg0) {
    void *temp_s0;
    void *var_a0;

    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0x1C) != 0)) {
        var_a0 = M2C_FIELD(arg0, void **, 0x20);
        do {
            temp_s0 = M2C_FIELD(var_a0, void **, 0xC);
            func_001D7F10(var_a0);
            var_a0 = temp_s0;
        } while (temp_s0 != NULL);
    }
}
