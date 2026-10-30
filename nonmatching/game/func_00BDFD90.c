/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B9E5D0(void *);                      /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */

void func_00BDFD90(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12) == 4) {
        func_00B9E5D0(arg0);
    }
}
