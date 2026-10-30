/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00855290(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B78E00();                            /* extern */

void func_00BE9ED0(void) {
    func_00B78E00();
    func_009E1D30(1, 0xE);
    if (func_002DCA30() != 0) {
        func_00855290(2, func_009E1C90(1) & 0xFF, 1);
    }
}
