/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00BE4B50(s32);
extern void func_00BE5820(void *);

s32 func_00BE5990(void *arg0) {
    func_00BE4B50(0);
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, void (**)(void *), 0) = func_00BE5820;
    return 0;
}
