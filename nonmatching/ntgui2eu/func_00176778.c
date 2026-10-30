/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00177378(void);
M2C_UNK func_00177380(s32);                         /* extern */
M2C_UNK func_00177408(s32);                         /* extern */
extern M2C_UNK (*D_005C1458)();

void func_00176778(s32 arg0) {
    D_005C1458();
    func_00177380(arg0);
    func_00177408(arg0);
    func_00177378();
}
