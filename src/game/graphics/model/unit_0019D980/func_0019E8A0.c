/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_001454C0(s32);
s32 func_00150110(s32);
void func_0014F8F0(s32, s32, s32, s32);

void func_0019E8A0(s32 arg) {
    s32 handle = func_001454C0(0x2718);

    if (handle == 0) {
        return;
    }
    func_0014F8F0(handle, arg, 0, func_00150110(handle));
}
