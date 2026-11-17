/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, void (*)(void));
s32 func_00BD9770();
extern void func_002FE8B0(void);

s32 func_002FE900(void *arg0) {
    if (func_00BD9770() == 0) {
        return 0;
    }
    func_00305E60(arg0, func_002FE8B0);
    return 1;
}
