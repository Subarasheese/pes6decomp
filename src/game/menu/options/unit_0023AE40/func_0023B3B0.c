/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0053C320[];
s32 func_008B31F0(s32);
void func_008B31E0(s32, u16);

void func_0023B3B0(s32 dst, s32 src) {
    func_008B31E0(D_0053C320[dst], func_008B31F0(D_0053C320[src]));
}
