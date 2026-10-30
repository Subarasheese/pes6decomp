/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00825510();                            /* extern */
extern char D_00A7DE20[];

void func_009D4A10(void) {
    if ((*(s32 *)D_00A7DE20) == 1) {
        func_00825510();
    }
    func_001C48E8(((void *)D_00A7DE20), 0, 0x6C);
}
