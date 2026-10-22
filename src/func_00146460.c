/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_00146480(s32 arg0, s32 arg1, s32 arg2);

void func_00146460(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        arg1 = arg0;
    }
    func_00146480(arg0, arg1, arg1);
}
