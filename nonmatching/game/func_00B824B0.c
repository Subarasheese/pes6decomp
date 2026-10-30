/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B806D0();                            /* extern */
M2C_UNK func_00BF9A50();                            /* extern */
extern M2C_UNK (*D_00C9A710)();

void func_00B824B0(void) {
    if (D_00C9A710 == NULL) {
        D_00C9A710 = func_00B806D0;
    }
    D_00C9A710();
    func_00BF9A50();
}
