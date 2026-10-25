/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00259BA0(void);
void func_00259CB0(s32 *);
s32 func_0025EAE0(s32, s32 *);

u8 func_00258100(void) {
    s32 buf;

    if (func_00259BA0() == 0) {
        return 0;
    }
    func_00259CB0(&buf);
    return func_0025EAE0(1, &buf);
}
