/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
M2C_UNK func_00C8AB20();                            /* extern */
extern s16 D_003EA890;

void func_00C8AC20(void) {
    if ((func_0017A670(0) != 0xC) && (D_003EA890 != 0)) {
        if (D_003EA890 <= 0x3E) {
            do {
                func_00C8AB20();
            } while (D_003EA890 <= 0x3E);
        }
        D_003EA890 = 0;
    }
}
