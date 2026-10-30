/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00175108(void);
M2C_UNK func_00175118(s32);                         /* extern */
extern M2C_UNK (*D_005C1458)();

void func_00174D58(s32 arg0) {
    D_005C1458();
    func_00175108();
    func_00175118(arg0);
}
