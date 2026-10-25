/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00306170(s32);
void func_00250200(s32, s32, s32);

void func_0026E500(s32 target, s32 value, s32 base) {
    if (value < 0) {
        value = 0;
    }
    if (value > 100) {
        value = 100;
    }
    func_00250200(target, value, func_00306170(base));
}
