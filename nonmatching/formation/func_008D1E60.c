/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C1430(s32, f32, f32);               /* extern */
M2C_UNK func_008C5BF0(s32, s32, s32);               /* extern */

void func_008D1E60(void *arg0, void *arg1) {
    func_008C5BF0(arg0 + 0x214, (s32) M2C_FIELD(arg1, f32 *, 0), (s32) M2C_FIELD(arg1, f32 *, 4));
    func_008C1430(M2C_FIELD(arg0, s32 *, 0x1EC), M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4));
}
