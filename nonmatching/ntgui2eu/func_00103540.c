/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00109510();                                /* extern */
M2C_UNK func_00109C70(M2C_UNK *);                   /* extern */
extern s32 *D_006020B8;
extern M2C_UNK func_00103318;

void func_00103540(void) {
    s32 temp_v0;

    temp_v0 = func_00109510();
    if (D_006020B8 != NULL) {
        *D_006020B8 = temp_v0;
    }
    func_00109C70(&func_00103318);
}
