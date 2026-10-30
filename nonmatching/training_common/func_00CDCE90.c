/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00CEADC0(void);
M2C_UNK func_00CE5FE0();                            /* extern */
M2C_UNK func_00CE66C0();                            /* extern */
s32 func_00CEAC90();                                /* extern */
s32 func_00CEAD80();                                /* extern */

void func_00CDCE90(void) {
    func_00CE5FE0();
    if ((func_00CEAC90() != 0) || (func_00CEAD80() != 0)) {
        func_00CE66C0();
    }
    func_00CEADC0();
}
