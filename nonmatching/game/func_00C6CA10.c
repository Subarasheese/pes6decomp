/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00182AE0(s32);
M2C_UNK func_00C6C8E0();                            /* extern */
extern char D_00CCBB40[];

void func_00C6CA10(void) {
    if (M2C_FIELD(((void *)D_00CCBB40), u8 *, 0) == 0) {
        M2C_FIELD(((void *)D_00CCBB40), u8 *, 0) = 1U;
        M2C_FIELD(((void *)D_00CCBB40), s8 *, 2) = 0;
        M2C_FIELD(((void *)D_00CCBB40), M2C_UNK (**)(), 4) = func_00C6C8E0;
        func_00182AE0(0);
        M2C_FIELD(((void *)D_00CCBB40), M2C_UNK (**)(), 4)();
    }
}
