/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BEE50();                            /* extern */
M2C_UNK func_009BF000();                            /* extern */
extern void *D_003EA9CC;

void func_009BF230(void) {
    if (D_003EA9CC != NULL) {
        if (M2C_FIELD(D_003EA9CC, s32 *, 0x7C) == 1) {
            func_009BF000();
            return;
        }
        func_009BEE50();
    }
}
