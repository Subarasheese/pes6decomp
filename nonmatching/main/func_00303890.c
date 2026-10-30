/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00305D80();                                /* extern */
M2C_UNK func_00305E60(void *, M2C_UNK *);           /* extern */
extern M2C_UNK func_00303840;

s32 func_00303890(void *arg0) {
    void *temp_a0;

    if (func_00305D80() == 0) {
        return 0;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0x10)(temp_a0);
    func_00305E60(arg0, &func_00303840);
    return 1;
}
