/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_008C8E00(s8 **, s8);
extern void func_008D21F0(s8 *, s8);
extern s32 func_008E7280(s8 *, s8);

void func_008C9CB0(s8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 2) = arg1;
    func_008D21F0(arg0 + 0x480, arg1);
    func_008E7280(arg0 + 0x28, arg1);
    func_008C8E00((s8 **) (arg0 + 0x78C), arg1);
}
