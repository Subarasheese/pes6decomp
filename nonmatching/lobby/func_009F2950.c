/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 *func_0099C7E0(M2C_UNK);                         /* extern */
extern s8 *D_00A7E020;

void func_009F2950(s8 arg0) {
    s8 *temp_v0;

    if (D_00A7E020 == NULL) {
        temp_v0 = func_0099C7E0(0x40);
        D_00A7E020 = temp_v0;
        if (temp_v0 != NULL) {
            *temp_v0 = arg0;
            M2C_FIELD(D_00A7E020, s8 *, 5) = 0;
        }
    }
}
