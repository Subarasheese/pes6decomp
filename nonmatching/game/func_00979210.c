/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK);             /* extern */

void func_00979210(void *arg0) {
    void *temp_v1;

    func_00209A00(M2C_FIELD(arg0, void **, 4), 0);
    temp_v1 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_v1, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), u8 *, 2) * 2);
    func_00207390(M2C_FIELD(arg0, void **, 4), 4);
}
