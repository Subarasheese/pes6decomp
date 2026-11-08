/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00873FD0(s32 *, s32);
void func_00874460(s32 *);
void func_00874470(void);

s32 func_00875F60(s32 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (*arg0 != 0x810B) {
            return 0x8159;
        }
    } else {
        return -0x18;
    }
    func_00874470();
    func_00873FD0(arg0, arg1);
    func_00874460(arg0);
    return 0;
}
