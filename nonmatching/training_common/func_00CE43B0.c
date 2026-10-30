/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void *D_003E7E1C;
extern M2C_UNK func_00CDD1D0;

void func_00CE43B0(void *arg0) {
    M2C_FIELD(D_003E7E1C, M2C_UNK **, 0x18C) = (M2C_UNK *) M2C_FIELD(D_003E7E1C, M2C_UNK **, 0x188);
    M2C_FIELD(D_003E7E1C, M2C_UNK **, 0x188) = &func_00CDD1D0;
    func_00264790(arg0, 0U);
}
