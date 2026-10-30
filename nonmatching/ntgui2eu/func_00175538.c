/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001760C8(void);
M2C_UNK func_001760D0(s32);                         /* extern */
M2C_UNK func_00176118(s32);                         /* extern */
extern M2C_UNK (*D_005C1458)();

void func_00175538(s32 arg0) {
    D_005C1458();
    func_001760D0(arg0);
    func_00176118(arg0);
    func_001760C8();
}
