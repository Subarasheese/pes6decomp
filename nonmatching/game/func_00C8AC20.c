/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
M2C_UNK func_00C8AB20();                            /* extern */
extern s16 D_003EA890;

void func_00C8AC20(void) {
    if ((func_0017A670(0) != 0xC) && (D_003EA890 != 0)) {
        if (D_003EA890 < 0x3F) {
            do {
                func_00C8AB20();
            } while (D_003EA890 < 0x3F);
        }
        D_003EA890 = 0;
    }
}
