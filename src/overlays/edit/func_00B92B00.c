/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001B9830(s32, s32);
extern s32 func_00B8F8D0(s32, s32);

void func_00B92B00(s32 arg0, s32 arg1) {
    func_001B9830(func_00B8F8D0(arg0, 0), arg1);
}
