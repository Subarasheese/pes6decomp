/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_009F0960(u8);                               /* extern */
u8 func_009F0AA0(u8);                               /* extern */
extern void *D_00A7E018;

u8 func_009F1000(void) {
    u8 temp_a0;

    if (D_00A7E018 != NULL) {
        temp_a0 = M2C_FIELD(D_00A7E018, u8 *, 1);
        switch (temp_a0) {                          /* irregular */
        case 3:
            if (M2C_FIELD(D_00A7E018, u8 *, 0) == 0) {
                return M2C_FIELD(D_00A7E018, u8 *, 2);
            }
            goto block_16;
        case 2:
        case 0:
            return func_009F0AA0(temp_a0);
        case 1:
            return func_009F0960(temp_a0);
        default:
            return 1U;
        }
    } else {
block_16:
        return 1U;
    }
}
