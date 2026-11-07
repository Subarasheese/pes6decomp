/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001B77F0(s32);
extern void func_001B7A60(s32);
extern void func_001B78A0(s32);
void func_001B7ED0(s32, s32);
s32 func_00D0C970(void);
extern s8 D_0058D7AA[];

void func_0090FDA0(s32 arg0, s32 arg1) {
    if ((D_0058D7AA[0] != 0) && (func_00D0C970() != 0)) {
        return;
    }
    if (arg1 != 0) {
        func_001B7ED0(arg0, arg1);
    }
    func_001B78A0(1);
    func_001B7A60(1);
    func_001B77F0(3);
}
