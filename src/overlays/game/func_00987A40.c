/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00987210(s32, s32, s32);

void func_00987A40(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0) {
        func_00987210(arg0, arg1 + 0x80, 1);
        return;
    }
    func_00987210(arg0, arg1 + 0x80, 4);
}
