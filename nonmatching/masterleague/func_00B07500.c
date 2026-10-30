/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B06270(void);
M2C_UNK func_00B05FC0();                            /* extern */
M2C_UNK func_00B06050();                            /* extern */
extern void *D_003EADE4;

void func_00B07500(void) {
    void *temp_s0;

    temp_s0 = D_003EADE4;
    if (temp_s0 != NULL) {
        func_00B06050();
        if (M2C_FIELD(temp_s0, s32 *, 0x1C) == 0) {
            func_00B05FC0();
        }
        func_00B06270();
    }
}
