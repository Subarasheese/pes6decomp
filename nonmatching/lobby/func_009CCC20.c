/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C7C0(u8 *);                        /* extern */
M2C_UNK func_009E4C60();                            /* extern */
M2C_UNK func_009E5FF0();                            /* extern */
extern u8 *D_00A7DDA8;

void func_009CCC20(void) {
    if (D_00A7DDA8 != NULL) {
        if (*D_00A7DDA8 == 2) {
            func_009E5FF0();
        } else {
            func_009E4C60();
        }
        func_0099C7C0(D_00A7DDA8);
        D_00A7DDA8 = NULL;
    }
}
