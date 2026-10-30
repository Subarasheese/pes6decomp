/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_0099C7C0(void *);                      /* extern */

s32 func_009A0170(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        if (temp_a0 != NULL) {
            func_001D7F10(temp_a0);
            M2C_FIELD(arg0, void **, 4) = NULL;
        }
        temp_a0_2 = M2C_FIELD(arg0, void **, 8);
        if (temp_a0_2 != NULL) {
            func_001D7F10(temp_a0_2);
            M2C_FIELD(arg0, void **, 8) = NULL;
        }
        func_0099C7C0(arg0);
        return 0;
    }
    return 1;
}
