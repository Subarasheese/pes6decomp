/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00958000(s32);
extern void *D_003EA94C;

s32 func_00970BE0(void) {
    if (D_003EA94C == NULL) {
        return 0;
    }
    M2C_FIELD(D_003EA94C, s8 *, 0x405) = 2;
    func_00958000(0x80);
    return 0;
}
